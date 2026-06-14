
#include "database_Ch18.h"
//============= START OF FUNCTION DEFINITIONS RELATET TO DATA OUTPUT=========//

void print_cd(int CD_number,cd_t* CD_record){
			printf("\n\nCD record number %d...",CD_number);
			puts("\n===================");
			printf(" Title: %s", (*CD_record).Title);
#ifndef NOARTIST
			printf("\n Artist: %s", (*CD_record).Artist);
#endif
			printf("\n Number of tracks: %d\n", (*CD_record).Number_of_Tracks);
			puts((is_bit_on((*CD_record).CD_flags_field,ALBUM_BIT)) ? " Album\\Single: Single" : " Album\\Single: Album");  // 
			puts((is_bit_on((*CD_record).CD_flags_field,IN_STOCK_BIT)) ? " In Stock: Yes" : " In Stock: No");
			printf(" Price: %.2f", (*CD_record).Price);
			puts("\n===================");
}

void press_and_exit(void){
	enter("\n=======================================\nPlease press ENTER to end the program!\n=======================================\n");
}


