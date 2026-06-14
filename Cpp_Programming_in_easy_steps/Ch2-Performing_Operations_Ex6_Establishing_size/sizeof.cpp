/*
 * sizeof.cpp
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
	 // Declaring variables of various data types
	 int num ;		int nums[50];		float decimal;
	 bool isTrue;	unsigned int max;	char letter;
	 double pi;		short int number;	char letters[50];

	// Output the byte size of each integer variable
	cout << "int size: " << sizeof(num) << endl;
	cout << "50 int size: " << sizeof(nums) << endl;
	cout << "short int size: " << sizeof(number) << endl;
	cout << "unsigned int size: " << sizeof(max) << endl;

	// Output the size of the other vairables
	cout << "double size: " << sizeof(pi) << endl;
	cout << "float size: " << sizeof(decimal) << endl;
	cout << "char size: " << sizeof(letter) << endl;
	cout << "50 char size: " << sizeof(letters) << endl;
	cout << "bool size: " << sizeof(isTrue) << endl;


	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
