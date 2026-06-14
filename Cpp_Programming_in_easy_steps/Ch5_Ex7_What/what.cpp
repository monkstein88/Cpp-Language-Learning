/*
 * what.cpp
 *
 *  Created on: 26.12.2013
 *      Author: Joro
 *
 *
 *	   @Tittle: Recognizing exceptions
 *		@Brief: When a program exception occurs within a "try" block an "exception" object is automatically thrown. A reference to the exception
 *				can be passed to the associated "catch" block in the parentheses after the "catch" keyword. This specifies the argument to be an
 *				exception type, and a chosen exception name prefixed by the & reference operator. For example, "exception &error".
 *
 *				Once an exception reference is passed to a "catch" block an error description can be retrieved by the exception's what() function:
 *				(see code below)
 *
 *				The C++ <stdexcept> library defines a number of exception classes. Its base class is named "exception" from which other classes
 *				are derived, categorizing common exceptions.
 *
 *				Each of the exception classes are listed in the table below, illustrating their relationship and describing their exception type:
 *
 *
 *
 *				Exception class:							|			Description:
 *				----------------------------------------------------------------------------------------------------
 *				exception									|	General exception
 *					|										|
 *					|--- bad_alloc							|	- failure allocating storage
 *					|--- bad_cast							|	- failure allocating storage
 *					|--- bad_typeid							|	- failure referencing typeid
 *					|--- logic_error						|		Logic exception
 *					|			|							|
 *					|		domain_error					|		-	invalid_domain
 *					|			|							|
 *					|		invalid_argument				|		-	invalid_argument in call
 *					|			|							|
 *					|		length_error					|		-	invalid length of container
 *					|			|							|
 *					|		out_of_range					|		-	invalid element range
 *					|										|
 *					|--- runtime_error						|		Runtime exception
 *								|							|
 *							range_error						|		-	invalid range request
 *								|							|
 *							overflow_error					|		-	invalid arithmetic request
 *
 *
 *
 *				When the <stdexcept> library is made available to a program by adding an "#include <stdexceot>" preprocessor directive, the
 *				exception classes can be used to identify the type of exception thrown to a "catch" block.
 *
 *				The specific exception class name can appear, in place of the general exception type, withing the catch block's parentheses.
 *
 *				Multiple "catch" blocks can be used in succession, much like case statements in a switch block, to hand;e several types of
 *				exception.
 *
 *				Additionally, exceptions can be produced manually by the "throw" keyword. This can be used to create any of the logic_error
 *				and runtime_error exceptions in the table above. Optionally, a custom erro message can be specified for manual exceptions,
 *				which can be retrieved by its what() function.
 *
 *
 *	   @HotTip: -	More on references in the next charpter.
 *	   			-	The example described on the next page (next exercise) demonstrates the use of standart exceptions.
 *
 *	   @Rember: -	The error description will vary for different compilers - the Visual C++ compiler describes the exception error in this example
 *	   			as an "invalid string position".
 *	   			-	The cout function sends data to the standard output, whereas the cerr function sends error data to standard error output. These
 *	   			are simply two different data streams.
 *
 *
 *
 */

// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support

// Specify the namespace(s) prefix to use
using namespace std;

/* Program's Entry Point - main function (method) */
int main(){
	// Decalring and initializing a string variable
	string lang = "C++";
	// Try a block containing a statement attempting to erase part of the string variable
	try{ lang.erase( 4, 6 );}  // This statement incurs/triggers an exception deliberately, an "exception" object is automatically thrown.  A reference to the exception is passed to the associated "catch" block parenthesis
	// "Catch" block containing a statement to send a description to standart error output by the cerr function
	catch( exception &error ){ // Immediately after "try" block .This specifies the argument to be an exception type, and a chosed exception name to be prefixed with & reference operator.
		cerr << "Exception: " << error.what() << endl; //Once the exception reference is passed to the "catch" block - get/retrieve an error description with the exception's what() function.
	}




return 0; // Final return statement - returns zero integer to the operating system
  	  // as required by the main function declaration.
}
