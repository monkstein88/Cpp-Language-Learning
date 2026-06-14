/*
 * format.cpp
 *
 *  Created on: 24.12.2013
 *      Author: Joro
 *
 *	   @Tittle: Formatting with getline
 *		@Brief:	The getline() function can optionally have third argument to specify a delimiter at which to stop reading a line. This can be used
 *				to separate text read from a tabulate list in a data file
 *
 *	   @HotTip: The if statement tests if the item number (element number plus 1) is exactly divisible by four to determine whether to read up to
 *	   			newline or tab character.
 *
 *	   @Rember: The string array must have sufficient number of elements to stroe each item of data - it would need to be enlarged to handle more
 *	   			records.
 *
 *	   @Beware: The record counter must use a prefix incrementer to increase the variable value before it is output.
 */

// Include C++ library classes
#include <iostream> // Object oriented library (class library) that provides input and output functionality using streams - Include I/O support
#include <string> // Object oriented library (class library) providing string functionality (it is a part of the std namespace) - Include string support
#include <fstream> // Object oriented library (class library) providing functions for working with files - Include filestream support

// Specify the namespace(s) prefix to use
using namespace std;

/* Program's Entry Point - main function (method) */
int main(){
	//Declare four variables - a fixed number, a string array to store data, and two counter variables set to 0
	const int RANGE = 12;
	string tab[ RANGE ];
	int i = 0, j = 0;

	// Create an input filestream object
	ifstream reader("records.txt");
	// Exit the program unless the filestream object exists
	if(!reader){
		cout << "Error opening input file" << endl;
		return -1;
	}

	// Loop to read each line into the string array - reading up to a \t tab for the first three items and up to a \n newline for the fourth item
	// on each line
	while (!reader.eof()){
		if((i + 1)%4 == 0){
			getline(reader,tab[i++],'\n');
		}else{
			getline(reader,tab[i++],'\t');

		}
	}
	// Close the filestream and zero (reset) the counter
	reader.close();
	i=0;
	// A second lloop  to output the data store in each array element, formatted with descriptions and newlines
	while( i<RANGE ){
		cout << endl << "Record Number: " << ++j << endl;
		cout << "Forename: " << tab[i++] << endl;
		cout << "Surnmae: " << tab[i++] << endl;
		cout << "Department: " << tab[i++] << endl;
		cout << "Telephone: " << tab[i++] << endl;
	}




	return 0; // Final return statement - returns zero integer to the operating system
	  	  // as required by the main function declaration.
}
