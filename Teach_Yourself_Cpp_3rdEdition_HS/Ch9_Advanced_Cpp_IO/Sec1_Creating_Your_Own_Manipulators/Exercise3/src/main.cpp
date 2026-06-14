
/*
	Exercise 3.: Create an input manipulator called 'skipchar()' that reads and ignores the next ten characters from the input
	stream.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

istream& skipchar(istream& stream){
	char c;

	for(int i=0; i<10; i++)
		stream >> c;

	return stream;
}

int main(){
	char char_str[80];

	cout << "Enter some characters: " << endl;
	cin >> skipchar >> char_str;
	cout << "You entered (skipping the initial 10): " << char_str << endl;

	return EXIT_SUCCESS;
}

/*
	My (old) version:

	istream& skipchar(istream& stream){
		char init_trim[11]; //

		stream >> init_trim;
		init_trim[11] = '\0';

		return stream;
	}

	int main(){
		char full_name[80];

		cout << "Enter your name: " << endl;
		cin >> skipchar >> full_name;
		cout << "Your name is: " << full_name;

		return EXIT_SUCCESS;
	}


	This program displays the following when ran:

	Enter some characters:
	0123456789ABCDEFGHI
	You entered: ABCDEFGHI

*/
