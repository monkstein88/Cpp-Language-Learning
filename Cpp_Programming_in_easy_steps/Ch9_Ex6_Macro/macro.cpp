/*
 * macro.cpp
 *
 *  Created on: 15.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 9 - Processing macros
 *		@Descr: This chapter demonstrates how the C++ compile can be made to perform useful tasks before compiling a program.
 *	 @Exercise: 6
 *	    @Title: Using macro functions
 *		@Brief: The "#define" directory can be used to create macro functions that will be substituted in the source code before compilation.
 *
 *				A preprocessor function declaration comprises a macro name immediately followed by parentheses containing the function's arguments -
 *				it is important not to leave any space between the name and the parentheses. The declaration is then followed by the function
 *				definition within another set of parentheses. For example, a preprocessor macro function to half an argument looks like this:
 *
 *											#define HALF(n) (n/2)
 *
 *				Care should be taken when using macro functions because, unlike regular C++ functions, they do not perform any kind of type checking
 *				- so it's quite easy to create a macro that causes errors. For this reason inline functions are usually preferable to macro functions
 *				but, because macros directly substitute their code, they avoid the overhead of a function call - so the program runs faster. The
 *				resulting difference can be seen in the first temporary file created during the compilation process
 *
 *	   @HotTip: - Using uppercase for macro names ensures the macro functions will not conflict with regular lowercase function names.
 *
 *	   @Rember: - An inline function saves the overhead of checking between a function prototype declaration and its definition
 *
 *
 *
 */

// Define two macro functions to manipulate a single argument
#define SQUARE(n) (n * n)
#define CUBE(n) (n * n * n)

// Specify the library classes to include and a namespace prefix to use.
#include <iostream>
using namespace std;

// Declare two inline functions to manipulate a single argument - just like the macro functions defined above
inline int square(int n) { return (n*n); }
inline int cube(int n) { return (n*n*n); }

int main(){
	// At the start of the main function block, declare and initialize an integer variable
	int num = 5;

	// Call each macro function and each comparable inline function
	cout << "Macro SQUARE: " << SQUARE(num) << endl;
	cout << "Inline square: " << square(num) << endl;
	cout << "Macro CUBE: " << CUBE(num) << endl;
	cout << "Inline cube: " << cube(num) << endl;

	// Open the temporary ".ii" file in a plain text editor, like Notepad, to see that the macro functions have been directly substituted in each
	// output satement



	return 0;
}




