/*
 * except.cpp
 *
 *  Created on: 26.12.2013
 *      Author: Joro
 *
 *
 *
 *	   @Tittle: Handling errors
 *		@Brief: Exception type information can be provided by including the C++ standart <typeinfo> library. Its typeid() function accepts an exception
 *				argument so its name() function can return the type name
 *
 *
 *	   @HotTip: AN exception object is typically givn the name "e"- as seen here.
 *
 *	   @Rember: The out_of_range error occurs because the replace() function is trying to begin erasing at the 100th character, but the string
 *	   			variable has only three characters.
 *
 *	   @Beware: The order of "catch" blocks can be important - placing the "exception" error handler before the "out_of_range" error handler would allow
 *	   			an "out_of_range" error to be handled by the (higher level) exception handler.
 *
 *
 */



// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support
#include <fstream> // Object oriented library (class library) providing functions for working with files - Include filestream support
#include <stdexcept> // Object oriented library (class library) providing functionality about error handling/reporting - Include exception standard support
#include <typeinfo> // Provides exception type information																					-	Include support about type information

// Specify the namespace(s) prefix to use
using namespace std;

/* Program's Entry Point - main function (method) */
int main(){
	// Declaring and initializing two variables, and output a text message
	string lang = "C++";
	int num = 1000000000 ;// One billion


	// "Try-catch" block here
	// inserting a "try" block containing a statement attempting to replace part of the string value
	try{
		// Just ignore this for the second part
		// lang.replace(100, 1, "C");

		// Replace the (original/First) statement in the try block with the one attempting to resize the string variable
		//lang.resize(3 * num); // Again we have to ignore this error

		//Again Replace the (Second) statement in the "try" block with one attempting to open a non-existent file
		ifstream reader("nonsuch.txt");
		if(!reader){
			throw logic_error("File not found"); // Produce an exception manually of type logic_error, also pass a custom message , which can be retrieved by its what() function
 		}

	} // Try to erase at position 100 of the lang string (which position does not exist), 1 character and replace is with the single character string - "C"
	//	After the try block, add a catch block to handle a range exception
	catch(out_of_range &e){ // A refernce to to the exception - e - is paseed
		cerr << "Range Exception: " << e.what() << endl; // Derive a description from the exception reference with what() function
		cerr << "Exception Type: " << typeid( e ).name(); //
		cerr << endl << "Program terminated." << endl;
		//return -1;
	}
	// (After the first/original catch block) Add a second catch block to handle general exceptions
	catch(exception &e){
		cerr << "Exception: " << e.what() << endl;
		cerr << "Exception Type: " << typeid( e ).name() << endl;
	}


	cout << "Program continues..." << endl;
	return 0; // Final return statement - returns zero integer to the operating system
  	  // as required by the main function declaration.
}
