/*
 * assert.cpp
 *
 *  Created on: 15.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 9 - Processing macros
 *		@Descr: This chapter demonstrates how the C++ compile can be made to perform useful tasks before compiling a program.
 *	 @Exercise: 8
 *	    @Title: Debugging assertions
 *		@Brief: It is sometimes helpful to use preprocessor directives to assist with debugging program code - by defining an "ASSERT" macro function
 *				to evaluate a specified condition for a boolean value.
 *
 *				The condition to be evaluated will be passed from the caller as the "ASSERT" function argument. The function can then execute
 *				appropriate statements according to the result of the evaluation. Multiple statements can be included in the macro function
 *				definition by adding a backslash \ at the end of each line, allowing the definition to continue on the next line.
 *
 *				Numerous statements calling the "ASSERT" function can be added to the program code to monitor a condition as the program proceeds.
 *				For example., to check the value of a variable as it changes.
 *
 *				Usefully an "ASSERT" function can be controlled by a DEBUG macro. This allows debugging to be easily turned on and off simply by
 *				changing the value of the "DEBUG" control macro:
 *
 *     @Rember: - You can comment-out sections of code when debugging using C-style comment operators.
 *				- Predefined macro names are prefixed by a double underscore and suffixed by a double-underscore.
 *
 *	   @Beware: - Do not place a backslash continuation character on the last line of the definition, and remember to use the # stringizing operator
 *	   			to output the expression as a string.
 *
 *	   @HotTip: - Additionally, the current date and time can be output from the "__DATE__" and "__TIME__" predefined macros.
 *
 *
 *
 */



// Start a new program by defining a DEBUG macro with "on" value of one - to control an ASSERT function
#define DEBUG 1

// Next add a macro if-elif statement block to define the ASSERT function according to the control value
#if (DEBUG == 1) // Definition for "on" goes" here...
	// Output failure details from predefined macros - when DEBUG is ON
#define ASSERT( expr )								\ // Continuing the definition below
	cout << #expr << "..."  << num;					\
	if(expr != true){								\
		cout << " Fails in file: " << __FILE__;		\
		cout << " at line: " << __LINE__ << endl;	\
	}else{											\
		cout  << " Succeeds" << endl ; }

#elif(DEBUG == 0) // Definition for "off" goes here...
	// When DEBUG is OFF, simply output the current variable value
#define ASSERT( result )							\
		cout << "Number is " << num << endl;

#endif


// After the macro definitions, specify the library classes to include and a namespace prefix to use
#include <iostream>
using namespace std;



int main(){
	// At the start, declare and initialize an integer variable, then call the macro ASSERT function to check its value as its gets incremented
	int num = 9; ASSERT( num < 10);
	num++;		 ASSERT( num < 10);


	return 0;
}
