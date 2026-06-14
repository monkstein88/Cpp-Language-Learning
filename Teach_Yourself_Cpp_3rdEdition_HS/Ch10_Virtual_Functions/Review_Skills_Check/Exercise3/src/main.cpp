
/*
	Exercise 3.: Write a program that searches a text file for a word specified on the command line. Have the program display how
	many times the specifieed word is found. For simplicity, assume that anything surrounded by whitespace is a word.
*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define SIZE (80)

int main(int argc, char* argv[]){

	if(argc!=3){
		cout << "Usage: SEARCH WORD <inputfile> <word>\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1], ios::in | ios::binary);
	if(!fin){
		cout << "Error opening input file. Exiting...\n";
		exit(EXIT_FAILURE);
	}

	int word_match=0;
	char word_buf[SIZE];
	cout << "Searching for " << "'" << argv[2] << "' as case sensitive, whole word" << " in file - " << argv[1] << endl;
	fin.setf(ios::skipws); // This is already set by default. But just so that we are explicit. We need to be sure that the
								  // whitespaces are skiped,so they are read and discarded from stream - they act as a delimeter for
								  // individual words
	while(!fin.eof() && fin.good()){
		fin >> word_buf; // It is important that initial white spaces are ignored
		if(!fin.eof()){
			if(!strcmp(word_buf, argv[2])){
				word_match++;
			}
		}
	}

	cout << word_match << " instances found." << endl;

   return EXIT_SUCCESS;
}

/*

	This program displays the following output when ran:

	$ ./Ch10_Review_Skills_Check_Exercise3.exe readfile in
	Searching for 'in' as case sensitive, whole word in file - readfile
	5 instances found.


*/
