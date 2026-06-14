/*
 * fnptr.cpp
 *
 *  Created on: 27.12.2013
 *      Author: Joro
 *
 *
 *	  @Chapter: 6 - Pointing to data
 *		@Descr: This chapter demonstrates how to produce efficient C++ programs utilizing pointers and references.
 *	 @Exercise: 4
 *	    @Title: Passing pointers to functions
 *		@Brief:	Pointers can access the data stored in the variable to which which they point using the * dereference operator. This can also be used
 *				to change the stored data by assigning a new value of the appropriate data type.
 *
 *				Additionally, pointers can be passed to functions as arguments - with subtly different effect to passing variables as arguments:
 *
 *				-	When variables are passed to functions their data is passed "by value" to a local variable inside the function - so that the
 *				function operates on a copy of the original value.
 *
 *				-	When pointers are passed to functions their data is passed "by reference" so that the function operates on the original value.
 *
 *				The benefit of passing by reference allows functions to directly manipulate variable values declared within the calling function.
 *
 *	   @HotTip: Functions that operate directly on variables within the calling function need no return statement.
 *
 *	   @Rember:	The function prototype and definition must both contain a pointer argument
 *
 *
 */

#include <iostream>

using namespace std;

// Declare two function prototypes to each accept a single pointer argument
void writeOutput( int* );
void computeTriple( int* );

int main(){
	// Declare and initialize a regular integer variable
	int num = 5;

	// Declare and initialize a second variable - a pointer iwth the adress of the regular integer variable
	int* ptr = &num;

	// Pass a pointer argument to a function to output the variable value to which it points
	writeOutput(ptr);

	// Use a pointer to increase the variable value, the display its new value
	*ptr += 15; // Add and assign a dereferenced value
	writeOutput(ptr);

	// Pass a pointer argument to a function to multiply the variable to which it points, then display its new value
	computeTriple(ptr);
	writeOutput(ptr);

	return 0;
}


// Define a function that outputs the current value of a variable to which a pointer points
void writeOutput(int* value){
	cout << "Current value: " << *value << endl;
}

// Define another funtion to multiply the current value of a variable to which a pointer points
void computeTriple(int* value){
	*value *= 3; // Multiply and assign dereferenced value.
}
