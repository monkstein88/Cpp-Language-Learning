
/*
	Example 1.: As you know, when you use '>>' to read a string, it stops reading when the first whitespace character is
	encountered. This makes it suseless for reading a string containg spaces. However, you can overcome this problem by using
	'getline()', as this program illustrates:
*/

// Use 'getline()' to read a string that contains spaces.
#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	char str[80];

	cout << "Enter your name: ";
	cin.getline(str, 79);

	cout << str << '\n';

	return EXIT_SUCCESS;
}

/*
	In this program, the delimeter used by 'getline()' is the newline. This makes 'getline()' act musch like the standard 'gets()'
	function (in C).

	This program displays the following when ran:

	$ ./Ch9_Sec4_Example1.exe
	Enter your name: Mark S. Grigorovich
	Mark S. Grigorovich


*/
