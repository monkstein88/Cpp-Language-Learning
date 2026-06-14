
/*
	Exercise 1.: What is wrong with the following program?
*/

// This program has an error.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void triple(double &num);

int main(){
	double d = 7.0;

	triple(&d); // This must not be '&d' , but just 'd' . There is no need of address of operator
	cout << d;

	return EXIT_SUCCESS;
}

	// Triple num's value.
	void triple(double &num){
		num = 3 * num;
	}

/*
	When triple() is called, the address of d is explicitly obtained with the & operator. This
	is neither necessary nor legal. When a reference parameter is used, the argument is not
	preceded by the &.
*/
