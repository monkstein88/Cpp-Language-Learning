/*
 * convert.cpp
 *
 *  Created on: 22.12.2013
 *      Author: Joro
 *
 *     @Tittle: Solving the string problem
 *		@Brief:	A problem arises with string variables when you need to convert them to a different data type, perhaps to perform arithmetical operations with those
 *				values. As the string object is not a native C++ data type a string variable value cannot be converrted to an int or any other regular data type by
 *				(type) casting.
 *
 *				The solution is provided by the C++ <stream> library that allows a stringstream object to act as an intermediary, through which string values can be
 *				converted to a numeric data type, and numeric values can be converted to a string data type. To make this ability available to a program the library
 *				must be added with an "#include <stream>" directive at the start of the program.
 *
 *				Values can be loaded into a stringstream object with the familiar output stream << operator - that is used with cout statements. Contnets can then
 *				be extracted from a stringstream object with the >> input stream operator that is used with cin statements.
 *
 *				In order to re-use stringstream object it must first be returned to its original state. This requires its content to be set  as an empty string and
 *				its status bit flags to be cleared.
 *
 *	   @Rember: A non-empty stringstream object has bit flags indicating its status as good, bad, eof, or fail - these should be cleared before reu-use by the
 *	   			stringstream object's clear() function, as demonstrated here.
 *
 *	   @HotTip: Notice how the stringstream object's str() function is used here to reset its contents to an empty string
 *
 */

// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support
#include <sstream> // Objecto oriented library (class library) providing means to convert between strings <=> numeric data types - Include stringstream support

// Specify the namespace(s) prefix to use
using namespace std;



/* Program's Entry Point - main function (method) */
int main(){
	// string type is not native C++ object, conversion between string <=> other-types-of-data is not possible DIRECTLY.
	// Declaring two initialized variables to be converted
	string term = "100";
	int number = 100;

	// Declare an integer variable, a string variable and a stringstream object
	int num; // To storea a converted string
	string text; // To store a converted integer
	stringstream stream; // To perform conversions

	// Use the stream output operator - << - to load the initialized string value into the string stream object
	stream << term;
	// Use the stream input operator - >> - to extract cntent from the stringstream object into the uninitialized  integer variable
	stream >> num;

	// Perform arithmetic operation on the integer and output the result
	num /= 4;
	cout << "Integer value: " << num << endl;

	// Reset the stringstream object ready for re-use
	stream.str(""); // Clear its contents, by setting it up as an empty string
	stream.clear(); // Clear the status bit flags (empty the bit flags).

	// Now use the stream output operator to load the initialized (operated on) integer value into the stringstream object
	stream << number;
	// Then, use the stream input operator to extract content from the stringstream object into the uninitialized string variable.
	stream >> text;

	// Perform concatenation on the string and output the result
	text += " Per Cent";
	cout << "String value: " << text << endl;



	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
