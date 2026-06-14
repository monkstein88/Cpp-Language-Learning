/*
	Example 1.: Here is a simple example that shows the way C++ exception handling operates:
*/

// A simple exception handling example.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){

	cout << "start\n";

	try{ // start a try block
		cout << "Inside try block\n";
		throw 10; // throw an error
		cout << "This will not execute";
	}
	catch(int i){ // catch an error
		cout << "Caught One! Number is: ";
		cout << i << "\n";
	}

	cout << "end" ;

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch11_Sec3_Example1.exe
	start
	Inside try block
	Caught One! Number is: 10
	end

	Look carefully at this program. As you can see, there is a 'try' block containing three statements and a 'catch(int i)' statemeent that
	processes an integer exception. Within the 'try' block, only two of the three statements will execute: the first 'cout' statement and
	the 'throw'. Once an exception has been thrown, control passes to the 'catch' expression and the 'try' block is terminated. That is,
	'catch' is not 'called'. Rather, program execution is transferred to it. (the stack is automatically reset as needed to accomplish
	this.) Thus, the 'cout' statement following the 'throw' will never execute.

	After the 'catch' statement executes, program control continues with the statements following the 'catch'. Ofter, however, a 'catch'
	block will end with call to 'exit()', 'abort()', or some other funtion that causes progrm termination because exception handling is
	frequently used to handle catastrophic errors.

*/
