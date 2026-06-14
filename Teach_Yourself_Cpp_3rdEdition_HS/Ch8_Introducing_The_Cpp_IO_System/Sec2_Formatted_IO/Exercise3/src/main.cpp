
/*
	Exercise 3.: Write a program that saves the current state of the format flags, sets 'showbase' and 'hex', and displays the
	value 100. Then resets the flags to their previous values.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	ios::fmtflags fmt_default;

	fmt_default = cout.flags(); // Preserve/Store the default 'fmtflags' config for 'cout' stream

	cout << "Display floats (with default 'fmtflags'): " << -100 << ' ' << +100 << '\n';
	cout.unsetf(ios::dec); // This is not required for all compilers, but just for portability.
	cout.setf(ios::showbase | ios::hex);
	cout << "Display floats (with 'showbase' and 'hex' enabled): " << -100 << ' ' << +100 << '\n';

	cout.flags(fmt_default); // Restore the 'cout's defaults

	return EXIT_SUCCESS;
}

/*

*/
