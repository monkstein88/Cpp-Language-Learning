/*
 * arithmetic.cpp
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
	int a = 8, b = 4; // Declare and initialize two integers

	// Output the results of each basic arithmetic operation
	cout << "Addition result: " << (a + b) << endl;
	cout << "Subtraction result: " << (a - b) << endl;
	cout << "Multiplication result: " << (a * b) << endl;
	cout << "Division resut: " << (a / b) << endl;
	cout << "Modulus result: " << (a % b) << endl;

	// Output results of both postfix and prefix increment operation
	cout << "Postfix increment: " << a++ << endl;
	cout << "Postfix results: " << a << endl;
	cout << "Prefix increment: " << ++b << endl;
	cout << "Prefix result: " << b << endl;


	return 0; // Final return statement - returns zero integer to the operating system
		  	  	  // as required by the main function declaration.
}
