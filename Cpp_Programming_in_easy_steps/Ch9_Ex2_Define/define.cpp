/*
 * define.c
 *
 *  Created on: 14.01.2014
 *      Author: Joro
 *
 *
 *	  @Chapter: 9 - Processing macros
 *		@Descr: This chapter demonstrates how the C++ compile can be made to perform useful tasks before compiling a program.
 *	 @Exercise: 2
 *	    @Title: Definin substitutes
 *		@Brief: Just as the preprocessor substitutes library code for "#include" directives other preprocessor directives can be used to substitute
 *				text or numeric values before assembly and compilation.
 *
 *				The "#define" directive specifies a macro, comprising an identifier name and a string or numeric value, to be substituted by the
 *				preprocessor for each occurrence of that macro in the source code.
 *
 *				Like "#include" preprocessor directives, "#define" directives can appear at the start of the source code. As with constant variable
 *				names the macro name traditionally uses uppercase, and defined string values should be enclosed withing double quotes. For numeric
 *				substitutions in expressions the macro name shoud be enclosed in parentheses to ensure correct precedence.
 *
 *				Substitutions can alternatively be made from the command-line using a -Dname option  to replace macros with specified values. Note
 *				that string values within double-quotes must also be enclosed in escaped quotes in the command - so the substitution  will include
 *				double-quote characters.
 *
 *	   @Beware: - Numeric constants are often best declared as "const" variables - because values substituted by the preprocessor are not subject to
 *	   			type-checking.
 *
 *	   @HotTip:	- Linux users can employ escaped quotes \""string"\" or plain single quotes '"string"' to enclose a quoted string in command.
 *
 *	   @Rember: - Attempting to compile a program in which an identifier has not been defined will produce a "not declared in this scope" error.
 *
 *
 *
 */


// Starting a program by declaring three define directives
//#define BOOK "C++ Programming in easy steps" // Commenting-out, the define dirctevies for both BOOK...
//#define NUM 200								// .. and NUM identifiers - then save program file to apply the changes
#define RULE "****************************"
// then recompile the program , specifying substitute macro values, then run the program once more
// -DNUM=50 -DBOOK=\""XML in easy steps"\" in the project properties, build settings, for the C++ compiler, miscellaneous


// Specify the library classes to include and the namespace
#include <iostream>
using namespace std;


// Add a main function containing a final return statement and three statements to output substituted values.
int main(){
	cout << RULE << endl << BOOK << endl << RULE;
	cout << endl << "NUM is: " << NUM << endl;
	cout << "Double NUM: " << ( (NUM) * 2 ) << endl;

	return 0;
}



