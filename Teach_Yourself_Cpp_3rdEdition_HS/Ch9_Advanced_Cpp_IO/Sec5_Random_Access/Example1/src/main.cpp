
/*
	Example 1.: The following demonstrates the 'seekp()' function. It allows you to change the specific character in a file.
	Specify a file name on the command line, followed by the number of the byte in the file you want to change, followd by the new
	character. Notice that the file is opened for read/write operations.
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){
	if(argc != 4){
		cout << "Usage: CHANGE: <filename> <byte> <char>\n";
		exit(EXIT_FAILURE);
	}

	fstream fout(argv[1], ios::in | ios::out | ios::binary);
	if(!fout){
		cout << "Cannot open input-output file.\n";
		exit(EXIT_FAILURE);
	}

	fout.seekp(atoi(argv[2]), ios::beg);
	fout.put(*argv[3]);
	fout.close();

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch9_Sec5_Example1.exe textfile 5 6

	
*/
