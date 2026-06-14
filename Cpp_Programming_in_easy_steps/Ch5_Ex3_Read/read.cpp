/*
 * read.cpp
 *
 *  Created on: 24.12.2013
 *      Author: Joro
 *
 *		@Tittle: Reading characters & lines
 *		@Brief:	 The ifstream filestream object has a get() function that can be used in a loop to read a file and assign each character in turn to the
 *				 char variable speciefied as its argument.
 *				 The program works well enough but the loop must make many iterations to output the text file contents. Efficiency could be improved by
 *				 reading a line on each iteration of the loop
 *
 *	   @HotTip:  Notice how ifstream eof() function is used to check if the "end of file" has been reached
 *
 *	   @Rember:  Output an endl after each line output - because getline() stops reading when it meets a \n newline character.
 */

// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support
#include <fstream> // Object oriented library (class library) providing functions for working with files - Include filestream support

// Specify the namespace(s) prefix to use
using namespace std;


/* Program's Entry Point - main function (method) */
int main(){
	// Two variable declarations - one variable to store a character and another to count loop iterations
	char letter;
	int i;
	string line;

	// Create an input filestream object  to read the text file from the previous example
	ifstream reader("poem.txt");
	// Exit (signal a fault) unles the filestream object exists
	if(!reader){ // If ok, reader != NULL
		cout << "Error opening input file" << endl;
		return -1;
	}
/*
	// Create a loop to read the text file, assigning each character in turn o the variable and outputting its value
	for(i=0;!reader.eof();i++){
		reader.get(letter);
		cout << letter;
	}
*/

	// Create a loop to read the text file, assigning (reading each line, line by line)
	// Replace both statements in the for loop to read lines .
	for(i=0;!reader.eof();i++){
		getline(reader,line); // Getline stops reading when it meets a \n newline character, ...
		cout << line << endl; // thus output an  endl after each line 
	}

	// Close the filestream and output the total number of iterations
	reader.close();
	cout << "Iterations: " << i << endl;



	return 0; // Final return statement - returns zero integer to the operating system
	  	  // as required by the main function declaration.
}
