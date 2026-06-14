/*
 * while.cpp
 *
 *  Created on: 21.12.2013
 *      Author: Joro
 */

/* Preprocessor Directives: */
// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams
#include <vector> // Object oriented library that provides functionality (enables) to use the dynamic arrays - vectors
// Specify the namespace(s) prefix to use
using namespace std;


/* Program's Entry Point - main function (method) */
int main(){
	// Declare an integer vector and an integer variable loop counter
	vector <int> vec(10);
	int i = 0;

	// Loop to assign a counter value to an ellement of the vector on each iteration
	while(i < vec.size()){
		i++;
		// The position of break and continue statements is important - they must appear after the incrementer, to avoid
		// creating an infinite loop, but before other statements that affect the program to avoid executing those statements
		if(i == 3 ){cout << " | Skipped"; continue;}
		if(i == 8 ){cout << endl << "Done"; break;}
		vec[i-1] = i;
		cout << " | " << vec.at(i-1);
	}

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
