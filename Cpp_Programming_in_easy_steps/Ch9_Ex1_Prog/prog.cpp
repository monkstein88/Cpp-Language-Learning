/*
 * prog.cpp
 *
 *  Created on: 13.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 9 - Processing macros
 *		@Descr: This chapter demonstrates how the C++ compile can be made to perform useful tasks before compiling a program.
 *	 @Exercise: 1
 *	    @Title: Exploring compilation
 *		@Brief: Whenever the C++ compiler runs, it first calls upon its preprocessor to seek any compiler directives that may be included in the
 *				source code. Each of these begin with the "#" hash character and will be implemented first to effectively modify the source code
 *				before it is assembled and compiled.
 *
 *				The changes made by compiler directives to the preprocessor create a new temporary files thatt are not normally seen. It is these
 *				temporary files that are used to create a binary object file:
 *
 *					- The first temporary file created during compilation expands the original source code by replacing its compiler directives with
 *					with library code that implements those directives. This text file is named like the source file but with a ".ii" file extension
 *
 *					- The second temporary file created during compilation is a translation of the temporary expanded .ii file into low-level
 *					Assembly language instructions. This text file is named like the source file but with a ".s" file extension
 *
 *					- The third temporary file created during compilation is a translation of the temporary Assembly language ".s" file into machine
 *					code. This binary object file is named like the source file but with a ".o" file extension
 *
 *				So the compilation process employs the Preprocessor to compile source code, an "Assembler" to translate this into a machine code,
 *				and a Linker to convert one or more  binary objects into an executable progra.
 *
 *				You can see the temporary files by instructing the compiler to save them using "-save-temps" compiler option. Both temporary text
 *				files can then be examined by opening them in a plain text editor.
 *
 *				Most significantly, you can see that the temporary file with the ".ii" file extension contains the complete function definitons from
 *				any included library. For example, it replaces "#include <iostream>" directive with definitions for the "cin", "cout", "cerr"
 *				functions, and the clog function that can be used to redirect error messages to a file. The end of the ".ii" file shows the defined
 *				functions to be part of the "std" namespace - so they can appear without the "std::" prefix.
 *
 *				After compilation.
 *				Open the ".ii" file in a plain ext editor, such as Notepad, then scroll to the end of the file to see the modified source code -
 *				notice how <iostream> library functions are defined in the "std" namespace
 *
 *				Open the ".s" file in a plain text editor to see the low-level assembler instructions - notice how the message string is now
 *				terminated by the sepecial \0 character.
 *
 *
 *
 *	   @Rember: - One or more object files can be used to create an executable file as described in Ch8_Ex7 (page 146).
 *
 *	   @HotTip:	- You can combine these steps, creating an executable file and saving temporary files, by issuing the command
 *	   			"c++ prog.cpp -save-temps -o prog.exe"
 *
 *
 *
 */

// Creating a simple program named "prog.cpp" that will output a message when it gets executed
#include <iostream>

using namespace std;


int main(){
	cout << "This is simple test program" << endl ;
	return 0;
}



