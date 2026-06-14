
/*
	Exercise 1.: Write a program that displays a text file backwards. Hint: Think about this before creating your program. The
	solution is easier than you might imagine.
*/

// Displa a file backwards on the screen.
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){
	char ch; int i;
	ios::pos_type start, end, pos;

	if(argc!=2){
		cout << "Usage: REVERSE TEXT <filename>\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin(argv[1], ios::in | ios::binary);
	if(!fin){
		cout << "Cannot open input file - " << argv[1] << endl;
		exit(EXIT_FAILURE);
	}

	fin.seekg(0, ios::end); // Go right at the start of the file ...
	i = fin.tellg(); // ... get its position and store it
	for(i = i-1; i>=0; i--){
		fin.seekg(i, ios::beg);
		fin.get(ch);
		cout << ch;
	}
	fin.close();

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch9_Sec5_Exercise1.exe textfile

	09876543210ZYXWVUTSRQPONMLKJIHGFEDCBA


*/
/*
	Official answer:

	#include <iostream>
	#include <fstream>
	using namespace std;

	int main(int argc, char* argv[]){

		if(argc!=2){
			cout << "Usage: REVERSE <filename>\n";
			return 1;
		}

		ifstream in(argv[1], ios::in | ios::binary);

		if(!in){
			cout << "Cannot open input file.\n";
			return 1;
		}

		chhar ch;
		long i;

		// go to end of file (less of eof char)
		in.seekg(0, ios::end);
		i = (long) in.tellg(); // see how many bytes in file
		i -= 2; // backup before eof

		for( ; i>=0; i--){
			in.seekg(i, ios::beg);
			in.get(ch);
			cout << ch;
		}

		in.close();

		return 0;
	}

*/
