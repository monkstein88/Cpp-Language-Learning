
/*
	Example 1.: Here is a short example that shows how to open an array for output and write data to it:
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
	ostr << endl << ends;

	// show resultant stringstream
	cout << buf;

	return EXIT_SUCCESS;
}


/*

	This program displays the following when ran:

	$ ./Ch13_Sec7_Example1.exe
	Array-based I/O uses streams just like 'normal' I/O
	100 123.23
	64 1.232300e+02


	As you can see, the overloaded I/O operators, built-in I/O manipulators, member functions, and format flags are fully functional when
	you use array-based I/O. (This is also true of any manipulators or overloaded I/O operators you create relative to your own classes.)

	This program manually null-terminates the output array by using the 'ends' manipulator. Whether the array will be automatically null
	terminated or not is implementation dependent, so it is best to perform this manually if null termination is important to your
	application.
	
*/
