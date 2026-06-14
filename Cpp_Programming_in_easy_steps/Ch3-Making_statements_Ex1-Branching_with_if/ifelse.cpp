/*
 * ifelse.cpp
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
	// Declaring and initializing two variables
	int num = 3;
	char letter = 'B';

	// If-else to test the integer variable value and outputs an appropriate response
	if(num > 5){
		cout << "Number exceeds five" << endl;
		if(letter == 'A'){cout << "Letter is A" << endl;}
	}else{
		cout << "Number is five or less" << endl;
	}





	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
