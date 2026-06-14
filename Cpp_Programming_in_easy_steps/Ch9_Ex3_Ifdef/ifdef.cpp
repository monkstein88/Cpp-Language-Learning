/*
 * ifdef.cpp
 *
 *  Created on: 14.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 9 - Processing macros
 *		@Descr: This chapter demonstrates how the C++ compile can be made to perform useful tasks before compiling a program.
 *	 @Exercise: 3
 *	    @Title: Defining conditions
 *		@Brief: The preprocessor can make intelligent insertions to program source code by using macro functions to perform conditional tests. An
 *				"#ifdef" directive performs the most common preprocessor function by testing to see if a specified macro has been defined. When the
 *				macro has been defined, so the test returns true, the preprocessor will insert all directives, or statements, on subsequent lines up
 *				to a corresponding #endif directive.
 *
 *				Conversely, an "#ifndef" directive tests to see if a specified macro has not been defined. When the test returns true it will insert
 *				all directives, or statements, on subsequent lines up to a corresponding "#endif" directive.
 *
 *				To satisfy either conditional test it should be notes that "#define" directive need only specify the macro name to define the
 *				identifier - it need not specify a value to substitute.
 *
 *				Any previously defined macro can be removed later using the "#undef" directive - so that subsequent "#ifdef" conditional tests fail.
 *				The macro can thne be redefined by a further "#define" directive:
 *
 *	   @Beware: - Each preprocessor directive must appear on its own line - you cannot put multiple directives on the same line.
 *
 *
 *	   @Rember: - On Windows systems string macro values specified in a command must be enclosed in escaped double quotes.
 *
 *
 *
 */

// Start a program with a conditional test to insert a directive when a macro is not already defined
#ifndef BOOK
 #define BOOK "C++ Programming in easy steps"
#endif

// Specify library classes to include and the namespace
#include <iostream>
using namespace std;



int main(){
	// Add a conditional preprocessor test to insert an output statement when the test succeeds
	#ifdef BOOK
	 cout << BOOK;
	#endif


	 // Adding another conditional preprocessor test to both define a new macro and insert an output statement when the test succeeds
	#ifndef AUTHOR
	 #define AUTHOR "Mike McGrath"
	 cout << " by " << AUTHOR << endl;
	#endif

	 // Next, adding  a conditional test to undefine a macro if it has already been defined
	#ifdef BOOK
	 #undef BOOK
	#endif

	 // Now, add a conditional test to redefine a macro if it is no longer defined and to insert an output statement
	#ifndef BOOK
	 #define BOOK "Linux in easy steps"
	 cout << BOOK << " by " << AUTHOR << endl;
	#endif


	return 0;
}

	// Save the program, compile and run it to see the insertions
	// After that, recompile the program, this time defining the BOOK macro in the command , then run the progra again to see the specified value
	// appear in the first line of output
	// "c++ -DBOOK=\""Java in easy steps"\" ifdef.cpp -o ifdef.exe
