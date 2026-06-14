
/*
	Example 1.: Here is a program that contains an independent reference:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	int x;
	int &ref = x; // create an 'independent reference'

	x = 10; // these two statements ..
	ref = 10; // .. are funcitonally equivalent

	ref = 100;
	// this prints the number 100 twice
	cout << x << ' ' << ref << "\n";

	return EXIT_FAILURE;
}

/*
	In this program, the independnent reference 'ref' serves as a different name for 'x'. From a practical point
	of view, 'x' and 'ref' are equivalent.
*/
