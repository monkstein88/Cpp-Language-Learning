/*
 * strung.cpp
 *
 *  Created on: 15.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 9 - Processing macros
 *		@Descr: This chapter demonstrates how the C++ compile can be made to perform useful tasks before compiling a program.
 *	 @Exercise: 7
 *	    @Title: Building strings
 *		@Brief: The preprocessor "#" operator is known as the "stringizing" operator as it converts a series of characters passed as macro argument
 *				into a string - adding double quotes to enclose the string
 *
 *				All whitespace before or after the series of characters passed as a macro argument to the stringizing operator is ignored and
 *				multiple spaces between characters is reduced to just one space.
 *
 *				The stringizing operator is useful to pass string values to a preprocessor "#define" directive without needing to surround each
 *				string with double quotes
 *
 *				A macro definition can combine two terms into a single term using the "##" merging operator. Where the combined term is a variable
 *				name its value is not expanded by the macro - it simply allows the variable name to be substituted by the macro.
 *
 *	   @HotTip: - Notice that the second statement contains multiple spaces, which will be removed by the stringizing operator.
 *
 *	   @Rember: - The merging operator is alternatively known as the "token-pasting" operator as it pastes two "tokens" together
 *
 *
 *
 */

// Define a macro to create a string from a series of characters passed as its argument, to substitute in an output statement
#define LINEOUT( str ) cout << #str << endl

// Define a second macro to combine two terms passed as its arguments into a variable name, to substitute in an output statement
#define GLUEOUT(a, b) cout << a##b << endl

// After the macro definition, speicify the library classes to include and a namespace prefix to use
#include <string>
#include <iostream>
using namespace std;



// Add a main functin containing a final return statement.
int main(){
	// At the start of main() , declare and initialize a string variable then append a further string
	string longerline = "They carried a net ";
	longerline += "and their hearts were set" ;

	// Output text using the macros
	LINEOUT(In a bowl oto sea went wise men three);
	LINEOUT(	On a brilliant night in	   	June );
	GLUEOUT(longer, line);
	LINEOUT(On fishing up the moon.);

	return 0;
}


// Save the file, then compile the program saving the temporary files (using the commande "c++ strung.cpp -save-temps -o strung.exe)
// and run the program

// Opened the temporary ".ii" file in a plain text editor, like Notepad, to see that the string values and the variable name have been substituted in
// the output statements
