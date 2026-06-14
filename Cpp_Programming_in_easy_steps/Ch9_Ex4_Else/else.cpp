/*
 * else.cpp
 *
 *  Created on: 14.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 9 - Processing macros
 *		@Descr: This chapter demonstrates how the C++ compile can be made to perform useful tasks before compiling a program.
 *	 @Exercise: 4
 *	    @Title: Providing alternatives
 *		@Brief: The conditional test performed by "#ifdef" and "#ifndef" can be extended to provide an alternative by adding an "#else" directive.
 *				For example:
 *
 *					#ifdef WEATHER
 *					 cout << WEATHER ;
 *					#else
 *					 #define WEATHER "Sunny"
 *					#endif
 *
 *				Similarly "#if", "#else" and "#elif" macros can perform multiple conditional tests much like the regular C++ "if" amd "else"
 *				keywords.
 *
 *				For testing multiple definitions the "#ifdef" macro can be expressed as "#if defined" and further tests made by "#elif defined"
 *				macros.
 *
 *				While most macros are defined in the source file with a "#define" directive, or on the command line with the -D option, some macros
 *				are automatically predefined by the compiler. Typically these have names beginning with a double underscore "__" to avoid accidental
 *				confusion with chosen names. The compiler's predefined macros are platform-specific so a program can employ a multiple definition
 *				test to identify the host platform:
 *
 *					1. Launch a plain text editor and save a new file (without any content) as "empty.txt" in your program's directory2
 *
 *					2. To see a list of the compiler's predefined macros issue a command calling the cpp preprocessor directly with a "-dM" option
 *					on the empty file:
 *					 						"cpp -dM empty.txt"
 *
 *					3. Scroll through the list to find the "_WIN32" macro on Windows or the "__linux"
 *
 *
 *
 *	   @HotTip: - The "#elif" macro simply combines "else" and "if" to offer alternative test.
 *
 *	   @Beware: - Use the "cpp" command to call the preprocessor directly (not the "c++" command) and ensure the "-dM" option is capitalized
 *	   			correctly.
 *				- The predefined "_WIN32" macro has one underscore but the "__linux" macro has two underscore characters.
 *
 *	   @Rember: - The conditional test of predefined macros could e extended to seek those of other operating systems and a final "#else" directive
 *	   			added to specify an "Unknown" default.
 *
 *
 *
 */

// 4. Starting a new program with a conditional test to seek the "_WIN32" and "__linux" macros - to identify the platform
#if defined _WIN32
 #define PLATFORM "Windows"
#elif defined __linux
 #define PLATFORM "Linux"
#endif

//Specify the library classes to include and the namespace
#include <iostream>
using namespace std;


int main(){
	// Output a statement identifying the host platform
	cout << PLATFORM << " System" << endl;

	// Statements to execute for specific platforms
	if( PLATFORM == "Windows" ){
		cout << "Performing Windows-only taks..." << endl;
	}
	if(PLATFORM == "Linux"){
		cout << "Performing Linux-only tasks..." << endl;
	}
	return 0;
}

