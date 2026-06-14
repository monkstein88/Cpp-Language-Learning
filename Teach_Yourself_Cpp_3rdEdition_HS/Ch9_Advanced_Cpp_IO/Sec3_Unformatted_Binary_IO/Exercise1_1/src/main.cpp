
/*
	Example 1.1: Rewrtie your answers to Exercises 1 and 3 in the preceding section (Section 9.2) so that they use 'get()', 'put()',
	'read()', and/or 'write()'. (Use whichever of these functions you deem most appropriate.)
*/

// Copy a text file and display number of chars copied.
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char *argv[]){
	int ch_cnt=0;
	char ch;

	if(argc != 3){
		cout << "Usage: COPY <inputfile> <outputfile>\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1], ios::in | ios::binary);
	ofstream fout(argv[2], ios::out | ios::binary);
	if(!fin){
		cout << "Cannot open input file - " << argv[1] << endl;
		exit(EXIT_FAILURE);
	}
	if(!fout){
		cout << "Cannot open output file - " << argv[2] << endl;
		exit(EXIT_FAILURE);
	}

	while(!fin.eof()){
		fin.get(ch);
		if(!fin.eof()){
			cout << ch;
			fout.put(ch);
			ch_cnt++;
		}
	}

	cout << endl << "Total copied: " << ch_cnt << " characters." << endl;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch9_Sec3_Exercise1_1.exe readfile0 writefile
	        I wandered lonely as a cloud
	That floats on high o'er vales and hills,
	When all at once I saw a crowd,
	A host, of golden daffodils;
	Beside the lake, beneath the trees,
	Fluttering and dancing in the breeze.

	Total copied: 213 characters.

*/
