/*
 * ternary.cpp
 *
 *  Created on: 20.12.2013
 *      Author: Joro
 */

/* Preprocessor Directives: */
// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams
// Specify the namespace(s) prefix to use
using namespace std;


/* Program's Entry Point - main function (method) */
int main(){
	// Declaring three integer variables, and initializing two of them.
	int a, b, max;
	a = 1, b = 2;

	// Output the value and parity of the first examinated variable - a
	cout << "Variable a value is: ";
	cout << ((a != 1) ? "not one," : "one, ");
	cout << ((a % 2 != 0) ? "odd" : "even");

	// Output the value and parity of the second examinated variable - b
	cout << endl << "Variable b value is: ";
	cout << ((b != 1) ?  "not one, " : "one, ");
	cout << ((b % 2 != 0) ? "odd" : "even");

	// Output the greater of the two stored variables values
	max = (a > b) ? a : b;
	cout << endl << "Greater value is: " << max << endl;
	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}


// N.B! Ternary operator can return values of any data type - numbers, strings, boolean values, etc...
