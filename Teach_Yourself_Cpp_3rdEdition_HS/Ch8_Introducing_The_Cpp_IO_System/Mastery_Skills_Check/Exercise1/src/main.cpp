
/*
	Exercise 1.: Write a program that displays the number 100 in decima, hexadecimal, and octal. (Use the 'ios' format flags.)
*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;



int main(){
	ios::fmtflags default_fmtlags;
	int num = 128;

	default_fmtlags = cout.flags(); // Get the current 'default' flags for the 'cout' stream - to preserve them
	cout << "'num' in decimal format: " << num << '\n';
	cout.unsetf(ios::dec); // (with GCC 8.1.0) We need to clear this flag first, ...
	cout.setf(ios::hex); // .. then enable the other flag.
	cout << "'num' in hexadecimal format: " << num << '\n';
	cout.unsetf(ios::hex); // (with GCC 8.1.0) We need to clear this flag first, ...
	cout.setf(ios::oct); // .. then enable the other flag.
	cout << "'num' in octal format: " << num << '\n';

	cout.flags(default_fmtlags); // Restore the default 'fmtflags' flags

	return EXIT_SUCCESS;
}

/*

*/
