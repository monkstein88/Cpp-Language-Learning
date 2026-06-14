
/*
	Exercise 2.: Write a program that sets 'cout's flags so that the decimal point is always shown when floating-point values are
	displayed. Also, display all floating-point values in scientific notation with an uppercase E.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	ios::fmtflags fmt_default;

	fmt_default = cout.flags(); // Preserve/Store the default 'fmtflags' config for 'cout' stream

	cout << "Display floats (with default 'fmtflags'): " << -100.00 << ' ' << +100.00 << ' ' << 0.0 << ' ' << 3.141592 << ' ' << '\n';
	cout.setf(ios::showpoint | ios::scientific | ios::uppercase);
	cout << "Display floats (with 'showbase' enabled): " << -100.00 << ' ' << +100.00 << ' ' << 0.0 << ' ' << 3.141592 << ' ' << '\n';

	cout.flags(fmt_default); // Restore the 'cout's defaults

	return EXIT_SUCCESS;
}

/*

*/
