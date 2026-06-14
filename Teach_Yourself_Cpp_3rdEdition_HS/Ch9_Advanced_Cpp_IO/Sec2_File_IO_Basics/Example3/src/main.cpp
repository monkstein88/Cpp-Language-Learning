
/*
	Example 3.: Following is a program that copies a text file and, in the process, converts all spaces into '|' symbols. Notice
	how 'eof()' is used to check for the end of input file. Notice also how the input stream 'fin' has its 'skipws' flag turned
	off. This prevents leading spaces from being skiped.
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){

	if(argc!=3){
		cout << "Usage: CONVERT <input> <output>\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1]); // open input file (for reading from)
	ofstream fout(argv[2]); // open output file (for writing to)
	if(!fin){
		cout << "Cannot open input file!\n";
		exit(EXIT_FAILURE);
	}
	if(!fout){
		cout << "Cannot open output file!\n";
		exit(EXIT_FAILURE);
	}

	char ch;

	fin.unsetf(ios::skipws); // make so that reading the input file does not skip any spaces characters (only)
	while(!fin.eof()){
		fin >> ch;
		if(ch == ' ')
			ch = '|';
		if(!fin.eof()) // This removes the extra 'newline' that is appended (as extra) to the written file, at the end
			fout << ch;
	}

	fin.close();
	fout.close();

	return EXIT_SUCCESS;
}

/*
	The contents of 'readfile':

	 Commando Duke Lizards $

	 The contents of 'writefile' after executing with './Ch9_Sec2_Example3.exe readfile writefile' command:

	 |Commando|Duke|Lizards|$||

*/
