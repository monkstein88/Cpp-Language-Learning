/*
 * comparison.cpp
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
	// Declare and initialize variables that can convert (evaluate) to booleans
	int nil = 0, num = 0, max = 1; char cap = 'A', low = 'a';

	// Output equality comparisons of integers and characters
	cout << "Equality comparisons: ";
	cout << "(0 == 0)" << (nil == num) << "(true)";
	cout << "(A == a)" << (cap == low) << "(false)";

	// Output all other comparisons
	cout << endl << "Inequality comparison: ";
	cout << "(0 != 1) " << (nil != max ) << "(true)";
	cout << endl << "Greater comparison: ";
	cout << "(0 > 1) " << (nil > num) << "(false)";
	cout << endl << "Lesser comparison: ";
	cout << "(0 < 1) " << (nil < num) << "(true)" ;
	cout << endl << "Greater or equal comparison: ";
	cout << "(0 >= 1) " << (nil >= num) << "(false)";
	cout << endl << "Lesser or equal comparison: ";
	cout << "(0 <= 1)" << (nil <= num) << "(true)";

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}


