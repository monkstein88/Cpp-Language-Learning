
/*
	Exercise 1.: Rewrtite the program in Example 1 so it uses 'get()' instead of 'getline()'. Does the program function differently?
*/

// Use 'get()' to read a string that contains spaces.
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	char str[80];

	cout << "Enter your name: ";
	cin.get(str, 79);

	cout << str << '\n';

	return EXIT_SUCCESS;
}

/*
	My answer:
		- No there isn't visible change in behaviour. It seems to operate the same

	This program displays the following when ran:

	$ ./Ch9_Sec4_Exercise1.exe
	Enter your name: Mark S. Grigorovich
	Mark S. Grigorovich


*/
