/*
 * precedence.cpp
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
	// Declare an integer variable initialized with the result of an expression using default precedence, then output the result
	int num = 1 + 4 * 3;
	cout << endl << "Default order: " << num << endl;

	//Now, assign a result to an expession ot othe variable using explicit precedence, then output the result
	num = (1 + 4) * 3;
	cout << "Forced order: " << num << endl << endl;

	// Assign a result of  different expression to the variable using direction (default) precedence, then output the result
	num = 7 - 4 + 2;
	cout << "Default direction: " << num << endl ;

	// Now, assign a result of this expresssion to the variable using explicit precedence, then output the result
	num = 7 - (4 + 2);
	cout << "Forced order: " << num << endl;
	
	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}

