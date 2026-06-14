/*
 * assign.cpp
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
	int a, b; // Declaring two integers

	// Output simple assigned values
	cout << "Assign values: ";
	cout << "a = " << (a = 8) << "	";
	cout << "b = " << (b = 4);

	cout << endl << "And & assign: ";
	cout << "a += b (8 += 4) a = " << ( a += b);
	cout << endl << "Subtract & assign: ";
	cout << "a -= b (12 -= 4) a = " << (a -= b);
	cout << endl << "Multiply & assign: ";
	cout << "a *= b (8 *= 4) a = " << (a *= b);
	cout << endl << "Divide & assign: ";
	cout << "a /= b (32 /= 4) a = " << (a /= b);
	cout << endl << "Modulus & assign: ";
	cout <<" a %= b (8 %= 4) a = " << (a %= b);
	return 0; // Final return statement - returns zero integer to the operating system
		  	  	  // as required by the main function declaration.
}
