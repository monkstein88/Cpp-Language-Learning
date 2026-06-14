/*
 * append.cpp
 *
 *  Created on: 23.12.2013
 *      Author: Joro
 *
 *		@Title: Appending to a file
 *		@Brief: When a filestream object is created, the parentheses following its chose name can optionally contain additional arguments, specifying
 *				a range of file "modes"to control the behavior of that filestream object. These file modes are part of the ios namespace, so must be
 *				explicitly addressed using that prefix. Each file mode is listed in the table below, together with a behavior description:
 *
 *					<Mode>:				<Behavior>:
 *					ios::out			Open a file to write output
 *					ios::in				Open a file to read input
 *					ios::app			Open a file to append output at the end of any existing content
 *					ios::trunc			Truncate the existing file (default behaviour)
 *					ios::ate			Open a file without truncating and allow data to be written anywhere in the file
 *					ios::binary 		Treat the file as binary format rather than text so the data may be stored in non-text
 *
 *				Multiple modes may be specified if they are seperated by a "|" pipe character. For example, the syntax statement to open a file for
 *				binary output looks like this:
 *
 *					ofstream object-name("file-name",ios::out|ios::binary);
 *
 *				The default behaviour when no modes are explicitly specified regards the file as a text file that will be truncated after writting.
 *
 *				The most commonly specified mode is ios::app, which ensures existing content will be appended, rather than overwritten, when new
 *				output is written to the nominated file.
 *
 *				The program described below appends data to the text file created in the previous example
 *
 *
 *	   #Beware: The file must allow the program suitable read and write permissions.
 *
 *	   #Rember: The preprocessor directive - using namespace std; - allows the std namespace prefix to be omitted - so cout refers to the std::cout
 *	   			refers to the std::cout function. The ios namespace exists within the std namespace - so the file modes can be explicitly addressed
 *	   			using both namespace prefixes, for example std::ios::out.
 *
 *	   #HotTip:
 */


// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support
#include <fstream> // Object oriented library (class library) providing functions for working with files - Include filestream support

// Specify the namespace(s) prefix to use
using namespace std;


/* Program's Entry Point - main function (method) */
int main(){
	// Building text string in a string variable
	string info = "\n\tThe Ballad of Reading Gaol" ;
	info.append("\n\t\t\tOscar Wilde 1898");

	// Create an output filestream object - specifying a file mode that will append to existing text
	ofstream writer("poem.txt", ios::app);

	// Append the string to a file or exit.
	if(! writer){
		cout << "Error opening file for output" << endl;
		return -1;
	}
	writer << info << endl;
	writer.close();

	return 0; // Final return statement - returns zero integer to the operating system
	  	  // as required by the main function declaration.
}
