
/*
	Exercise 1.2: Add error checking to your answers to the exercise from the preceding section.
*/

// Swap characters in a file + error checking
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void checkstatus(fstream& fio);


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
		checkstatus(finout);
		ch_pair[1] = finout.get();
		checkstatus(finout);
		if(!finout.eof()){
			//cout << i << endl;
			finout.seekp( (long) finout.tellg() - 2); // Move the pointer back 2 position (a pair)
			checkstatus(finout);
			finout.put(ch_pair[1]);
			checkstatus(finout);
			finout.put(ch_pair[0]);
			checkstatus(finout);
		}
	}
	finout.close();

	return EXIT_SUCCESS;
}


void checkstatus(fstream& fio){
	static ios::iostate i;

	i = fio.rdstate();
	if(fio.good())
		return;
	else{
		if(i & ios::eofbit){
			cout << "\nEOF reached.\n";}
		if(i & ios::failbit){
			cout << "\nNon-Fatal I/O error\n";}
		if(i & ios::badbit){
			cout << "\nFatal I/O error\n";}
		exit(EXIT_FAILURE);
	}
}

/*

	This program displays the following when ran:

	$ ./Ch9_Sec6_Exercise1_2.exe textfile

	EOF reached.

	Non-Fatal I/O error




*/

/*
	Official answer:


*/
