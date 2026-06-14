
/*
	Exercise 3.: Using array-based I/O, write a program that converts a string that contains a floating-point value into its internal
	representation
*/

// A short example using array-based output
#include <iostream>
#include <strstream>
#include <cstdlib>
using namespace std;

int main()
{
	double f;
	char float_num[80] = "-3.1415926";

	istrstream istr(float_num);
	istr >> f;
	cout << "Value of 'f': " << f << endl;

	return EXIT_SUCCESS;
}


/*

	This program displays the following when ran:

	$ ./Ch13_Sec7_Exercise3.exe
	Value of 'f': -3.14159


*/
