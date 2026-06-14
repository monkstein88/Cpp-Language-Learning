/*
 * sum.cpp - Client file
 *
 *  Created on: 13.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 8 - Harnessing polymorphism
 *		@Descr: This chapter demonstrates how to separate programs into modular components and introduces the topic of polymorphism - the third
 *				principle of C++ Object Oriented Programming
 *	 @Exercise: 7
 *	    @Title: Isolating class structures & Employing isolated classes
 *		@Brief: The source code for each example program in this book is generally contained in a single ".cpp" file to save space but in reality OOP
 *				programs are often contained in three separate files:
 *
 *						-	Header ".h" file - contains only class declarations
 *
 *						-	Implementation ".cpp" file - contains class definitions to implement the methods declared in the header file, which is
 *						referenced by an "#include" directive.
 *
 *						-	Client ".cpp" file - contains a "main" method that employs the class members declared in the header file, which is also
 *						referenced by an "#include" directive
 *
 *				For example, a sum calculator program might comprise three files named "ops.h" (a header file declaring operation classes), "ops.cpp"
 *				(an implementation file defining the operation methods), and sum.cpp (a client file calling various operations).
 *
 *				When compiling "sum.cpp" the compiler incorporates the included header file and implementation file into the program. It first
 *				translates the header file and implementation file into a binary object file ("ops.o"), then it translates the header file and client
 *				file into a second binary object file ("sum.o"). Finally, the Linker combines both object files into a single executable file
 *				("sum.exe").
 *
 *				Isolating class structures in separate "modular" files has the advantage of improving the portability and makes code maintenance
 *				easier by clearly identifying the purpose of each file.
 *
 *				To have the compiler combine all three source code files into a single executable file it is only necessary to explicitly specify
 *				the ".cpp" files in the compiler command - an "#include" directive ensures the header file will also be recognized.
 *
 *				For example, with the statement " #include "ops.h" " in both "ops.cpp" and "sum.cpp" the command to compile the example described
 *				opposite need not to specify the "ops.h" header in the compiler command, but is just "c++ ops.cpp sumc.pp -o sum.exe".
 *
 *				This example will allow the user to input simple arithmetical expression and output the calculated result. It will provide
 *				when first launched and allow the user to make subsequent expressions - or exit by entering a zero character.
 *
 *	   @HotTip:	- The client file is sometimes referred to as a "driver" file.
 *	   			- Using the "#include" directive to reference a header file works in a similar manner to using "#include" directive to reference
 *	   			a standart C++ (class) library.
 *
 *
 *	   @Beware: - Notice that the header file name must be surrounded by quotes in an "#include" directive - not by the < > angled brackets used to
 *	   			include  standard C++ library.
 *	   			- Due to space limitation this program makes barely no attempt at input alidation - it assumes the user will enter a valid
 *	   			expression, such as 8 * 3.
 *
 *
 *
 *	   @Rember: - This program loops until the user types a zero and hits Return - changing "status" control variable to "false", and so exiting the program
 *
 */

#include "ops.h"

int main(){
	// Create a pointer plus a call to display instructions
	Calculator* pCalc = new Calculator;
	pCalc->launch();


	// A loop to read expressions and write results while the program status permits
	while(pCalc->run()){
		pCalc->readInput();
		pCalc->writeOutput();

	}

	return 0;

}


