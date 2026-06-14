/*
 * vars.cpp
 *
 *  Created on: 18.12.2013
 *      Author: Joro
 */


/* Prepocessor Directives: */
#include <iostream> //	include C++ library classes
using namespace std; //	specify the name prefix to use

int main(){ //	Main function (method) , entry  point (beginning) for our program

	// Declaration and initialization statements of various data types
	char letter ; letter = 'A'; // Declared then initialized
	int number;	number = 100;	// Declared then initialized
	float decimal; decimal = 7.5; // Declared then initialized
	double pi = 3.14159;		// Declared and initialized
	bool isTrue = false; 		// Declared and initialized

	// Statements to output each stored value
	cout << "char letter: " << letter << endl;
	cout << "int number: " << number << endl;
	cout << "float decimal: " << decimal << endl;
	cout << "double pi: " << pi << endl;
	cout << "isTrue: " << isTrue << endl;


	return 0; // Final return statement - returns zero integer to the operating system
			  // as required by the main function declaration.
}
