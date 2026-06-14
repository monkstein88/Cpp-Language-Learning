
/*
	Example 2.: Here is a program that uses the 'dbl_round()' function to round a 'double' value. The value to be
	rounded is passed by reference.
*/

#include <iostream>
#include <cmath>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void dbl_round(double& num);

int main(){
	double i = 100.4;

	cout << i << " rounded is ";
	dbl_round(i);
	cout << i << "\n";

	i = 10.9;
	cout << i << " rounded is ";
	dbl_round(i);
	cout << i << "\n";

	return EXIT_SUCCESS;
}

void dbl_round(double& num){
	double frac;
	double val;

	// decompose num into whole and fractional parts
	frac = modf(num, &val);

	if(frac < 0.5)
		num = val;
	else
		num = val + 1.0;
}

/*
	'dbl_round()' uses a relatively obscure standard library funtion called 'modf()' to decompose a number into
	its whole number and fractional parts. The fractional part is returned; the whole number is put into the
	variable pointed to by 'modf()'s second parameter.
*/
