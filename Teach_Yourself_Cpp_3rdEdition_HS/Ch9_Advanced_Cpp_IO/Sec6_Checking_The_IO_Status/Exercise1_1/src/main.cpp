
/*
	Exercise 1.1: Add error checking to your answers to the exercise from the preceding section.
*/

// Display a file backwards on the screen + error checking
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
		if(!fin.good()){
			if(fin.eof())
				cout << "\nEnd-Of-File reached.\n";
			if(fin.bad())
				cout << "\nA fatal I/O error has occured.\n";
			if(fin.fail())
				cout << "\nA nonfatal I/O error has occurred.\n";
			exit(EXIT_FAILURE); // Finally, terminate the program, if any error is encountered
		}else
			cout << ch;
	}

	if(fin.good())
		cout << "\nNo errors occurred.\n";
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

		char ch;
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
