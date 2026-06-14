/*
 * switch.cpp
 *
 *  Created on: 21.12.2013
 *      Author: Joro
 */

/* Preprocessor Directives: */
// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams
// Specify the namespace(s) prefix to use
using namespace std;


/* Program's Entry Point - main function (method) */
int main(){
	// Declare and intialize an integer variable with a value to be matched
	int num = 6;

	// Switch statemenet to seek a match
	switch(num){
		case 1: cout << num << " : Monday";	break;
		case 2: cout << num << " : Tuesday"; break;
		case 3: cout << num << " : Wednesday"; break;
		case 4: cout << num << " : Thursday"; break;
		case 5: cout << num << " : Friday"; break;
		default : cout << num << " : Weekend day"; // if no match has been found, also no break statement is needed
		// at the end.
	}


	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
