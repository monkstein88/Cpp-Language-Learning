
/*
	Example 2.2: If you think about it, it is clear that in this situation there is really no need to have two different functions.
	Instead, the second parameter can be defaulted to some value that acts as a flag to 'rect_area()'. When this value is seen by
	the function, it uses the 'length' parameter twice. Here is an example of this approach:
*/

// Compute are of a recangle using default arguments.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// REturn area fo rectangle.
double rect_area(double length, double width = 0){
	if(!width)
		width = length;
	return length * width;
}

int main(){

	cout << "10 x 5.8 rectangle has area: ";
	cout << rect_area(10.0, 5.8) << '\n';

	cout << "10 x 10 square has area: ";
	cout << rect_area(10.0) << '\n';

	return EXIT_SUCCESS;
}


/*
	Here 0 is the default value for 'width'. This value was chosen because no rectangle will have a width of 0. (Actually, a
	rectangle with a width of 0 is a line.) Thus, if this default value is seen, 'rect_area()' automatically uses the value in
	'length' for the value of 'width'.

	As this example shows, default arguments often provide a simple alternative to function overloading. (Of course, the are many
	situations in which function overloading is still required.)
*/
