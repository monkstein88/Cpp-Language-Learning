
/*
	Example 1.: Here is a program that illustrates the format functions:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){

	cout.width(10); // set minumum field width
	cout << "hello" << '\n'; // right-justify by default

	cout.fill('%'); // set fill character
	cout.width(10); // set width
	cout << "hello" << '\n'; // right-justify default
	
	cout.setf(ios::left); // left-justify
	cout.width(10); // set wdith
 	cout << "hello" << '\n'; // output left justified

	cout.width(10); // set width
	cout.precision(10); // set 10 digits of precision
	cout << 123.234567 << '\n';

	cout.precision(6); // set 6 digits of precision
	cout << 123.234567 << '\n';

	return EXIT_SUCCESS;
}

/*
	This program displays the following output:

	     hello
	%%%%%hello
	hello%%%%%
	123.234567
	123.235

	Note that the field width is set before each output statement.
	In this compiler implementation (GCC 8.3.0 on Linux), field width (set with '*.width()'') is returned to its default after
	each output statement.
*/
