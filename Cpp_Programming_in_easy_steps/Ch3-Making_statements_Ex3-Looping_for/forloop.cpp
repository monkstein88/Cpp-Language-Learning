/*
 * forloop.cpp
 *
 *  Created on: 21.12.2013
 *      Author: Joro
 */

/* Preprocessor Directives: */
// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams
// Specify the namespace(s) prefix to use
using namespace std;


/* Program's Entry Point - main function (method) */
int main(){
	// Declaring an integer variable to be used as on an loop iteration counters
	int i,j; // i - outer loop , j - inner loop

	// For loop to output the counter value on each of three iterations - outer loop
	for (i = 1; i < 4; i++){
		cout << "Loop itearaiton: " << i << endl;
		for (j = 1; j < 4 ; j++){ // Inner loop to output its counter value on each iteration
			cout << "	Inner loop iteration: " << j << endl;
		}
	}

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
