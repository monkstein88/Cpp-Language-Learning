
/*
	Exercise 2.: Write a program that swaps each character pair in a text file. For example, if the file contains "1234", then
	after the program is run, the file will contain "2143". (For simplicity, you may assume that the file contains an even number
	of characters.)
*/

// Swap characters in a file.
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){

	if(argc!=2){
		cout << "Usage: SWAP CHAR PAIRS <filename>" << endl;
		exit(EXIT_FAILURE);
	}
	fstream finout(argv[1], ios::in | ios::out | ios::binary);
	if(!finout){
		cout << "Cannot open input file - " << argv[1] << endl;
		exit(EXIT_FAILURE);
	}

	char ch_pair[2];

	while(!finout.eof()){
		ch_pair[0] = finout.get();
		ch_pair[1] = finout.get();
		if(!finout.eof()){
			finout.seekp( (long) finout.tellg() - 2); // Move the pointer back 2 position (a pair)
			finout.put(ch_pair[1]);
			finout.put(ch_pair[0]);
		}
	}
	finout.close();

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch9_Sec5_Exercise2.exe textfile


*/

/*
	Official answer:

	#include <iostream>
	#include <fstream>
	using namespace std;

	int main(int argc, char* argv[]){

		if(argc != 2){
			cout << "Usage: SWAP <filename>\n";
			return 1;
		}

		// open file for input/output
		fstream io(argv[1], ios::in | ios::out | ios::binary);
		if(!io){
			cout << "Cannot open file.\n";
			return 1;
		}

		char ch1, ch2;
		long i;

		for(i=0; !io.eof(); i+=2){
			io.seekg(i, ios::beg);
			io.get(ch1);
			if(!io.eof()){
				continue;
			}
			io.get(ch2);
			if(!io.eof()){
				continue;
			}
			io.seekg(i, ios::beg);
			io.put(ch2);
			io.put(ch1);
		}
		io.close();

		return 0;
	}
*/
