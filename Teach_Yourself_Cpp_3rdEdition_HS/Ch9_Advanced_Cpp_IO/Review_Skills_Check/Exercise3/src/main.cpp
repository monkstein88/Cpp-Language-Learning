
/*
	Exercise 3.: Redo the preceeding program using I/O manipulators.
*/
#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;



int main(){

	cout << "The result of 10/3 = " << setprecision(3) << fixed << 10.0/3.0 << endl; // We need to use 'fixed' manipulator, so to state that we want
																					  // the precision to be a applied to the numbers after the decimal
																					  // point.

   return EXIT_SUCCESS;
}
