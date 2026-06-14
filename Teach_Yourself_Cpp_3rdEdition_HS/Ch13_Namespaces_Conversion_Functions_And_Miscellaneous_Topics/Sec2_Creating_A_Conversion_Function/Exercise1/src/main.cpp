
/*
	Exercise 1.: Using the 'strtype' class from Example 2, create a conversion that converts to type 'int'. In this conversion, return the
	length of the string held in 'str'. Illustrate that your conversion function works.
*/


#include <iostream>
#include <cstring> // for 'strlen()' and 'strcpy()'
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype
{
	char str[80];
	int len;
public:
	strtype(const char* s){ strcpy(str, s); len = strlen(s); }
	operator char *(){ return str; } // convert to 'char *'
	operator int(){ return len; } // conver to 'int'
};


int main()
{
	strtype s("This is a test");
	char *p;
	int l;

	p = s; // convert to 'char *'
	cout << "Here is a string: " << p << '\n';

	l = s; 	// convert to 'int' in assignment
	cout << "Length of string: " << l << endl;


	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch13_Sec2_Exercise1.exe
	Here is a string: This is a test
	Length of string: 14


*/
