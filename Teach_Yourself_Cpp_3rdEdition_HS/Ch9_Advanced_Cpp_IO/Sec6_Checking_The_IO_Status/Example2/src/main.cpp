
/*
	Example 2.: This program displays a text file. It uses 'good()' to detect a file error:
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){
	char ch;

	if(argc!=2){
		cout << "Usage: PR <filename>\n";
		return EXIT_FAILURE;
	}

	ifstream fin(argv[1]);
	if(!fin){
		cout << "Cannot open input file.\n";
		return EXIT_FAILURE;
	}
	while(!fin.eof()){
		fin.get(ch);
		// check for error, but that is not caused just by the event that the end-of-file had been reached.
		if(!fin.good() && !fin.eof()){
			cout << "I/O Error...terminating\n";
			return EXIT_FAILURE;
		}
		cout << ch;
	}
	fin.close();

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch9_Sec6_Example2.exe readfile
	        I wandered lonely as a cloud
	That floats on high o'er vales and hills,
	When all at once I saw a crowd,
	A host, of golden daffodils;
	Beside the lake, beneath the trees,
	Fluttering and dancing in the breeze.

	        Continuous as the stars that shine
	And twinkle on the milky way,
	They stretched in never-ending line
	Along the margin of a bay:
	Ten thousand saw I at a glance,
	Tossing their heads in sprightly dance.

	        The waves beside them danced; but they
	Out-did the sparkling waves in glee:
	A poet could not but be gay,
	In such a jocund company:
	I gazed—and gazed—but little thought
	What wealth the show to me had brought:

	        For oft, when on my couch I lie
	In vacant or in pensive mood,
	They flash upon that inward eye
	Which is the bliss of solitude;
	And then my heart with pleasure fills,
	And dances with the daffodils.

	

*/
