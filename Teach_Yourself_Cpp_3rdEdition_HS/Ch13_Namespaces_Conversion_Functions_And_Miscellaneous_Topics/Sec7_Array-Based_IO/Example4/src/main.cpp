
/*
	Example 4.:This program performs input and output on an array:
*/

// Demonstrate an input/output array
#include <iostream>
#include <strstream>
#include <cstdlib>
using namespace std;

int main()
{
	char iobuf[255];

	strstream iostr(iobuf, sizeof iobuf);

	iostr << "This is a test\n";
	iostr << 100 << hex << ' ' << 100 << ends;

	char str[80];
	int i;

	iostr.getline(str, 79); // read the string up to '\n'
	iostr >> dec >> i; // read 100

	cout << str << ' ' << i << ' ';

	iostr >> hex >> i;

	cout << hex << i;

	return EXIT_SUCCESS;
}


/*
	The program first writes output to 'iobuf'. It then reads it back. It first reads the entire line "This is a test" using the 'getline()'
	function. It then reads the decimal value 100 and the hexadecimal value 0x64.

	This program displays the following when ran:

	$ ./Ch13_Sec7_Example4.exe
	This is a test 100 64

*/
