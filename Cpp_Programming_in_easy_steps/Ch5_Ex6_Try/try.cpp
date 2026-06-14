/*
 * try.cpp
 *
 *  Created on: 25.12.2013
 *      Author: Joro
 *
 *
 *	   @Tittle: Predicting problems
 *		@Brief: Despite the best efforts of the programmer C++ programs may unfortunately contain one, or more, of these three type of bugs (erros):
 *
 *				-	Synthax errors - the code contains incorrect use of the C++ language. For example, an opening brace does not have a matching
 *					closing brace.
 *				-	Logic errors - the code is syntactically correct but attempts to perform an operation that is illegal. For example, the program
 *					may attempt to divide a number by zero, causing an error.
 *				-	Exception erros - the program runs as expected until an exceptional condition is encountered that crashes the program. For example,
 *					the program may request a number, which the user enters in word form rahter than in numeric form.
 *
 *				The C++ standards allow the compiler to spot "compile-time" errors involving syntax and logic but the possibility of exceptional errors
 *				is more diffucult to locate as they only occur at "run-time". This means that the programmer must try to predict problems that may
 *				arise and prepare to handle those exceptional errors.
 *
 *				The first step is to identify which part of the program code that may, under certain conditions, cause an exception error. This can
 *				the be surrounded by a "try" block , which uses the "try" keyword and encloses the suspect code within a pair of braces.
 *
 *				When an exception error occurs the try block then "throws" the exception out to a "catch" block, which immediately follows the "try"
 *				block. This uses the catch keyword and encloses statements to handle the exception error within a pair of braces.
 *
 *				The program described below has a "try" block containing a loop that increments an integer. When the integer reaches five a throw()
 *				function manually throws an exception to the catch block exception handler, passing the integer argument.
 *
 *
 *	   @HotTip: Always consider that the user will perform the unexpected - then ensure your porgrams can handle those actions.
 *
 *	   @Rember: When an exception occurs control passes to the catch block - in this example the loop does not complete
 *
 */

// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support



// Specify the namespace(s) prefix to use
using namespace std;

/* Program's Entry Point - main function (method) */
int main(){
	// Declaring an integer variable for increment by a loop
	int number;

	// Inserting "try" and "catch" blocks to handle a "bad number" exception to handle a "bad number" exception
	try{ // In the "try" block, do a loop to increment the variable
		for(number = 1; number < 21; number++){
			if(number > 4) throw(number);
			else cout << "Number: " << number << endl;
		}
	}
	catch(int num){ // Here we put the exception handler
		cout << "Exception at: " << num << endl;
	}


	return 0; // Final return statement - returns zero integer to the operating system
	  	  // as required by the main function declaration.
}
