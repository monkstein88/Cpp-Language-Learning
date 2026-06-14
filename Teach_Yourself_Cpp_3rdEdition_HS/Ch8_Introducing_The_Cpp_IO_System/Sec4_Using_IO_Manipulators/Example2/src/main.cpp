
/*
	Example 2.: Here is another version of the program that displays a table of the squares and square roots of the numbers 2
	through 20. This version uses I/O manipulators instead of member functions and format flags.
*/

/*
	This version uses I/O manipulators to dispay the table of squares and square roots.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	double x;

	cout << setprecision(4); // Note this setting is going pertained to the 'cout' stream only and it is preserved
	cout << "      x   sqrt(x)   x^2\n\n";
	for(x = 2.0; x <= 20.0 ; x++){
		cout << setw(7) << x << " "; // Note that before each value printed, the field width needs to be specified
		cout << setw(7) << sqrt(x) << " "; // Note that before each value printed, the field width needs to be specified
		cout << setw(7) << x*x << endl; // Note that before each value printed, the field width needs to be specified
	}

	return EXIT_SUCCESS;
}

/*
	This program creates the following table:

	x   sqrt(x)   x^2

	2   1.414       4
	3   1.732       9
	4       2      16
	5   2.236      25
	6   2.449      36
	7   2.646      49
	8   2.828      64
	9       3      81
  10   3.162     100
  11   3.317     121
  12   3.464     144
  13   3.606     169
  14   3.742     196
  15   3.873     225
  16       4     256
  17   4.123     289
  18   4.243     324
  19   4.359     361
  20   4.472     400

*/
