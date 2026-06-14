
/*
	Exercise 1.: Modify Example 1 so it displays the number of characters written to 'buf' prior to termination.
*/

// A short example using array-based output
#include <iostream>
#include <strstream>
#include <cstdlib>
using namespace std;

int main()
{
	char buf[255];

	ostrstream ostr(buf, sizeof buf); // open output array

	ostr << "Array-based I/O uses streams just like ";
	ostr << "'normal' I/O\n" << 100;
	ostr << ' ' << 123.23 << '\n';

	// you can use manipulators, too
	ostr << hex << 100 << ' ';
	// or format flags
	ostr.setf(ios::scientific);
	ostr << dec << 123.23;

	// show resultant stringstream
	ostr << endl << ends; // ensure the 'buf' is null-terminated;
	cout << buf;
	cout << "Number of characters written: " << ostr.pcount() << '\n'; // characters written to 'buf' before termination.

	return EXIT_SUCCESS;
}


/*

	This program displays the following when ran:

	$ ./Ch13_Sec7_Exercise1.exe
	Array-based I/O uses streams just like 'normal' I/O
	100 123.23
	64 1.232300e+02
	Number of characters written: 80


*/
