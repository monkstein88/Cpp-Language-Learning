/*
 * find.cpp
 *
 *  Created on: 23.12.2013
 *      Author: Joro
 *
 *
 *		@Brief: A string value can be searched to see if it contains a specified "substring" substring using the find() function of the <string> library.
 *				Its parentheses should specify the substring to seek as its first argument, and the index number of the character at which to start
 *				searching as its second arguments.
 *
 *				When a search successfully locates the specified substring the find() function returns the index number of the fist occurrence of the sub-
 *				string's first character within the searched string. When the search fails find() returns a value of -1 to indicate failure.
 *
 *				There are several other functions in the <string> library that are related to the find() function. Two of these are the find_first_of()
 *				function and the find_first_not_of() function. Instead of seeking the first occurrence of a complete string, as find() does, the find_first_of()
 *				function seeks the occurrence of any other characters in a specified string, and find_first_not_of() seeks the first occurrence of a character
 *				that is not in the specified string.
 *
 *				nThe find_last_of() and find_last_not_of() functions work in a similar manner - but begin searching a the end of the string then move forwards.
 *
 *	   @Beware:	The searches are case sensitive so seeking "If" and "if" may produce different results (Here uppercase 'I' matches)
 *
 *	   @Rember: The first character in a string is at position zero, not at position one.
 */


// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support

// Specify the namespace(s) prefix to use
using namespace std;

/* Program's Entry Point - main function (method) */
int main(){
	// Declare and initialize string variable, and declare an integer variable to store the search results
	string text = "I can resist anything but temptation.";
	int num;

	// Find and output the start position o a substring within the entire string variable
	num = text.find("resist",0);
	cout << "Position: " << num << endl;

	// Seek non-existant substring within the entire string variable and output the result
	num = text.find("nonsuch", 0 );
	cout << "Result: " << num << endl;

	// Seeks the first occurrence of any of the characters (contained) of an "If" substring found within the entire string variable
	// Then output that first occurrance - start position
	num = text.find_first_of("If", 0);
	cout << "First I: " << num << endl;

	// Find and report the string position of the first character not within the "If"substring
	num = text.find_first_not_of("If");
	cout << "First not I: " << num << endl;

	// Seek and output the last occurrence of the letter "t" within the string variabl and output its position
	num = text.find_last_of("t");
	cout << "Last t: " << num << endl;

	// Find and report the string position of the last character within the string variable that is not a "t"
	num = text.find_last_not_of("t");
	cout << "Last not t: " << num << endl;

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
