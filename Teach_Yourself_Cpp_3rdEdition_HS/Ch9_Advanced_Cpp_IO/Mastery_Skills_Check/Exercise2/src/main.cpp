
/*
	Exercise 2.: Create an input manipulator that reads and discards all non-alphabetical characters. When the first alphabetical
	character is read, have the manipulator return it to the input stream and return. Call this manipulator
	'findalpha'.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

istream& findalpha(istream& stream){
	char ch;

	while(stream.get(ch)){
		if(isalpha(ch)){
			stream.putback(ch);
			break;
		}
	}

	return stream;
}


int main(){
	char test_str[80] = " \t0123 Hello Champ!";

	cout << "Test 'findalpha' input manipulator, enter a string: ";
	cin >> findalpha >> test_str;
	cout << "The first alphabetical character is: " << test_str;

	return EXIT_SUCCESS;
}

/*
	This program displays the following output when ran:

	$ ./Ch9_Mastery_Skills_Check_Exercise2.exe
	Test 'findalpha' manipulator, enter a string:                   01234-421-2     Markov
	The first alphabetical character is: Markov

*/
