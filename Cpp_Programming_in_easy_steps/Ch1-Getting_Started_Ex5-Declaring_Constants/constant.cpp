/*
 * constant.cpp
 *
 *  Created on: 19.12.2013
 *      Author: Joro
 */


/* Preprocessor Directives: */
// Include C++ library classes
#include <iostream> // Object oriented library that provides input and output functionality using streams

// Specify the namespace(s) prefix to use
using namespace std;


/* Program's Entry Point - main function (method) */
int main(){
	const double PI = 3.141592653; // Declaring an cosntant
	cout << "6\" circle circumference: " << (PI*6) << endl; // Output using the constant value

	enum{RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK};  // Declaring enumerating list
	cout << "I shot a red worth: " << RED << endl;
	cout << "Then a blue worth: " << BLUE << endl;
	cout << "Total scored: " << (RED + BLUE) << endl;

	typedef enum{NEGATIVE, POSITIVE} charge; // Declaring a custom datatype (with possible assignments of constants)
	charge neutral = NEGATIVE, live = POSITIVE;

	cout << "Neutral wire: " << neutral << endl;
	cout << "Live wire: " << live << endl;

	return 0; // Final return statement - returns zero integer to the operating system
	  	  	  // as required by the main function declaration.
}

