
/*
	Example 2.: The following program shows how to use the C++ I/O format functions to create an aligned table of numbers:
*/

// Create a table of square roots and squares.
#include <iostream>
#include <cmath>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	double x;

	cout.precision(4);
	cout << "      x   sqrt(x)   x^2\n\n";
	for(x = 2.0; x <= 20.0 ; x++){
		cout.width(7);
		cout << x << " ";
		cout.width(7);
		cout << sqrt(x) << " ";
		cout.width(7);
		cout << x*x << '\n';
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
