
/*
	Example 1.: The following program illustrates 'rdstate()'. It displays the contents of a text file. If an error occurs, the
	function reports it by using 'checkstatus()'.
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void checkstatus(ifstream& in);

int main(int argc, char* argv[]){

	if(argc != 2){
		cout << "Usage: DISPLAY <filename>\n";
		return EXIT_FAILURE;
	}
	ifstream fin(argv[1]);
	if(!fin){
		cout << "Cannot open input file.\n";
		return EXIT_FAILURE;
	}

	char c;
	while(fin.get(c)){ // the 'fin.get(c)' will return 0 i
		cout << c;
		checkstatus(fin);
	}
	checkstatus(fin); // check final status
	fin.close();

	return EXIT_SUCCESS;
}

void checkstatus(ifstream& in){
	ios::iostate i;

	i = in.rdstate();
	if(i & ios::eofbit)
		cout << "EOF encountered\n";
	else if(i & ios::failbit)
		cout << "Non-Fatal I/O error\n";
	else if(i & ios::badbit)
		cout << "Fatal I/O error\n";
}



/*
	The preceeding program will always report at least one "error". After the 'while' loop ends, the final call to 'checkstatus()'
	reports, as expected, that an EOF has been encountered.

	This program displays the following when ran:

	$ ./Ch9_Sec6_Example1.exe readfile
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
	EOF encountered



*/
