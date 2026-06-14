/*
 * cast.cpp
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
	// Declarin and initializing integer, character, and floating-point variables
	int num = 7, factor = 2;
	char letter = 'A' ; float result = 0.0;

	// Output plain integer division
	cout << "Integer division: " << ( num / factor ) << endl;

	// Now cast the same division (cast the nominator) into a floating-point variable and output the result - (classic) C typecasting style
	result = (float)num/factor;
	cout << "Cast division float: " << result << endl;

	// Cast the character variable into an integer and output that result - C++ typecasting style
	num = static_cast <int> (letter);
	cout << "Cast character int: " << letter << endl;

	// Cast an integer into a character variable and output the result
	letter = static_cast <char> ( 70 );
	cout << "Cast integer char: " << letter << endl;

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
