/*
 * swap.cpp
 *
 *  Created on: 23.12.2013
 *      Author: Joro
 *
 *  @Brief: String values can be assigned to a string variable by the '=' assignment operator, or by the <string> library's assign() function.
 *  		This function specifies the string value to be copied to the variable as an argument within the parentheses.
 *
 *  		Optionally, the assign() function can copy just a part of the specified string value by stating the position of the starting charater
 *  		as a second argument, and the number of characters to copy as a third argument.
 *
 *  		The contents of a string variable can be exchanged for htat of another string variable by the <string> library's swap() function. In
 *  		this case the contents of the first variable receives (are being replaced/substituted for) those of the second variable, which in turn
 *  		receives (is being replaced with) those of the first variable.
 *
 *	@HotTip: -	Use the = assignment operator to assign complete strings and the assign() function to assign partial strings.
 *			 -	Use the swap() function wherever possible rather than creating additional string variables.
 *
 */


// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support

// Specify the namespace(s) prefix to use
using namespace std;



/* Program's Entry Point - main function (method) */
int main(){
	// Declaring three string variables, the last of which is initialized
	string front;
	string back;
	string text = "Always laugh when you can. It\'s cheap medicine.";

	// Assign the entire value of the initialized string variable to the first uninitialized string variable - utilizing the assign() function
	front.assign(text);

	// Output newly assigned string value
	cout << endl <<  "Front: " << front << endl;

	// Assign only the first 27 characters of the initialized variable to the first variable
	front.assign(text,0,27);

	//Output the newly assigned string value
	cout << endl << "Front: " << front << endl;

	// Next assign the last parto of the initialized string variable to the second uninitialized string variable, starting at the character (element) 27
	// untill the end of the (original - that we copy from) string
	back.assign(text,27,text.size());

	// Output the newly assigned string value
	cout << "Back: " << back << endl;

	//Finally, exchange the assigned string values  and then output swapped values
	back.swap(front);
	cout << endl << "Front: " << front << endl;
	cout << "Back: " << back << endl;


	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}

