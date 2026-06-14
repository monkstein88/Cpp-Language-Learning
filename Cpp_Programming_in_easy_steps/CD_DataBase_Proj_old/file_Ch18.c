#include "database_Ch18.h"

#undef ABSOLUTE_FILEPATH  // To redefine a definition, first we need to undef the previous definition.
#define ABSOLUTE_FILEPATH "E:\\C programming tutorial exercises\\Ordinary (console application) C exercise\\VTC exercises\\Ch16\\CourseProject-Ch16_dev_v1.1"// and then define it again

#undef FULL_FILENAME/// To redefine a definition, first we need to undef the previous definition.
#define FULL_FILENAME "CD_data.dat"



/*
 *	open_file()
 *
 *	Read CD records from a specified file (placed at the current directory of the program).
 * 	Dynamically allocates memory enough to hold the CD records (must be freed).
 * 	Returns a pointer to the allocated memory, and sets "num" depicting how many had already been read/allocated.
 * 	Sets num to -1 and returns NULL if an error occured.
 */
void open_file(char *fname, int *num,cd_t** cds_ptr_array_return){ // The fname char pointer, this is going to hold the address of the string that represents the name of the file we are trying to open
	
	FILE*	fptr; // We need a file handler/descriptor (pointer to a FILE), no matter what, so we it can be utilized for checking up whether such a file exist already
	cd_t	cd; // We declare a single variable , that is goind to be used as a buffer for holding each element (cd) while reading the binary file, one element at a time.
	cd_t*	new_cd; // A pointer to the allocated array of cds
	
	/*
	 * 	Open the file.
	 */
	if(((fptr=fopen(fname,"rb"))==NULL)){ // IF FAILED (the file hasn't been found) , there's no such file , so we continue onwards.
		*num = -1; // We set num (the value that the pointer is ponting to) to -1 , as an indicator, to the function that called this one.
		return ; // We exit the function
	}
	
	*num = 0; // IF SUCCESSED (the file has been found) , set the referenced num value to zero. This will have two purposes.
	
	while(fread(&cd,sizeof(cd),1,fptr) == 1){ // fread will return the number of the read elements 
		if((new_cd = malloc(1*sizeof(cd_t)))==NULL){
			fprintf(stderr,"Fail to allocate memory, during read of the file - %s",fname);
			return; // So we return nothing (exiting this function) and continue onwards with our program
		}
	//	new_cds = increase_cd_dyn_array(new_cds, *num, 1);
		new_cd[0] = cd; /* Structure copy */
		*(cds_ptr_array_return + (*num)) = new_cd;
		(*num)++;			/* note the need for brackets, so we increase the value in that address that is held in the pointer. We do not want to increase the address itself. */
	}
	fclose(fptr);
	
	//return new_cds;
}



/*
 *	 save_file()
 *	 
 *	 Write (append or create a new file - depending on the value of "append") "count" number of cds, 
 *	to a binary file - "filename" , from an allocated array of cds.
 */
int save_file(char* filename, cd_t** cds_ptr_array_return, int count_of_the_cds, int append_flag){
	int i;
	FILE* fptr;
	int rv; // return value that is going to represent the status that the operation had exited.
	
	/*
	 *	 First, open the file for writting , check whether it can done be so
	 */
	if((fptr=fopen(filename,(append_flag? "ab" : "wb")))==NULL){
		return -1; // IF FAILED ,
	}
	// IF SUCCEEDED
	/*
	 *	 Write all the records to the file
	 */
	 for(i=0;i<count_of_the_cds;i++){
	 	if(fwrite((cds_ptr_array_return + i),sizeof(cd_t),1,fptr)!=1){
	 		fprintf(stderr,"Fail, during the saving of the file - %s",filename);
			return -1; // So we return nothing (exiting this function) and continue onwards with our program
	 	}
	 	
	 }

	 fclose(fptr); // after writting, close the file
	 return (rv);
}



/*
 *	 This function will check whether a file, with the name specified as an argument, 
 *	exist in the current/same, directory, where the program positioned
 */
int file_exist(char exist_file[]){ 
	FILE* fptr_existing_binary;
		if((fptr_existing_binary=fopen(exist_file,"rb"))==NULL){
			printf("\n\tCould not find \"%s\" file",exist_file);
			return 0;	
		}
			close(fptr_existing_binary);
			return 1; // Return 1 if the file is existent		
}



