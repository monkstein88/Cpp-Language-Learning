/*
 * string.cpp
 *
 *  Created on: 22.12.2013
 *      Author: Joro
 *
 *     @Tittle: Creating string variables
 *		@Brief:	Unlike the char, int , float, and bool data types there is no native "string" data type in C++ - but its <string> library class
 *				provides a string object that emulates a string data type. To make this available to a program the library must be added wit an
 *				"#inlcude <string>" directive at the start of the program.
 *
 *				Like the <iostream> class library, the <string> library is part of the std namespace that is used by the C++ standard library
 *				classes. This means that a string object can be referred to as "std::string", or more simply as "string" when a "using namespace
 *				std;" directive is included at the start of the program.
 *
 *				Once the <string> library is made available a string "variable" can be declared in the same way as other variables. The declaration
 *				may optionally initialize the variable using the = assignment operator, or it may be initialized later in the program.
 *
 *				Additionally, a string variable may be initialized by includeing a text strin between parentheses  after the variable name.
 *
 *				Text strings in C++ must always be enclosed within "" double quote characters - '' single quotes are only use d to surround
 *				character values of the "char" data type.
 *
 *				A C++ string variable is much easier to work with than the char arrays which C programmers must use, as it automatically resizes
 *				to accommodate the lenght of any text string. At a lower level the text is still store as a character array but the string variable
 *				lets you ignore those details . Consequently a character array can be assigned to a string variable using the = assignment operator.
 *
 *				It is important to remember that when numeric values are assigned to a string  variable they are no longer a numeric data type,
 *				so arithmetic cannot be performed on them. For example, attempting to add string values of "7" and "6" with the "+" addition
 *				operator produces the concatenated string "76", not the numerical value of 13. In this case the + operator recognizes that the
 *				context is not arithmetical so adopts the guise of "concatenation operator" to unite the two strings. Similarly, the += operator
 *				appends a string to another string and is useful to build long sting of text.
 *
 *				Several string values are built into a single long string in the example program described below.
 *
 *
 *
 *	   @Rember: Remember to add the special \0 character to mark the end of a string in a char array.
 *
 *
 */


// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace)

// Specify the namespace(s) prefix to use
using namespace std;



/* Program's Entry Point - main function (method) */
int main(){
	// Four ways to declarition of four string type variables
	string text = "9";
	string term("9 ");
	string info = "Toys";
	string color;

	//Declaration and initialization of character array, then assign its value to the unitialized string variable
	char hue[4] = {'R','e','d','\0'};
	color = hue;

	// Assign longer text string to one of the string variables
	info = " Balloons";

	// Build a long string by combining all the string variable values in the first string variable, then output the
	// combined string value (appending)
	text += (term + color + info);
	cout << endl << text << endl;

	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
