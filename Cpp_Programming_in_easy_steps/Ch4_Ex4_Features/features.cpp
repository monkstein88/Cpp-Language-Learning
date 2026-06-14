/*
 * features.cpp
 *
 *  Created on: 22.12.2013
 *      Author: Joro
 *
 *     @Tittle: Discovering string features
 *		@Brief:	The C++ <string> library provides a number of functions that make it easy to work with strings. To use them simply add the function name after
 *				the string variable name and a dot. For example, with a string variable named "msg" you can call upon the size function, to return its character
 *				length , with msg.size().
 *
 *				A string variable can be emptied of all characters by asssigning it an empty string with two double quotes without spacing - as "",
 *				alternatively by calling the <string> library's clear() function.
 *
 *				Unlike a char array a string variable will dynamically enlarge to accommodate the number of characters asigned to it, and its current memory
 *				size can be revealed with the <string> library's capacity() function. Once enlarged the allocated memory size remains , even when a smaller
 *				string gets assigned to the variable.
 *
 *				The <string> library's empty() function returns  a boolean true(1) or false(0) response to reveal whether the string is empty or not.
 *
 *	   @Rember: A space occupies one memory element - just like a character does.
 *
 *	   @HotTip: The legth() function can be used in place of the size() function to reveal size of a string.
 *	   			The empty() function is useful to check if the user has entered requested input.
 *
 */


// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support
#include <sstream> // Objecto oriented library (class library) providing means to convert between strings <=> numeric data types - Include stringstream support

// Specify the namespace(s) prefix to use
using namespace std;

//Declaring function prototype with a single string argument
void computeFeatures(string);

/* Program's Entry Point - main function (method) */
int main(){
	// Declaring and initializing a string variable
	string text = "C++ is fun";

	// Call the defined function (for first time)
	computeFeatures(text);

	// Next, insert a statement to enlarge the string value and call the function
	text += " for everyone";
	computeFeatures(text);

	// Now, insert (asssign, not append) a text to reduce the string value
	text = "C++ Fun";
	computeFeatures(text);

	// Finaly empty string variable and output the features
	text.clear();
	computeFeatures(text);


	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}


// Define the declared function to display the string variable value when called and its features
void computeFeatures(string text){
	cout << endl << "String: " << text << endl;
	cout << "Size: " << text.size();
	cout << "   Capacity: " << text.capacity();
	cout << "   Empty?: " << text.empty() << endl;
}
