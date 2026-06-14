
/*
	Example 1.2: Rewrtie your answers to Exercises 1 and 3 in the preceding section (Section 9.2) so that they use 'get()', 'put()',
	'read()', and/or 'write()'. (Use whichever of these functions you deem most appropriate.)
*/

// Word count
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char *argv[]){
	int word_cnt = 0;
	char ch;

	if(argc!=2){
		cout << "Usage: WORD COUNT <inputfile>\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1], ios::in | ios::binary);
	if(!fin){
		cout << "Cannot open input file.\n";
		exit(EXIT_FAILURE);
	}

	do{ // Skip any leading/initial whitespaces (tab spaces, carriage returns and blank spaces are all considered whitespaces),
		fin.get(ch); // that the file could begin with. If they are there.
	}while(isspace(ch) && !fin.eof()); // So, cycle till you reach the first non-whitespace character.

	while(!fin.eof()){
		fin.get(ch); // Read through the letters & adjacent symbols, between spaces ...
		if(isspace(ch)){ // Each time a whitespace is encountered ...
			word_cnt++;  // ... assume this as whitespace surrounding a word.
			while(!fin.eof() && isspace(ch)){ // Pass through reduntant/consecutive whitespace sections.
				fin.get(ch);
			}
		}
	}

	cout << "Total count: " << word_cnt << " words." << endl;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:


*/
