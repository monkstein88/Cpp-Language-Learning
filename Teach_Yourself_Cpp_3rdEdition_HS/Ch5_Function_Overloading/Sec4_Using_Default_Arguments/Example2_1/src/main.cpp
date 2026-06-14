
/*
	Example 2.1: To understand how default arguments are related to function overloading, first consider the next program, which
	overloads the function called 'rect_area()'. This function returns the area of a rectangle.
*/

// Compute area of a rectangle using overloaded functions.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// Return area of a non-square rectangle.
double rect_area(double length, double width){

	return length * width;
}

// return area of a square
double rect_area(double length){

	return length * length;
}

int main(){

	cout << "10 x 5.8 rectangle has area: ";
	cout << rect_area(10,5.8) << '\n';

	cout << "10 x 10 square has area: ";
	cout << rect_area(10) << '\n';

	return EXIT_SUCCESS;
}


/*
	In this program, 'rect_area()' is overloaded two ways. In the first way, both dimensions of a rectangle are passed to the
	function. This version is used when the rectangle is not square. However, when the rectangle is square, only one argument
	need to be specified, and the second version of 'rect_area()' is called.
*/
