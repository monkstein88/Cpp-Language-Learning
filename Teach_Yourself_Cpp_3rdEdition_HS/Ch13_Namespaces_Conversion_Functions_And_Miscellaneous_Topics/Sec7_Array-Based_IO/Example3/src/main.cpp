
/*
	Example 3.: Keep in mind that an input array, once linked to a stream, will appear the same as a file. For example, this program uses
	'get()' and the 'eof()' function to read the contents of 'buf'.
*/

// Demonstrate 'get()' and 'eof()' with array-based I/O.
#include <iostream>
#include <strstream>
#include <cstdlib>
using namespace std;

int main()
{
	char buf[255] = "Hello 100 123.125 a";
	char c;

	istrstream istr(buf); // open input array

	while(!istr.eof())
	{
		istr.get(c);
		if(!istr.eof())
			cout << c;
	}

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch13_Sec7_Example3.exe
	Hello 100 123.125 a


*/
