/*
 * write.cpp
 *
 *  Created on: 23.12.2013
 *      Author: Joro
 *
 *
 *		@Title: Writing a file
 *		@Brief: The ability to read and write files from a program provides a useful method of maintaining data on the computer's hard disk. The format
 *				of the data may be specified as human-readable plain text format or machine-readable binary format.
 *
 *				The standard C++ <fstream> library provides functions for working with files, which can be made availabele by adding #include <fstream>
 *				directive at the the start of the program.
 *
 *				For each file that is to be opened a filestream object, must first be created. This will be either an "ofstream" (output filestream)
 *				object, for writing data to the file, or an "ifstream" (input filestream) object, for reading data from the file. The ofstream object
 *				is used like the cout functio n that writes to the standart output, and ifstream object works like the cin function that reads from
 *				standart.
 *
 *				The declaration of a filestream object for writing output begins with the ofstream keyword, then a chosen name for that particular
 *				filestream object followed by parentheses nominating the text file to write to. So the declaration syntax looks like this:
 *
 *					ofstream object-name ("file-name");
 *
 *				The argument nominating the text file may optionally contain the full file path, such as "C:\data\log.txt" or "/home/user/log.txt",
 *				otherwise the program will seek the file within he directory in which the program resides.
 *
 *				Before writing output to a file the program should always first test that the filestream object has actually been created.Typically
 *				this is performed by an if statement that allows the program to write output only when the test is successful.
 *
 *				If a nominated file already exists it will, by default be overwritten without warning. Otherwise a new file will be created and
 *				written.
 *
 *				After writting output to a nominated file the programe should always call the associated filestream object's close() function to
 *				close the output filestream.
 *
 *				The program descibed below first builds a string for writting as output. This written to a nominated file when the filestream as
 *				object has been successfully created, then the filestream closed.
 *
 *
 *	   #Beware: The nominated file name or path must be enclosed within double quotes, like a string.
 *
 *	   #Rember: Notice how the newline and tab characters are preserved in the text file.
 *
 *	   #HotTip: String values can contain \n newline and \t tab escape sequences for formatting lines.
 */

// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support
#include <fstream> // Object oriented library (class library) providing functions for working with files - Include filestream support
// Specify the namespace(s) prefix to use
using namespace std;


/* Program's Entry Point - main function (method) */
int main(){
	// Building a lengthy text string in string variable
	string poem = "\n\tI never saw a man who looked";
	poem.append("\n\tWith such a wistful eye");  // we can either use the append() or += for concatenating strings
	poem.append("\n\tUpon that little tent of blue");
	poem.append("\n\tWhich prisoners call the sky");
	poem.append("\n\t");

	// Create an output filestream object
	ofstream writer("poem.txt"); // The directory (to where this file is put/generated) is figured out at run time (currently where the exe is placed).

	//Writhe the string to a file or exit, the save compile, and run the program to see result
	if(! writer){ // writer is 0
		cout << "Error opening file for output" << endl; // Signal an error then exit the program
		return -1;
	}
	writer << poem << endl; // Write output
	writer.close(); // Close filestream


	return 0; // Final return statement - returns zero integer to the operating system
	  	  // as required by the main function declaration.
}

