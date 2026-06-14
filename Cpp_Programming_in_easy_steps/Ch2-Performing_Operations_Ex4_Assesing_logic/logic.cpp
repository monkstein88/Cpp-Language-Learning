/*
 * logic.cpp
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

	// Declaring and initializing two integer variables - with values that can represent boolean values
	int a = 1, b = 0;

	// Output the result of (logica) AND evaluations
	cout << "AND logic: " << endl;
	cout << "(a && a) " << (a && a) << "(true) ";
	cout << "(a && b) " << (a && b) << "(false) ";
	cout << "(b && b) " << (b && b) << "(false)"<< endl;

	// Output the results of (logical) OR evaluations
	cout << endl << "OR logic: " << endl;
	cout << "(a || a) " << (a || a) << "(true) ";
	cout << "(a || b) " << (a || b) << "(true) ";
	cout << "(b || b) " << (b || b) << "(false) " << endl;

	// Output the results of (logical) NOT evaluations
	cout << endl << "NOT logic:" << endl;
	cout << "a = " << a << " !a = " << !a << " ";
	cout << "b = " << b << " !b = " << !b << endl;


	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
