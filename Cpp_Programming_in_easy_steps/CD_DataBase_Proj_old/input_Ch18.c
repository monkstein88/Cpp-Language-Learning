
#include "database_Ch18.h"
//============= START OF FUNCTION DEFINITIONS RELATET TO DATA INPUT=========//

void read_string(char query_char_str[],char char_str_return[],int MAX_str_return){ // We also should pass the maximum size of the array that is going to be manipulated/used, because inside the function we cannot use the sizeof keyword to determine its size. In the declaration of the parameter , there is no size defined, the brackets for the " char_str_return"  are empty - "[]"
	fputs(query_char_str,stdout);
	fflush(stdin);
	fgets(char_str_return,MAX_str_return,stdin);
	string_nl_trim(char_str_return);
}


char* read_dyn_string(char query_char_str[]){ /* Function that reads a string from the standart input (keyboard). Firstly it prints out a string that we passed to the function (as a query), then we entering a string, and apropriete amount of memory gets allocated to accomodate that string. At the end a pointer to this allocated memory is returned.  */
	//char* malloced_str_ptr;
	char temp_String_holder[TEMP_STRING_HOLDER_SIZE];
	fputs(query_char_str,stdout);
	fflush(stdin);
	fgets(temp_String_holder,sizeof(temp_String_holder),stdin);
	string_nl_trim(temp_String_holder);
	//malloced_str_ptr=strdup(temp_String_holder);
	//return malloced_str_ptr;
	return (strdup(temp_String_holder));
}

float read_float(char query_char_str[]){
	float read_in_float;
	fputs(query_char_str,stdout);
	fflush(stdin);
	scanf("%f",&read_in_float);
	return read_in_float; // Using "return" functions (as a whole) can only return one value.
}

int read_int(char query_char_str[]){  // Routine/function that is called with a parameter that s
	int read_in_int;
	fputs(query_char_str,stdout);
	fflush(stdin);
	scanf("%d",&read_in_int);
	return read_in_int;  // Using "return" functions (as a whole) can only return one value.
}

int yesno(char str_query[]){ // The function returns 1 for Yes and 0 for No
	char answer;
	for(;;){
			fflush(stdout); // Clearing out the output buffer, that may have new line charactares, space, tabulation , letters, numbers , stringsetc. left over from a previously done output. Things that are still buffered/hold on and thus way we make the to "come out" , to get printed out. Or actually ( I don't know for sure) maybe the buffered things in the output (that are held on and are waiting to get printed out) will get just "cleared" meaning that nothing will be printed out.
			fputs(str_query,stdout); // We print out the string (a string variable, or a constant string litteral (message in quotes - "... " ), that has been passed/put as a parameter to this function. The text should be in query/question form.
			fputs(" ([Y]es or [N]o)?: ",stdout);   // We placed the querry string with the yes or no hint here, for additional clearness of what this function does, 
			fflush(stdin);
			scanf("%c",&answer); // read the initial character
			answer=toupper(answer);
			if(answer=='Y') // We use this style of checking if the answer is corresponding to lower or upper case 'Y' letter, if the letter is of lower case it will convert it to upper case (for example) effectively doing 'y' -> 'Y') , but if the letter is already a capital , it will not change it.
				return 1;	 // increase the count, and continue onwards . This return statement will make the for loop to break, to end the function's execution and return the value of 1 to the function. This means that we don't need a break; statement after the return 1; statement, and also we don't need an else statement for the if. Using "return" functions (as a whole) can only return one value.
			if(answer=='N')  // We use this style of checking if the answer is corresponding to lower or upper case 'Y' letter, if the letter is of lower case it will convert it to upper case (for example) effectively doing 'y' -> 'Y') , but if the letter is already a capital , it will not change it.
			 	return 0;	// No more adding of CDs to the database .  Using "return" functions (as a whole) can only return one value.
			puts("\nError - use only 'y' or 'n' (small or capital)!");	
	}
}

void read_cd(cd_t* CD_record){
		read_string(" Title? ",(*CD_record).Title, sizeof((*CD_record).Title)); // The sizeof operator is used for variables (size) that are determined when the program is compiled. sizeof cannot be used with variables that are determined when the program is running.
#ifndef NOARTIST		
		read_string(" Artist? ",(*CD_record).Artist, sizeof((*CD_record).Artist)); // The sizeof operator is used for variables (size) that are determined when the program is compiled. sizeof cannot be used with variables that are determined when the program is running.
#endif
		(*CD_record).Number_of_Tracks = read_int(" Number of tracks? ");
		conditional_on_off(yesno(" Single? "),(*CD_record).CD_flags_field,ALBUM_BIT);
		conditional_on_off(yesno(" Is it in stock? "),(*CD_record).CD_flags_field,IN_STOCK_BIT);
		(*CD_record).Price = read_float(" Price (e.g. 4.65, 4.00, etc.)? ");
}

void enter(char char_prompt_str[]){
	fflush(stdout);  // Clearing out the output buffer, that may have new line charactares, space, tabulation , letters, numbers , stringsetc. left over from a previously done output.
	puts(char_prompt_str);  // The argument that holds the string that is goint to be printerd
	fflush(stdin); // Clearing out the input buffer, that may have new line charactares, space, tabulation , etc. left over from a previously done input.
	getchar();
}




