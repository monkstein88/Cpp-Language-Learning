/*
 * scope.cpp
 *
 *  Created on: 21.12.2013
 *      Author: Joro
 */
/* Preprocessor Directives: */
// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams

// Specify the namespace(s) prefix to use
using namespace std;

// Declare two simple function prototypes (without arguments)
float bodyTempC();
float bodyTempF();

/* Program's Entry Point - main function (method) */
int main(){
	// Calls to each function
	cout << "Centigrade: " << bodyTempC() << endl;
	cout << "Fahrenheit: " << bodyTempF() << endl;

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}


// Define the (two) functions - to each return the value of a local "temperature" variable

float bodyTempC(){
	float temperature = 37.0;
	return temperature;
}

float bodyTempF(){
	float temperature = 98.6;
	return temperature;
}


