
/*
	Exercise 3.1: Rewrite your answer to Exercises 1 and 2 so that they use I/O manipulators
*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;



int main(){
	ios::fmtflags default_fmtlags;
	int num = 128;

	default_fmtlags = cout.flags(); // Get the current 'default' flags for the 'cout' stream - to preserve them
	cout << "'num' in decimal format: " << dec << num << '\n';
	cout << "'num' in hexadecimal format: " << hex << num << '\n';
	cout << "'num' in octal format: " << oct << num << '\n';

	cout.flags(default_fmtlags); // Restore the default 'fmtflags' flags

	return EXIT_SUCCESS;
}

/*

*/
