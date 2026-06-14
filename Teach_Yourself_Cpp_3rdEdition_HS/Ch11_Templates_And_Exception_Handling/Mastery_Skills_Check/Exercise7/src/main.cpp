/*
	Exercise 7.: Check your compiler's documentation. See whether it supports the 'terminate()' and 'unexpected()' functions. Generally,
	these functions can be configured to call any function you choose. If this is the case with your compiler, try creating your own set of
	customized termination functions that handle otherwise unhandled exceptions.


	My answer:
		- Not all thrown errors can be caught and successfully dealt with by a catch block. In some situations, the best way to handle an
		exception is to terminate the program. Two special library functions are implemented in C++ to process exceptions not properly
		handled by catch blocks or exceptions thrown outside of a valid try block. These functions are 'unexpected()' and 'terminate()'.

		- unexpected() - Calls the current 'unexpected' handler. This function is automatically called when a function throws an exception
		that is not listed in its dynamic-exception-specifier (i.e., in its throw specifier). By default, the unexpected handler calls
		terminate. But this behavior can be redefined by calling 'set_unexpected()'.
		In short, it is called when a function with an exception specification throws an exception of a type that is not listed in the
		exception specification for the function.

		- terminate() - Calls the current 'terminate' handler. This function is automatically called when no catch handler can be found for a
		thrown exception, or for some other exceptional circumstance that makes impossible to continue the exception handling process. By
		default, the terminate handler calls abort. But this behavior can be redefined by calling 'set_terminate()'.
		In short, it is called whenever the exception handling mechanism cannot find a handler for a thrown exception.

		- In GCC (8.1.0) for Windows PC, it is possible to "overload" the 'terminate()' and 'unexpected()' with the 'my_terminate()' and
		'my_unexpected()', respectively.
*/

// This function demonstrates a generic stack.
#include <iostream> // for cin, cout, cerr
#include <exception> // for the set_terminate() and set_unexpected()
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function, also for the abort()
using namespace std;

void my_unexpected(){
	cerr << "unexpected() called\n";
	throw 0; // throws int (in exception-specification).
}

void my_terminate(){
	cerr << "terminate() handler called\n";
	abort(); // forces abnormal termination.
}

void my_function() throw(int){ // utilizing an dynamic-exception-specifier
	throw 'x'; // throws 'char' (which is not in the exception-specification, 'int' is in the exception-specifier)
}

int main(){

	set_unexpected(my_unexpected); // Sets 'my_unexpected()' as the 'unexpected handler' function.
	set_terminate(my_terminate); // Sets 'my_terminate()' as the 'terminal handler' function.

	try{
		my_function();
	}
	catch(int){
		cerr << "caught int\n";
	}
	catch(...){
		cerr << "caught some other exception type\n";
	}

	throw 0; // this tests the 'set_unexpected()' by triggering an unhandled exception - calls 'terminate handler'

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch11_Mastery_Skills_Check_Exercise7.exe
	unexpected() called
	caught int
	terminate() handler called


*/

/*
	Official answer:
*/
