
/*
	Example 2.: The next program uses 'seekg()' to position the get pointer into middle of a file and then displays the contents
	of that file from that point. The name of the file and the location to begin reading from are specified on the command line.
*/

// Demonstrate 'seekg()'
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){
	char ch;

	if(argc!=3){
		cout << "Usage: LOCATE <filename> <loc>\n";
		return EXIT_FAILURE;
	}

	ifstream fin(argv[1], ios::in | ios::binary);
	if(!fin){
		cout << "Cannot open input file.\n";
		return EXIT_FAILURE;
	}
	fin.seekg(atoi(argv[2]), ios::beg);
	while(!fin.eof()){
		fin.get(ch);
		cout << ch;
	}
	fin.close();

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch9_Sec5_Example2.exe textfile 15
	PQRSTUVWXYZ01234567890



*/
