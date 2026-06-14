
/*
	Exercise 3.: Write a program that counts the number of words in a file. For simplicity, assume that anything surrounded by
	whitespace is a word.
*/

// Word count
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){
	int words=0;
	char word[80];

	if(argc != 2){
		cout << "Usage: WORD COUNT <input>" << endl;
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1]);
	if(!fin){
		cout << "Cannot open input file - " << argv[1] << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Displaying the contents of file - " << argv[1] << ":" << endl;
	fin.setf(ios::skipws); // This is already a default. But we need to be sure that the whitespaces are skiped, so they are read
								// and discarded from stream - they act as a delimeter for individual words
	while(!fin.eof()){
		fin >> word;
		if(!fin.eof()){
			if(strlen(word) >= 1)
				words++;
			cout << word << '\n';
		}
	}
	fin.close();

	cout << endl << "Total number of words: " << words << endl;

	return EXIT_SUCCESS;
}

/*
	The program displays the following, after executing it with './Ch9_Sec2_Example3.exe readfile' command:

	Displaying the contents of file - readfile:
	I
	wandered
	lonely
	as
	a
	cloud
	That
	floats
	on
	high
	o'er
	vales
	and
	hills,
	When
	all
	at
	once
	I
	saw
	a
	crowd,
	A
	host,
	of
	golden
	daffodils;
	Beside
	the
	lake,
	beneath
	the
	trees,
	Fluttering
	and
	dancing
	in
	the
	breeze.
	Continuous
	as
	the
	stars
	that
	shine
	And
	twinkle
	on
	the
	milky
	way,
	They
	stretched
	in
	never-ending
	line
	Along
	the
	margin
	of
	a
	bay:
	Ten
	thousand
	saw
	I
	at
	a
	glance,
	Tossing
	their
	heads
	in
	sprightly
	dance.
	The
	waves
	beside
	them
	danced;
	but
	they
	Out-did
	the
	sparkling
	waves
	in
	glee:
	A
	poet
	could
	not
	but
	be
	gay,
	In
	such
	a
	jocund
	company:
	I
	gazed—and
	gazed—but
	little
	thought
	What
	wealth
	the
	show
	to
	me
	had
	brought:
	For
	oft,
	when
	on
	my
	couch
	I
	lie
	In
	vacant
	or
	in
	pensive
	mood,
	They
	flash
	upon
	that
	inward
	eye
	Which
	is
	the
	bliss
	of
	solitude;
	And
	then
	my
	heart
	with
	pleasure
	fills,
	And
	dances
	with
	the
	daffodils.

	Total number of words: 151


	Official answer:

	// Word count
	#include <iostream>
	#include <fstream>
	#include <cctype>
	using namespace std;

	int main(int argc, char* argv[]){

		if(argc!=2){
			cout << "Usage: COUNT <input>\n";
			return 1;
		}

		ifstream in(argv[1]);

		if(!in){
			cout << "Cannot open input file.\n";
			return 1;
		}

		int count = 0;
		char ch;

		in >> ch; // find first non-space char

		// after first non-space found,  do not skip spaces
		in.unsetf(ios::skipws); // do not skip spaces

		while(!in.eof()){
			in >> ch;
			if(isspace(ch)){
				count++;
				while(issspace(ch) && !in.eof())
					in >> ch;
			}
		}
		cout << "Word count: " << count << '\n';

		in.close();

		return 0;
	}

*/
