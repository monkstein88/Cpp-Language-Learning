
/*
	Exercise 3.: On your own, experiment with the format flags and the format functions. Once you become familiar with the C++ I/O
	system, you will have no trouble using it to format output any way you like.
*/

#include <iostream>
#include <cmath>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	double i;

	//cout.setf(ios::right); // Make the result right justified. But it is right justified by default, so this statement could be
								  // omited
	cout.precision(5); // Make the precision to 5 decimal places
	cout << "         x|    log(x)|  log10(x)|\n";
	for(i=2; i<=100; i++){ // Remember that the field width setting is valied only for one 'cout' statement. So it needs to before
								  // each 'cout' call;
		cout.unsetf(ios::showpoint);
		cout.width(10);
		cout << (i);
		cout << "|";
		cout.setf(ios::showpoint);
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
