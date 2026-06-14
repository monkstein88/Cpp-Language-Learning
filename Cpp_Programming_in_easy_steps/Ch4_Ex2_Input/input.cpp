/*
 * input.cpp
 *
 *  Created on: 22.12.2013
 *      Author: Joro
 *
 *     @Tittle: Getting string input
 *		@Brief:	The C++ cin function, that was introduced in the last chapter to input numeric values, can also assign text input to string variables.
 *				This has a limitation as it can only be used to input a single word at a time - the cin function stops reading the input when it
 *				encounters a space, leaving any other text in the "input buffer".
 *
 *				When you want to allow the user to input a string with spaces, such as a sentence, getline() function can be used. This function
 *				requires two arguments, to specify the source and destionation of the string. For example, where the cin function is the source
 *				and a string variable name "str"is the destination:
 *
 *							getline(cin, str);
 *
 *				The getline() function reads from an input "stream" until it encounters a \n newline character at the end of the line - created
 *				when you hit Return.
 *
 *				Care must be taken when mixing cin and getline() functions as the getline() function will automatically read anything left on the
 *				input buffer - giving the impression that the program is skipping an instruction. The cin.ignore() function can be used to overcome
 *				this problem by ignoring the content left in the input buffer.
 *
 *
 *
 *	   @Rember: Use:
 *	   				-	cin - for numeric or single word input
 *	   				-	getline() - for string input
 *
 *	   @HotTip: The arguments of the cin.ignore() function specify it should discard up to 256 characters and stop when it encounters a newline
 *	   			character.
 *
 */

// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace)

// Specify the namespace(s) prefix to use
using namespace std;



/* Program's Entry Point - main function (method) */
int main(){
	// One string declaration
	string name;

	// There is unsatisfactory result showing that cin reads up to the first space, leaving the second name in the buffer,
	// which i s then read by getline() and subsequently outputed. The proble persits even when you enter only your first name
	// because cin leaves the newline character, created when you press/hit Enter (Return), on the input buffer.
	// So we have to edit the code - just before the call to the getline function, instructing it to ignore the content in the input buffer


	// Give a hinting text, to prompt the user to enter his name, assign name input to a string , then output its value
	cout << "Please enter your full name: ";
	cin >> name;
	cout << "Welcome " << name << endl;

	// Request the user name again, but this assugn the input to string variable using the getline() function, then print
	cout << "Please re-enter your full name: ";
	cin.ignore(256,'\n'); // Ignore the content left on the input buffer (for 256 charactaters untill it reaches newline character).
	getline(cin, name);
	cout << "Thanks, " << name << endl;



	return 0; // Final return statement - returns zero integer to the operating system
		  	  // as required by the main function declaration.
}
