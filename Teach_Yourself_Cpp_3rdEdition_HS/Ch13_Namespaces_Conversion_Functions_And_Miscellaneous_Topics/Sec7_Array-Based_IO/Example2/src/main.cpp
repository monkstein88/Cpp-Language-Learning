
/*
	Example 2.: Here is an example of array-based input:
*/

// An example using array-based input.
#include <iostream>
#include <strstream>
#include <cstdlib>
using namespace std;

int main()
{
	char buf[255] = "Hello 100 123.125 a";

	istrstream istr(buf); // open input array

	int i;
	char str[80];
	float f;
	char c;

	istr >> str >> i >> f >> c;

	cout << str << ' ' << i << ' ' << f;
	cout << ' ' << c << '\n';

	return EXIT_SUCCESS;
}


/*
	The program reads and then redisplays the values contained in the input array 'buf'.

	This program displays the following when ran:

	$ ./Ch13_Sec7_Example2.exe
	Hello 100 123.125 a


*/
