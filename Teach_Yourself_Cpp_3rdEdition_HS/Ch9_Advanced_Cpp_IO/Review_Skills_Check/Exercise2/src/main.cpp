
/*
	Exercise 2.: Write a program that displays the outcome of 10/3 to three decimal places. Use 'ios' member functions to do this.
*/
#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;



int main(){

	cout << "The result of 10/3 = ";
	cout.precision(3);
	cout << fixed << 10.0/3.0 << endl; // We need to use 'fixed' manipulator, so to state that we want the precision to be a
													 // applied to the numbers after the decimal point.

   return EXIT_SUCCESS;
}
