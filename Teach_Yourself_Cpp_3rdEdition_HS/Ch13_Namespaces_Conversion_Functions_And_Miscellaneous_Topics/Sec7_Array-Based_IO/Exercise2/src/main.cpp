
/*
	Exercise 2.: Write an application that uses array-based to copy the contents of one array to another. (This is, of course, not the most
	efficient way to accomplish this task.)
*/

// A short example using array-based output
#include <iostream>
#include <strstream>
#include <cstdlib>
using namespace std;

int main()
{
	char arr1[255] = "Hello World! 01234567890\n";
	char arr2[255];
	char c;

	istrstream istr(arr1); // This is the source array, where we're going to copy from.
	ostrstream ostr(arr2, sizeof(arr2)); // This is the target arraye, to which we're going to copy to.

	while(!istr.eof())
	{
		istr.get(c);
		if(!istr.eof())
			ostr << c;
	}
	ostr << ends;

	cout << "Source array content: " << arr1;
	cout << "Copied array content: " << arr2;

	cout << endl;
	return EXIT_SUCCESS;
}


/*

	This program displays the following when ran:

	$ ./Ch13_Sec7_Exercise2.exe
	Source array content: Hello World! 01234567890
	Copied array content: Hello World! 01234567890



*/
