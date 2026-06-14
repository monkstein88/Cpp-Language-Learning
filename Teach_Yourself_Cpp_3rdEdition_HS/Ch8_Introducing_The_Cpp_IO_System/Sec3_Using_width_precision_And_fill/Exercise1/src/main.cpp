
/*
	Exercise 1.: Create a program that prints the natural log and base 10 log of the numbers from 2 to 100. Format the table so
	that the numbers are right justified within a field width of 10, using a precision of five decimal places.
*/

#include <iostream>
#include <cmath>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	double i;

	cout.setf(ios::right); // Make the result right justified. But it is right justified by default, so this statement could be
								  // omited
	cout.precision(5); // Make the precision to 5 decimal places
	cout << "         x|    log(x)|  log10(x)|\n";
	for(i=2; i<=100; i++){ // Remember that the field width setting is valied only for one 'cout' statement. So it needs to before
								  // each 'cout' call;
		cout.width(10);
		cout << (i);
		cout << "|";
		cout.width(10);
		cout << log(i);
		cout << "|";
		cout.width(10);
		cout << log10(i);
		cout << "|\n";
	}
	return EXIT_SUCCESS;
}

/*

*/
