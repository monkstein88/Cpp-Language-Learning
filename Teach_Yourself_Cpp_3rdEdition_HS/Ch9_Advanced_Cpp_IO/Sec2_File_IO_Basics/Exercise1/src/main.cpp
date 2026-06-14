
/*
	Exercise 1.: Write a program that will copy a text file. Have this program count the number of characters copied and display
	this result. Why does the number displayed differ from that shown when you list the output file in the directory?
*/

// Copy a text file and display number of chars copied.
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){
	int ch_cnt = 0;

	if(argc !=3){
		cout << "Usage: COPY <input> <output>\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1]); // create an input stream (to be able to read from a file)
	ofstream fout(argv[2]); // create an output stream (to be able to write to a file)
	if(!fin){
		cout << "Cannot open input file - " << argv[1] << endl;
		exit(EXIT_FAILURE);
	}
	if(!fout){
		cout << "Cannot open output file - " << argv[2] << endl;
		exit(EXIT_FAILURE);
 	}

	cout << "Copying:" << endl;

	char ch;
	fin.unsetf(ios::skipws) ; // do not skip leading whitespaces
	while(!fin.eof()){
		fin >> ch;
		cout << ch;
		if(!fin.eof()){
			fout << ch;
			ch_cnt++;
		}
	}
	fout.close();
	fin.close();

	cout << "All copied: " << ch_cnt << " characters\n";

	return EXIT_SUCCESS;
}

/*
	The contents of 'readfile0':

		I wandered lonely as a cloud
	That floats on high o'er vales and hills,
	When all at once I saw a crowd,
	A host, of golden daffodils;
	Beside the lake, beneath the trees,
	Fluttering and dancing in the breeze.

	The contents of 'writefile' after executing with './Ch9_Sec2_Exercise1.exe readfile0 writefile' command:

		I wandered lonely as a cloud
	That floats on high o'er vales and hills,
	When all at once I saw a crowd,
	A host, of golden daffodils;
	Beside the lake, beneath the trees,
	Fluttering and dancing in the breeze.

	The displayed output of the program when executed:

	Copying:
      I wandered lonely as a cloud
	That floats on high o'er vales and hills,
	When all at once I saw a crowd,
	A host, of golden daffodils;
	Beside the lake, beneath the trees,
	Fluttering and dancing in the breeze.

	All copied: 207 characters

	My answer:
		- The number of displayed differ probably because, the program does not count/detect the newline ('\n') as individual
		character.

	Official answer:
		- The reason this program might display a result different from that shown when you list
		the directory is that some character translations might be taking place. Specifically, when
		a carriage-return/linefeed sequence is read, it is converted into a newline. When output,
		newlines are counted as one character but converted back into a carriage-return/linefeed
		sequence again.
*/
