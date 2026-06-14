
/*
	Exercise 1.2:  Redo Exercise 2 from Section 8.3, this time using I/O manipulators instead of member functions and format flags.
*/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define SCREEEN_WIDTH (80) // The screen is assumed to be 80 characters wide

void center(const char* s);

int main(){

	center("Hello World!");
	center("Greetings!");
	center("The only easy day was yesterday.");

	return EXIT_SUCCESS;
}


void center(const char* s){
	int len;
	int center_w;

	len =  strlen(s);
	center_w = SCREEEN_WIDTH/2 + len/2;
	cout << setw(center_w)<< s << "\n";
}

/*

*/
