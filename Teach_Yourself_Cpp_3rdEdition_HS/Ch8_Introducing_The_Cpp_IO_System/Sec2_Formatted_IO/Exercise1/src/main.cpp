
/*
	Exercise 1.: Write a program that sets 'cout's flags so that integers displays a + sign when positive values are displaued.
	Demonstrate that you set the format flags correctly.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	ios::fmtflags fmt_default;

	fmt_default = cout.flags(); // Preserve/Store the default 'fmtflags' config for 'cout' stream

	cout << "Display an integer (with defaulf 'fmtflags'): " << -100 << ' ' << 100 << '\n';
	cout.setf(ios::showpos); // enable the explicit printing of the '+' sign.
	cout << "Display an integer (with 'showpos' enabled): " << -100 << ' ' << 100 << '\n';

	cout.flags(fmt_default); // Restore the 'cout's defaults

	return EXIT_SUCCESS;
}

/*

*/
