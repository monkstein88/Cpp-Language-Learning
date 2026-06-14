
/*
	Exercise 1.1: Redo Exercise 1 from Section 8.3, this time using I/O manipulators instead of member functions and format flags.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	double i;

	 // Make the result right justified. But it is right justified by default, so this statement could be
								  // omited
	cout << right << setprecision(5); 	 // Make the result right justified. But it is right justified by default, so this
													 // statement could be omited
									  				 // Make the precision to 5 decimal places
	cout << "         x|    log(x)|  log10(x)|\n";
	for(i=2; i<=100; i++){ // Remember that the field width setting is valied only for one 'cout' statement. So it needs to before
								  // each 'cout' call;
		cout << setw(10) << (i) << "|";
		cout << setw(10) << log(i) << "|";
		cout << setw(10) << log10(i) << "|" << endl;
	}
	return EXIT_SUCCESS;
}

/*

*/
