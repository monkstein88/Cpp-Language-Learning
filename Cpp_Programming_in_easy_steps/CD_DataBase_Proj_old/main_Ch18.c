/* ========== 	Course Project ============== */
/* Course Project description: 	
	The course project is going to be a single C program, that might by used by record shop
to track its inventory of CDs 
	*The program will need to store information in the following fields:
		- Title, Artis, Number of tracks, Album/Single, Price 	
*/ 

 	// Standart C library for input and output inclusion
#include <stdio.h> // 	By this statement we "tell/order" the compiler IDE to include, look for and link the  "stdio.h" in our program/project.
// Whenever a function, statement, constan or variable is casted/invoked from this header file, the compiler will link (using the linker) and 
// extract/take whatever part we "called" from this file.
// 	The stdio.h , library holds the definitions of the printf() and scanf() functions.

	// Other Standart C library inclusions, the compiler will search for those files in its specified directory called "include path", we put the standart header files (their inclusion statements) at top of our program in:
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
	// User-made C library (.h files) and source (.c files) incusions , the user made header files follow , after the standart headers:
#include "database_Ch18.h"  // First , the compiler will look in the current dierctory (where the source file that we use right now ) is
	// User-made preprocessor operations (like #defines) , that do not belong to an (other) # include file, but their rather belong to the current source file (.c):
	
	// User-made marcros, belong to the current source file (.c) , rather than other #include-file :
	

// Declaration (with optional initialization) of global scope variables or constants . All global variables are automatically initialized to 0, if they have not been initialized explicitly.
	int CD_count; /* This variable will depict/felect the count (in the database of each CD). The same idea as the above case, but we just need two variables*/ // Static variables (no matter if they are global or local) (and also as global variables) are always initialized to 0 (implicitly). So we don't really need to initialize (to put equal sign) to zero  
	cd_t* cds_ptr_array[NUMBER_OF_CDS_PTR_ARRAY] = {NULL}; /* This pointer, we will use as an array that will be allocated depending on the operation we perform */
	char file_name[FILENAME_MAX_CHAR_SIZE]={'\0'}; /* A string holder, that is going to be used for current filenames. */
	int changes; /* A boolean variable that is going to be used as flag if a change has been made: 1 - change has been made ; 0 - no changes */
	//int reached_CD_count;
	
//============= START OF FUNCTION DECLARATIONS (Descriptions) ============// 


/*	 reset_everything()
 *
 *	 Perform any necessary "free"ing and reset all the globals
 *	back to a proper starting point
 */
static void reset_all_globals(void){
	int i;
	
	/*
	 *	 Only free the array if we are sure it is a valid pointer
	 */
	 
	 for(i=0;(cds_ptr_array[i] != NULL) && (i<count_of(cds_ptr_array));i++){
	 	free(cds_ptr_array[i]);
	 	cds_ptr_array[i] = NULL;
	 }
	 CD_count = 0; // clear the count of cds
	 changes = 0; // clear the changes flag
	 file_name[0] = '\0'; // "clear" the current name
	 
	 //int reached_CD_count=0;
}



/*
 *	 are_you_sure_discard()
 *
 *	 If the "changes" flag variable has been set (meaning that some change had been made), a
 *	ask the user if they want to discard them, returns 1 if it is okay to proceed, or 0 otherwise
 */
static int are_you_sure_discard(){
	if(!changes) // Check for changes,
		return 1; // If changes had not been made, nothing will hapen (not even a prompt asking you). Only a 1 will be returned . You don't need to ask them if they are sure
	return yesno("Do you want proceed, while discard all the records ");
}



/*
 *	 general_open()
 *	 
 Perform all the kinds of opens we do (from the meny, from the command line)
 */
static void general_open(char *new_fname){
	
	cd_t* 	new_cds; /* the pointer that we are going to use as an array, which is going to hold allocated elements of cd_t type */
	int		new_count;  /* Will tell us how much elemnts are there in the array*/
	
	open_file(new_fname,&new_count, &cds_ptr_array[0]);
	if(new_count == -1){ // Such file does not exist in the program's directory
		fprintf(stderr,"Could not open the file - %s",new_fname);
		return; // So we return nothing (exiting this function) and continue onwards with our program
	} // Any previous (original) lists will be preserved if failed open (a new and existing file)

	/*
	 *	 The temp array is now to become the real array
	 *	update the globals accordingly
	 */
	 reset_all_globals();
	 CD_count = new_count;
	 strcpy(file_name, new_fname);
	 
	printf(" Successfully read file - %s, and found %d new records\n",file_name,CD_count);
}

/*
 *	 general_save()
 *
 *	 Perform all kinds of saves we do (regular save, save as and append)
 *	"save as" and "append" are booleans, so they are mutually exclusive.
 *	You can't have them both set to 1. Only one of the two can be set to 1.
 */
static void general_save(int append, int save_as){
	char new_fname[FILENAME_MAX_CHAR_SIZE]; // The file name we'll give to it
	
	/*
	 *	 If they execute "append" or "save as" operation, then prompt for a filename that exists (for appending),
	 *	or a new filename (for a new file).
	 */
	if(append || save_as){ // If we append (to some already existing file) or saving as (under a specified name)
		read_string("Please enter the name of the file: ", new_fname, sizeof(new_fname));  // we ask for the name here
	}else{
		strcpy(new_fname,file_name); // If not, then use the currently used (the global var - "file_name") one (to save to).
	}
	
	/*
	 *	 If they are appending or doing a "Save as",
	 *	then prompt for a filename
	 */
	if(save_as && file_exist(new_fname) && !yesno("The file exists. Do you want to overwrite it ")){
		return;
	}
	
	/*
	 *	Try, saving the list to a file
	 */
	if(save_file(new_fname,&cds_ptr_array[0],CD_count,append)== -1){ // If the saving failed
		fprintf(stderr,"\n\t Could not save the content to the \"%s\" file",new_fname);
		return; // Return nothing
	}
	
	/*
	 * If succeeded
	 */
	 printf("\nList saved successfully to %s with %d counts of records",new_fname,CD_count);
	 changes = 0; // changes have benn saved
	 
	 /*
	  *	 If a "Save as" operation has been executed,
	  *	then use the new filename as the current one
	  */
	 if(save_as){
	 	strcpy(file_name,new_fname);
	 }
}



/*
 *	 file_new()
 *
 *	 Menu option 1 : Just wiping the global vars, not doing anything else
 */
static void file_new(){
	
	if(are_you_sure_discard()){
		reset_all_globals;	
	}
}



/*
 *	 file_open()
 *
 *	 Menu option 2 : open an existing file, but first we check if there are changes, whether the user will like to discard them.
 */
static void file_open(){
	char new_fname[FILENAME_MAX_CHAR_SIZE];
	
	if(!are_you_sure_discard()){ // In case any changes had been made, ask whether the user wants to discard them
		return; //if he doesn't want to do just, Return nothing, just exit the function 
	}

	read_string("Please enter a name of the file to be opened: ",new_fname,sizeof(new_fname));
	general_open(new_fname);	
}



/*
 *	 file_save()
 *
 *	 Menu option 3 :
 */
static void file_save(){
	/*
	 *	 If the current filename is empty, we are really doing a "save as" operation
	 */
	 general_save(0,strlen(file_name)==0);
}



/*
 *	 file_save_as()
 *
 *	 Menu option 4 : 
 */
static void file_save_as(){
	 general_save(0,1);
}



/*
 *	 file_append()
 *
 *	 Menu option 5 : 
 */
static void file_append(){
	 general_save(1,0);
}



/*
 *	 edit_add_cd()
 *
 *	 Menu option 6 : add a new record to the system
 */
static void edit_add_cd(){
	
	cd_t cd;
	cd_t* cd_ptr;
	
	/*
	 * Read in the next CD
	 */
	printf("\n Please enter the details of CD #%d...\n\n",CD_count+1);
	read_cd(&cd);
	
	/*
	 *	 Increase the size of the CD array by 1 (for any future)
	 */
	 
	 if((cd_ptr = malloc(1*sizeof(cd)))==NULL){
			perror("Fail to allocate memory, during add of a CD");
			return; // So we return nothing (exiting this function) and continue onwards with our program
	}
	 
	*cd_ptr = cd;
	cds_ptr_array[CD_count] = cd_ptr;
	CD_count++;
	
	changes = 1; // We set the flag, we had clearly changed something in the database
}



/*
 *	 view_display_cd()
 *
 *	 Menu option 7 : view one record (details)
 */
static void view_display_cd(){
	
	int number;
	
	/*
	 *	 First check whether there are any CDs in the system currently.
	 */
	if(CD_count == 0){
		puts("There are no CDs in the system!");
		return ; 
	}
	
	/*
	 *	 ask for the CD number until a valid one is given
	 */
	for(;;){
		number = read_int("Please enter the number of the CD that you wish to see: ");
		if(number >= 1 && number <= CD_count){ // Check if the number given is valid
			break;
		}
		printf("\n Invalid number. There %d CDs in the system\n", CD_count);  // If not, just continue looping
	}
	/*
	 *	 If the number is valid, print the #CD details
	 */
	print_cd(number,cds_ptr_array[number-1]);
}



/*
 *	 view_display_all_cds()
 *
 *	 Menu option 8 : view all records (details)
 */
static void view_display_all_cds(){
	
	int i; // We just declare a counter
	
	/*
	 *	 First check whether there are any CDs in the system currently.
	 */
	if(CD_count == 0){
		puts("There are no CDs in the system!");
		return ; 
	}
	
	/*
	 *	 If there are any CDs in the database , print them all
	 */
	for(i=0;i<CD_count;i++){
		print_cd(i+1,cds_ptr_array[i]);	
		
		if(i<(CD_count - 1)){ // Only do this untill you reach the last record
			enter("\nPress enter to see the next CD's details set");
		}else{
			enter("\nThat's all the CDs available, press enter to continue");
		}
	}
}

/*
 *	 quit()
 *
 *	 Menu option 9 : Just quit the program
 */
static void quit(){
	if(are_you_sure_discard()){
		exit(0); // Just exit the program normally
	}
}



/*
 *	 reset_and_goodbye()
 *	 
 *	 Kind of wrapper function that reesets the value of all the global variables and prints up the message.
 *	It is going to be utilized when the program ends, with atexit
 */
static void reset_and_goodbye(void){
	reset_all_globals();
	press_and_exit();
}

/*
 *	 display_menu();
 * 
 */
static void display_menu(void){
	int choice;
	
	
	for(;;){
		choice=menu_prompt();
		switch(choice){
			case 1	:	file_new(); break;
			case 2	:	file_open(); break;
			case 3	:	file_save(); break;
			case 4	:	file_save_as(); break;
			case 5	: 	file_append(); 	break;
			case 6	:	edit_add_cd();	break;
			case 7	:	view_display_cd();	break;
			case 8	:	view_display_all_cds();	break;
			case 9	:	quit();	break;
		}
	}
	
}



/*
 *	 menu_prompt()
 *
 *
 */
int menu_prompt(){
	int selection = 0;
	/*
	 *	 Check the filenames and cd counts are currently available/stored,
	 *	and if there are any, display them (the file name and CD counts).
	 */
	puts("\n==============================================================");
	if(strlen(file_name)<1){
		printf(" Currently opened file: %s", "=NONE=");
	}else{
		printf("\n Currently opened file: %s", file_name);
	}
	if(CD_count<=0){
		printf("\n Current number of CDs in the database: %s", "=NONE=");
	}else{
		printf("\n Current number of CDs in the database: %d", CD_count);
	}
	/*
	 *	 Display the menu prompt
	 */
	puts("\n==============================================================");
	puts(" === MENU ===");
	puts(" 1.\tFile:\tCreate a new list");
	puts(" 2.\t\tOpen an existing list");
	puts(" 3.\t\tSave the list");
	puts(" 4.\t\tSave the list with a new name");
	puts(" 5.\t\tAppend list to another file");
	puts(" 6.\tEdit:\tCreate a new record");
	puts(" 7.\tView:\tDisplay a specific record");
	puts(" 8.\t\tDisplay all records");
	puts(" 9.\tExit");	
for(;;){
	selection=read_int(" Please, select one of the following options from the menu, by entering only its number: ");
	if(selection < 1 || selection > 9){
		puts("\n The value you entered is invalid, plase try again!\n");
		continue;
	}
		break;	// Break from the infinite loop, if you entered correctly
	
}
	return(selection); //Using "return" functions (as a whole) can only return one value.
}	
	
	
	
	
	
	
	
//============== START OF THE MAIN PROGRAM ================//
int main(int argc, char* argv[]){ // main() does not need to be prototype.

// Declaration (with optional initialization) of local scope variables or constants
	atexit(reset_and_goodbye); /* When the main() (the program finishes and exits) print an appropriate ending message*/
	
	/*
	 *	 If there is a single command line argument, when we start the program.
	 *	This argument will be enterpreted as a name of a file from which to read the CDs from. 
	 *	The program will search for the name (in the local directory).
	 */
	if(argc==2){
		general_open(argv[1]);
	}
	
	puts("\n\t\t =Record Shop Inventory Tracking System v.0.6.2= ");
	puts(" ============================================================================");	
	
	for(;;){
		display_menu();
	}
	
	return 0; // Returning 0 to the program that the main() function, that is the OS (Operating System). Using "return" functions (as a whole) can only return one value.
	}

//============= END OF MAIN THE PROGRAM ==================//





