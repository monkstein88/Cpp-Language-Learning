
/*
	Example 2.: The following program illustrates the effect of the 'uppercase' flag. It first sets the 'uppercase', 'showbase'
	and 'hex' flags. It then outputs 99 in hexadecimal. In this case, the X used in the hexadecimal notation is uppercase. Next,
	it clears the 'uppercase' flag by using 'unsetf()' and again outputs 88 in hexadecimal. This time, the x is lowercase.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	ios::fmtflags default_fmtflags;
	default_fmtflags = cout.flags(); // Preserve/Store the default 'fmtflags' config for 'cout' stream

	cout.unsetf(ios::dec); // This is not required for all compilers, but just for portability.
	cout.setf(ios::uppercase | ios::showbase | ios::hex);

	cout << 99 << '\n';

	cout.unsetf(ios::uppercase);

	cout << 99 << '\n';

	cout.flags(default_fmtflags); // Restore the 'cout's default

	return EXIT_SUCCESS;
}

/*

*/
