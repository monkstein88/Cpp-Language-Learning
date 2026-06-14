
/*
	Example 1.This program demonstrates several of the I/O manipulaotrs:
*/

#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){

	cout << hex << 100 << endl;
	cout << oct << 10 << endl;

	cout << setfill('X') << setw(10);
	cout << 100 << " hi " << endl;

	return EXIT_SUCCESS;
}

/*
	This program display the following:

	64
	12
	XXXXXXX144 hi

*/
