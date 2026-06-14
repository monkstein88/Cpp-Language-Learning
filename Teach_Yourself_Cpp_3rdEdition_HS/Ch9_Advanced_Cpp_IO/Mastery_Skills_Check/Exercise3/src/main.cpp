
/*
	Exercise 3.: Write a program that copies a text file. In the process, reverse the case of all letters.
*/

#include <iostream>
#include <iomanip>
#include <cctype>
#include <fstream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){

	if(argc!=3){
		cout << "Usage: COPY FILE /w REVERSE LETTER CASE <inputfile> <outputfile>\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin(argv[1], ios::in | ios::binary);
	if(!fin){
		cout << "Cannot open input file - " << argv[1] << endl;
		exit(EXIT_FAILURE);
	}
	ofstream fout(argv[2], ios::out | ios::binary);
	if(!fout){
		cout << "Cannot open output file - " << argv[2] << endl;
		exit(EXIT_FAILURE);
	}
	char ch;
	fin.seekg(0, ios::beg); // Move the head just to the beginning of the file
	fout.seekp(0, ios::beg); // Move the head just to the beginning of the file
	while(!fin.eof()){
		fin.get(ch);
		if(!fin.eof()){
			if(isalpha(ch)){
				if(isupper(ch)){
					fout.put(tolower(ch));
				}else{
					fout.put(toupper(ch));
				}
			}else{
				fout.put(ch);
			}
		}
	}
	cout << "Copy complete!" << endl;
	fin.close();
	fout.close();

	return EXIT_SUCCESS;
}

/*
	This program displays the following output when ran:

*/
