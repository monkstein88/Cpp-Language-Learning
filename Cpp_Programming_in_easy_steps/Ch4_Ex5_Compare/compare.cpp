/*
 * compare.cpp
 *
 *  Created on: 22.12.2013
 *      Author: Joro
 *
 *     @Tittle: Joining and comaparing strings
 *		@Brief:	When the + operator is used to concatenate strings in an assignment the combined string get stored in the string variable. But when it is used
 *				with the cout function the strings are only combined in the output - the variable values are unchanged.
 *
 *				The <string> library's append() function can also be used to concatenate strings, specifying the string value to append as an argument  within
 *				its parentheses. When this is used with the cout function the strings are combined in the variable, then its value is written as output - in
 *				this case the variable value does change.
 *
 *				Strings comparisons can be made, in the same way as numeric comparisons, with the == equality operator. This returns true (1) when both strings
 *				precisely match, otherwise it returns false (0).
 *
 *				Alternatively, the <string> library's compare() function can be used to compare a string value specified as its argument, Unlike the == equality
 *				comparison, the compare() function returns zero when the strings identical by examining the string value's combined ASCII code values. When the
 *				string argument totals more than the first string it returns -1, otherwise it returns 1.
 *
 *
 *
 *	   @Rember: The += assignment operator can also be used to append a string.
 *
 *	   @HotTip: In comparisons character order is taken into account - so comparing "za" to "az" reveals that "za" has a greater total. In terms of ASCII values
 *	   			'a' is 97, and 'z' is 122.
 *
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
	string lang = "C++";
	string term = " Programming";
	string text = "C++ Programming";

	// Output two string values combined with the + concatenate operator and the (unchanged) value of the first variable
	cout << "Concatenated: " << (lang + term) << endl;
	cout << "Original: " << (lang) << endl ;

	// Next, output the two string values combined with the append function and the (changed) value of the first variable
	cout << "Appended: " << lang.append( term ) << endl;
	cout << "Original: " << lang << endl << endl;

	// Use equality operator to compare two string values that differ , then two string values that match
	cout << "Differ: " << (lang == term) << endl;
	cout << "Match: " << (lang == text) << endl << endl;

	// Now, use comparison function to compare three string values, examining their ASCII code total values
	cout << "Match: " << lang.compare( text ) << endl;
	cout << "Differ: " << lang.compare( term ) << endl;
	cout << "Lower ASCII: " << lang.compare ("zzzzz") << endl;

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
