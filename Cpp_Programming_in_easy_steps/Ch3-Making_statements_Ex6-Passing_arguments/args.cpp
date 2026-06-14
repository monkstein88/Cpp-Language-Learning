/*
 * args.cpp
 *
 *  Created on: 21.12.2013
 *      Author: Joro
 */
/* Preprocessor Directives: */
// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams

// Specify the namespace(s) prefix to use
using namespace std;

// Declaring a function prototype that returns a float value and specifies a single float argument.
// In this case, a default value is assigned to the function's argument via the func prototype, in 
// case that the function is called without passing any argument.
float fToC( float degreesF = 32.0);


/* Program's Entry Point - main function (method) */
int main(){
	// Declaring two floats to store an input from the Fahrenheit temperature value and its Centigrade equivalent
	float fahrenheit, centigrade;

	// Request that user input be stored in the first variable
	cout << "Enter a Fahrenheot temperature:\t";
	cin >> fahrenheit;

	// Call the fToC function to convert the input value - and assign the conversion to the second variable
	centigrade = fToC(fahrenheit);

	// Output a message describing the result
	cout << fahrenheit << "F is " << centigrade << "C";

	// Output a further message using the default argument value
	cout << endl << "Freezing point: " << fToC() << "C";
	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}


// Define function to convert
float fToC( float degreesF ){
	float degreesC = ((5.0 / 9.0) * (degreesF - 32.0));
	return degreesC;
}
