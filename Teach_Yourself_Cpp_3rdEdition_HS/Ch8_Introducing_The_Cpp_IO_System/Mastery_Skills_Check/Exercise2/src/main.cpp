
/*
	Exercise 2.: Write a program that displays the value 1000.5364 in a 20-character field, left justified, with two decimal
	places, using * as a fill character. (Use the 'ios' format flags.)
*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;



int main(){
	double val = 1000.5364;
	ios::fmtflags default_fmtflags;

	default_fmtflags = cout.flags();

	cout << "Display val: "; // IMPORTANT: This (with just label information) needs to occurr, before the statement with the new
	// configuration for 'cout' happens, and not in the same instance/statement where the 'val' is printed.
	cout.width(20); // Set the field width in which the value to be placed
	cout.setf(ios::left); // Align the value , on the left side of the field width
	cout.fill('*'); // Set the '*' character to be the filling of empty spaces in the field width
	cout.precision(2); // Show places, after decimal point
	cout.setf(ios::fixed);  // Use normal floating point notation (not the scientific notation)
 	cout << val << endl; // This needs to be called separately, after the setup is made.

	cout.flags(default_fmtflags);

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	Display val: 1000.54*************


*/
