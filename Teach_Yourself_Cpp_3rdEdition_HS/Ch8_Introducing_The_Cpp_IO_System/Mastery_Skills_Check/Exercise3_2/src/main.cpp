
/*
	Exercise 3.2: Rewrite your answer to Exercise 1 and 2 so that they use I/O manipulators.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;



int main(){
	double val = 1000.5364;
	ios::fmtflags default_fmtflags;

	default_fmtflags = cout.flags();

	cout << "Display val: " << setw(20) << left << setfill('*') << setprecision(2) << fixed << val << endl;

	cout.flags(default_fmtflags);

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	Display val: 1000.54*************


*/
