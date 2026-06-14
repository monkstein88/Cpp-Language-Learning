/*
 * fnref.cpp
 *
 *  Created on: 27.12.2013
 *      Author: Joro
 *
 *
 *	  @Chapter: 6 - Pointing to data
 *		@Descr: This chapter demonstrates how to produce efficient C++ programs utilizing pointers and references.
 *	 @Exercise: 7
 *	    @Title: Passing references to functions
 *		@Brief: References provide access to the data stored in the variable which to they refer, just like the variable itself, and can be used to
 *				change the stored data by assigning a new value of the appropriate data type.
 *
 *				Additionally, references can, like pointers be passed to functions as arguments:
 *
 *				- When variables are passed to functions their data is passed "by value" to a local variable inside the function - so that the
 *				function operates on a copy of the original value.
 *
 *				- When references are passed to functions their data is passed "by reference" - so the function operates on the original value.
 *
 *				The benefit of passing by reference allows functions to directly manipulate variable values declared within the calling function.
 *
 *
 *	   @HotTip: - This example may seen familiar as it recreates the example - Ch6_Ex4_Fnptr - but replaces the pointers witth references.
 *	   			- Functions that operate directly on variables within the calling function need no return statement.

 *
 *	   @Rember:	- The function prototype and definition must both contain a reference argument.
 *
 *
 */

#include <iostream>

using namespace std;
	// Declare two function prototypes to each accept a single reference argumet
	void writeOutput( int& );
	void computeTriple( int& );


int main(){
	// Declaring an initialized regular integer variable
	int num = 5;
	// Second variable declaration, initializing a reference as an alsias of the integer variable
	int& ref = num;

	// Pass a reference argument to a function to output the variable value to which it refers
	writeOutput( ref );

	// Use the reference to increase the variable value, then display its new value
	ref += 15;
	writeOutput( ref );

	// PAssa areference argument to a function to multiply the variable to which it refers, then display its new value
	computeTriple( ref );
	writeOutput( ref );


	return 0;
}

// Define a function to output the current value of a variable to which a reference referce
void writeOutput( int& value){
	cout << "Current value: " << value << endl;
}
// Define another function to multiply the current value of a variable to which a reference refers
void computeTriple( int& value){
	value *= 3; // Multiply and assign a referenced value
}

