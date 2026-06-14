/*
 * guard.cpp
 *
 *  Created on: 15.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 9 - Processing macros
 *		@Descr: This chapter demonstrates how the C++ compile can be made to perform useful tasks before compiling a program.
 *	 @Exercise: 5
 *	    @Title: Guarding inclusions
 *		@Brief: Typically a C++ program will have many ".h" header files and a single ".cpp"  implementation file containing the main program. Header
 *				files may often contain one or more "#include" directives to make other classes or functions available from other header files and
 *				can cause duplication where definitions appear in two files. For example, where a header file includes another header file containing
 *				a function definition, the compiler will consider that definition to appear in each file - so compilation will fail.
 *
 *				The popular solution to this problem of re-definition employs preprocessor directives to ensure the compiler will only be exposed to
 *				a single definition. These are known as "inclusion guards" and create a unique macro name for each header file. Traditionally the
 *				name is an uppercase version of the file name, with the dot changed to an underscore. For example, "RUM_H" for a file "rum.h"
 *
 *				In creating a macro to guard against duplication an "#ifndef" directive first tests to see if definition has already been made by
 *				another header file included in the same program. If the definition already exists the compiler ignores the duplicate definition,
 *				otherwise a "#define" directive will permit the compiler to use the definition in that header file:
 *
 *
 *
 *	   @HotTip: - Inclusion guards are also known as "macro guards" or simply as "include guards"
 *
 *	   @Beware: - Use the conventional naming scheme, where the macro name resembles the file name, to avoid conflicts.
 *
 *	   @Rember: - All header files should contain header guards - add a "TRIPLE_H" macro to the "triple.h" file
 *
 *
 *
 */

// Start with preprocessor directives to make both the add and truple functions available
#include "add.h"
#include "triple.h"

// Specify the library classes to include and the namespace
#include <iostream>
using namespace std;


// Add a main function containing statments that call both the add and the triple functions from the included headers
int main(){
	cout << "9 + 3 = " << add(9, 3) << endl;
	cout <<  " 9 x 3 = " << triple(9) << endl;

	return 0;
}



