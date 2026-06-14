
/*
	Exercise 4.: Show how the save the format flags for 'cout' and how to restore them. Use either member functions or
	manipulators.
*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;



int main(){
	double val = 1000.5364;
	ios::fmtflags default_fmtflags;

	default_fmtflags = cout.flags(); // Save the 'default' for 'cout'

	// ... Do some different setting/configiration on 'cout', that alters its default (normal) state

	cout.flags(default_fmtflags); // Restore the 'default' for 'cout'

	return EXIT_SUCCESS;
}

/*
	

*/
