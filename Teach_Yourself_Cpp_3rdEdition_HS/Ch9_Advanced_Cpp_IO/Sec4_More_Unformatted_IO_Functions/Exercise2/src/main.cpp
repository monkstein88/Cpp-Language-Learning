
/*
	Exercise 2.: Write a program that reads a text file one line at a time and diplays each line on the screen. Use 'getline()'.
*/

// Use 'getline()' to display a text file.
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){
	char line_str[80];

	if(argc!=2){
		cout << "Usage: PRINT TEXT <inputfile>" << endl;
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1]);
	if(!fin){
		cout << "Cannot open input file - " << argv[1] << endl;
		exit(EXIT_FAILURE);
	}

	while(!fin.eof()){
		fin.getline(line_str, sizeof(line_str)-1);
		if(!fin.eof()){
			cout << line_str << '\n'; // we need to add the '\n' explicitly, as the 'getline()' does not include/put it in the
											  // 'line_str' 
		}
	}

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch9_Sec4_Exercise2.exe readfile
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
