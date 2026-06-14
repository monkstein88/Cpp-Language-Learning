// Database.h for the course project

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

/* 	In the C programming language that is used to program for the Desktop machines - stdio.h is the C library to perform Input/Output operations
Input and Output operations can also be performed in C using its Standard Input and Output Library ( known as stdio.h in the C language).
This library uses what are called streams to operate with physical devices such as keyboards, printers, terminals or with any other type 
of files supported by the system. Streams are an abstraction to interact with these in an uniform way;
All streams have similar properties independently of the individual characteristics of the physical media they are associated with.

Streams are handled in the stdio library as pointers to FILE objects. A pointer to a FILE object uniquely identifies a stream, 
and is used as a parameter in the operations involving that stream.
There also exist three standard streams: stdin, stdout and stderr, which are automatically created and opened for all programs using the library.

Stream properties
Streams have some properties that define which functions can be used on them and how these will treat the data input or output through them.
Most of these properties are defined at the moment the stream is associated with a file (opened) using the fopen function:
Read/Write Access
    Specifies whether the stream has read or write access (or both) to the physical media they are associated with.
Text / Binary
    Text streams are thought to represent a set of text lines, each one ending with a new-line character. Depending on the environment where the application is run some character translation may occur with text streams to adapt some special characters to the text file specifications of the environment. A binary stream, on the other hand, is a sequence of characters written or read from the physical media with no translation, having a one-to-one correspondence with the characters read or written to the stream.
Buffer
    A buffer is a block of memory where data is accumulated before being physically read or written to the associated file or device. Streams can be either fully buffered, line buffered or unbuffered. On fully buffered streams, data is read/written when the buffer is filled, on line buffered streams this happens when a new-line character is encountered, and on unbuffered streams characters are intended to be read/written as soon as possible.

Indicators related to the stream. This indicator can be checked with the ferror function, and can be reset by calling either to clearerr or to any repositioning function (rewind, fseek and fsetpos).
End-Of-File indicator
Streams have certain internal indicators that specify their current state and which affect the behavior of some input and output operations performed on them:
Error indicator
    This indicator is set when an error has occurred in an operation
    When set, indicates that the last reading or writing operation performed with the stream reached the End of File. It can be checked with the feof function, and can be reset by calling either to clearerr or to any repositioning function (rewind, fseek and fsetpos).
Position indicator
    It is an internal pointer of each stream which points to the next character to be read or written in the next I/O operation. Its value can be obtained by the ftell and fgetpos functions, and can be changed using the repositioning functions rewind, fseek and fsetpos.
*/
	// Other Standart C library inclusions:
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// User-made C library (.h files) and source (.c files) incusions 

// User-made preprocessor operations (like #defines and others) and also macro declarations, that do not belong to a certain source, but rather to an overall include file:
//#define NOARTIST // We'll use this when we want, and this preprocessor definition must be placed in the database.h file

#ifndef TRUE
#define TRUE	1
#endif

#ifndef FALSE
#define FALSE	0
#endif
/*  We probably won't need this, we can dynammically allocate space for the structures, depending on the how many CDs we need to track 
#define MAX_NUMBER_CDs 100				// Here we define a constant depicting the maximum number of CDs that we could store. 
*/
/* We now need those (hard/"static") defines for the declaration of string sizes or structure array sizes, because now we're not going to use a dynamic memory allocation. We'll have to hold the information in files */
#define TITLE_MAX_CHAR_SIZE 100			// Here we define the maximum size that a CD's title can be, including only the significant characters/symbols.This does not include the new lina and the null characters 
#define ARTIST_MAX_CHAR_SIZE 100			// Here we define the maximum size that a CD's artist can be, including only the significant characters/symbols. This does not include the new lina and the null characters 
#define FILENAME_MAX_CHAR_SIZE 1000		
#define TEMP_STRING_HOLDER_SIZE 100

#define	NUMBER_OF_CDS_PTR_ARRAY	100

#define ABSOLUTE_FILEPATH "\0" // We define/set the path to where the file for writing and reading (and editing) is going to be placed on the PC. The definition is going to represent a string, that will hold the whole directory path to where the file will be saved/stored. Right now we set the strings (the path) to be emptpy (pointing to nowhere). We are going to redefine the path, in the file.c source file.
#define FULL_FILENAME "\0" // We define/set the name of the file used for writing and reading (and editing) which is going to be placed/stored on the PC, the name may include the extension too of the file. The definition is going to represent a string, that will hold the whole name of the file, may include its extension.  Right now we set the strings (the name) to be emptpy (empty file name). We are going to redefine the name, in the file.c source file.

#define IN_STOCK_BIT (0)	// 0-st bit will be used as a flag whether the CD is in stock (1) or not (0)
#define	ALBUM_BIT (1)	// 1-st bit will be used as a flag whether the CD is an album (1) or a not (0). If it is not an album, then it will be considered to be a single.

#define conditional_on_off(condition,flags_field,bit_number)	( (condition)?((flags_field)|=(1<<(bit_number))):((flags_field)&=(~(1<<(bit_number)))) )
#define is_bit_on(flags_field,bit_number)	(	((flags_field)&(1<<(bit_number))) ? (1) : (0)	)

#ifndef count_of // We test whether, a definition with the same name had already been done by the compiler (IDE) itself, or in this project , before. Notice that we don't need to put in the brackets (parameter to be passed) - (x), meaning that we don't need to make the check like: count_of(x) - in this case, actually the compiler will complain. So we just need to do verification - count_of
#define count_of(x) ((sizeof(x))/(sizeof(x[0])))
#endif
// Constant and variable declarations go here:
struct cd_type{ // you cannot initialize the values of the members of a structure, during its declaration
//	int CD_numerator ;
	char Title[TITLE_MAX_CHAR_SIZE] ; // We declare pointer to char (actually what we want to achieve here is to have just 100 counts of 50 character long strings, we don't really mean to have two dimensional string (as a matrix)) that will hold the tittle of the specific record. Here we include (by adding a 1)  the null character (at the end)
#ifndef NOARTIST
	char Artist[ARTIST_MAX_CHAR_SIZE] ;// Here we include (by adding a 1)  the null character (at the end)
#endif	
	unsigned short int Number_of_Tracks;
	int CD_flags_field;
    float Price;
};
typedef struct cd_type cd_t;
typedef cd_t* cd_t_ptr;


// With the function protypes, you have to explicit (define/write down) about their type . You cannot be implicit (just skipping to define their type and expect that the compiler will atuomatically decide a tyoe for you )
void enter(char char_str[]);
int yesno(char str_query[]);
void string_nl_trim(char char_str[]);
int read_int(char query_char_str[]);
float read_float(char query_char_str[]);
void read_string(char query_char_str[],char char_str_return[],int MAX_str_return);
char* read_dyn_string(char query_char_str[]);
void read_cd(cd_t* CD_record);
void print_cd(int CD_number,cd_t* CD_record);
void press_and_exit(void);



int file_exist(char exist_file[]);
int save_file(char* filename, cd_t** cds_ptr_array_return, int count_of_the_cds, int append_flag);
void open_file(char *fname, int *num,cd_t** cds_ptr_array_return);

void string_nl_trim(char char_str[]);
void trim_init_whitespace(char String_to_be_trimmed[]);
cd_t* increase_cd_dyn_array(cd_t* old_array, int old_count, int increase);


