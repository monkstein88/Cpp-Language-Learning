
/*
	Example 1.: Here is a program that creates an output file, write information to it, closes the file and opens it again as an
	input file and reads in the information:
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	ofstream fout("test");

	if(!fout){
		cout << "Cannot open output file.\n";
		return EXIT_FAILURE;
	}

	fout << "Hello!\n";
	fout << 100 << ' ' << hex << 100 << endl;

	fout.close();

	ifstream fin("test"); // open input file

	if(!fin){
		cout << "Cannot open input file.\n";
		return EXIT_FAILURE;
	}

	char str[80];
	int i;

	fin >> str >> i; // First the "Hello" will be put into 'str'. Then the decimal 100 will be put into 'i'
	cout << str << ' ' << i << endl;

	fin.close();

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	Hello! 100

	After you run this program, examine the contents of 'test'. It will contain the following:

	Hello!
	100 64

	As stated earlier, when the '<<' and '>>' operators are used to perform file I/O, information is formatted exactly as it would
	appear on the screen.
*/
