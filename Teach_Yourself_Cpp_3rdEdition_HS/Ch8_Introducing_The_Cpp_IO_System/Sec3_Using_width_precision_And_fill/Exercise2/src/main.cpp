
/*
	Exercise 2.: Create a function called 'center()' that has this prototype:

	void center(char* s);

	Have this function center the specified string on the screen. To accomplish this, use the 'width()' function. Assume that the
	screen is 80 characters wide. (For simplicity, you may assume that no string exceeds 80 characters.) Write a program that
	demonstrates you function works.
*/

#include <iostream>
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
	cout.width(center_w);
	cout << s << "\n";
}

/*

*/
