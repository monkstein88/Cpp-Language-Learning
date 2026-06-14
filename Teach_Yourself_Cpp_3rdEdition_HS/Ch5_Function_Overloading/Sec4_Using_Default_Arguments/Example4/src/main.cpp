
/*
	Example 4.: Another good application for a default argument is found when a parameter is used to select an option. It is
	possible to give that parameter a default value that is used as a flag that tells the function to continue to use the
	previously selected option. For example, in the following program, the funciton 'print()' displays a string on the screen. If
	its 'how' parameter is set to 'ignore', the text is displayed as is. If 'how' is 'upper', the text is displayed in uppercase.
	If 'how' is 'lower', the text is displayed in lowercase. When 'how' is not speciied, it defaults to -1, which tells the function
	to reuse the last 'how' value.

*/
#include <iostream>
#include <cctype>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

const int ignore = 0;
const int upper = 1;
const int lower = 2;

void print(char* s, int how = -1);

int main(){

	print((char*)"Hello There\n", ignore);
	print((char*)"Hello There\n", upper);
	print((char*)"Hello There\n"); // continue in upper
	print((char*)"Hello There\n", lower);
	print((char*)"Hello There\n"); // continuer in lower

	return EXIT_SUCCESS;
}

/*
	Print a string in the specified case. Use last case specified if none is given.
*/
void print(char* s, int how){
	static int oldcase = ignore;

	// reuse old case if none specified
	if(how < 0)
		how = oldcase;
	while(*s){
		switch(how){
			case upper: cout << (char) toupper(*s);
			break;
			case lower: cout << (char) tolower(*s);
			break;
			default: cout << (*s) ;
		}
		s++;
	}
	oldcase = how;
}


/*
	The program displays the following output:
	"
	Hello There
	HELLO THERE
	HELLO THERE
	hello there
	hello there
	"
*/
