
#include "database_Ch18.h"
//============= START OF FUNCTION DEFINITIONS RELATED TO MISCELLANEOUS (HELPING) OPERATIONS=========//

/*
 *  We delete/remove the last character of the string that is before the NULL terminating character,
 * and replace it with a null character. The idea is to remove the new-line character which is typically placed just at the end of the string, 
 * before the '\0' character
 */
void string_nl_trim(char char_str[]){ // We delete/remove the last character of the string that is before the NULL terminating character, and replace it with a null character. The idea is to remove the new-line character which is typically placed just at the end of the string, before the '\0' character
	 if(char_str[strlen(char_str)-1] == '\n') 
	 		char_str[strlen(char_str)-1] = '\0';	
}


/*
 * 	A simple string is being passed, that we are going to have its initial blank characters remove. 
 * So we remove the first (initial) blank characters untill we reach a symbol character.
 */
void trim_init_whitespace(char String_to_be_trimmed[]){ 
	int orig_String_lenght;
	if(orig_String_lenght=strlen(String_to_be_trimmed)){ // We check if the the passed string is not empty. If it is we just finish this function, we don't need to perform any actions. Else (if it is storing something)...
		signed int last_blank_char_index; // Declare a integer variable, that is goint to serve as counter/indicator for the poisiton of the last blank character , in the beggining (initial portion) of the string
		signed int copy_char_counter;
		for(last_blank_char_index=0;((isblank(String_to_be_trimmed[last_blank_char_index])) && (String_to_be_trimmed[last_blank_char_index]!=0));last_blank_char_index++){	// Do nothing, just calculate and determine the position at which the first non blank character starts, what is its position/index in the string.
			; // Increment the character indexer and start a new for iteration.
		}// Well, when the string counter reaches a character that is either non blank or null, the if will fail and we need to brea
		
		// We start remodeling/reforming the string, so we lose the initial blank characters 		
		for(copy_char_counter=0; copy_char_counter<=(orig_String_lenght+1);copy_char_counter++){ // We start figuratevely "shifting the string leftwards" untill "we lose all the initial/startin " blank characters.
				String_to_be_trimmed[copy_char_counter]=String_to_be_trimmed[last_blank_char_index + copy_char_counter];
		}
	}	
}


/*
 *	 This function is going to be called when we are going to need a dynamically allocated array of cd_t type 
 * 	or if we need to extend an already existing dynamically allocated array of cd_t type by the number of "increase" * 
 * 	If old_count == NULL, the old_count is assumed to be 0 , which means that a new_array will be malloced/created , not realocated.
 */
cd_t* increase_cd_dyn_array(cd_t* orig_array, int orig_count, int increase){ 
	
	cd_t* new_array; // A pointer that is going to be passed back, holding the address of the new allocated space for the cd_t array
	
	/*
	 * 	Allocate space, in the first case - create dyn array for a brand new array, in the second case , reallocate space 
	 */
	if(orig_count == 0){ // if the passed count is 0, which means we start to create the array 
		new_array= malloc(increase*sizeof(cd_t));
	}
	else{
		new_array = realloc(orig_array,(orig_count + increase)*(sizeof(cd_t))); // So we increase the array, by actually calculating the sum of the size of the already allocated space + hom much more we are going to need. 
	}
	
	/*
	 * 	This will mean, taht the program was not able to allocate space during the above two allocations
	 */
	if(new_array == NULL){
		fprintf(stderr,"Could not create or increase cd_t array - %s\n",sys_errlist[errno]);
		exit(1);
	} 
	
	return new_array; // Return a pointed to the newly allocated or increase (extended) array.
}



































// WIP
/*
void trim_init_whitespace(char String_to_be_trimmed[]){ // A simple string is being passed, that we are going to have its initial blank characters remove. So we remove the first blank characters be
	int orig_String_lenght;
	if(orig_String_lenght=strlen(String_to_be_trimmed)){ // We check if the the passed string is not empty. If it is we just finish this function, we don't need to perform any actions. Else (if it is storing something)...
		signed int last_blank_char_index; // Declare a integer variable, that is goint to serve as counter/indicator for the poisiton of the last blank character , in the beggining (initial portion) of the string
		signed int copy_char_counter;
		for(last_blank_char_index=0;((isblank(String_to_be_trimmed[last_blank_char_index])) && (String_to_be_trimmed[last_blank_char_index]!=0));last_blank_char_index++){	// Do nothing, just calculate and determine the position at which the first non blank character starts, what is its position/index in the string.
			; // Increment the character indexer and start a new for iteration.
		}// Well, when the string counter reaches a character that is either non blank or null, the if will fail and we need to brea
		
		// We start remodeling/reforming the string, so we lose the initial blank characters 		
		for(copy_char_counter=0; copy_char_counter<=(orig_String_lenght+1);copy_char_counter++){ // We start figuratevely "shifting the string leftwards" untill "we lose all the initial/startin " blank characters.
				String_to_be_trimmed[copy_char_counter]=String_to_be_trimmed[last_blank_char_index + copy_char_counter];
		}
	}	
}
*/
/* Original function
void trim_init_whitespace(char String_to_be_trimmed[]){ // A simple string is being passed, that we are going to have its initial blank characters remove. So we remove the first blank characters be
	int orig_String_lenght = strlen(String_to_be_trimmed); // First we take the original (while not being tinkered) lenght of the string as we receive it, we store it in a variable because we are going to need it on several places in our code.
	if(orig_String_lenght){ // We check if the the passed string is not empty. If it is we just finish this function, we don't need to perform any actions. Else (if it is storing something)...
		signed int last_blank_char_index; // Declare a integer variable, that is goint to serve as counter/indicator for the poisiton of the last blank character , in the beggining (initial portion) of the string
		int copy_char_counter; // Declare a integer variable, that is goint to serve as counter/indicator for the poisiton of characters in a string, used for the inner loop , that is going to transforming/overwritting of the string on itself the 
		for(last_blank_char_index = -1 ; isblank(String_to_be_trimmed[last_blank_char_index+1]) ; last_blank_char_index++){	// Do nothing, just calculate and determine the position at which the first non blank character starts, what is its position/index in the string.
			;  // Do nothing loop 
		}
		// We start remodeling/reforming the string, so we lose the initial blank characters 
		if(last_blank_char_index != -1){ // First we check the flag & counter variable "last_blank_char_index" has changed (incremented) , if it did, then...
			for(copy_char_counter=0; copy_char_counter<(orig_String_lenght+1);copy_char_counter++){ // We start figuratevely "shifting the string leftwards" untill "we lose all the initial/startin " blank characters.
				String_to_be_trimmed[copy_char_counter]=String_to_be_trimmed[last_blank_char_index + copy_char_counter + 1];
			}
		}
	}
}
*/
