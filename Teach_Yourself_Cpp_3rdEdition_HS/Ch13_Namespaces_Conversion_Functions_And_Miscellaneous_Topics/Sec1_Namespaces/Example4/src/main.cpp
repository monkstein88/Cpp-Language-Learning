
/*
	Example 4.: If you are using only a few names from the standard library, it might make more sense to specify a 'using' statement for
	each individually. The advantage to this approach is that you can still use those names without an 'std::' qualification but you will
	not be bringint the entire standard library into the global namespace. Here's an example:
*/

// Bring only a few names into the global namespace.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function

// gain access to 'cout', 'cin' and 'endl'.
using std::cin;
using std::cout;
using std::endl;

int main(){
	double val;

	cout << "Enter a number: ";
	cin >> val;
	cout << "This is your number: ";
	cout << val << endl;


	return EXIT_SUCCESS;
}

/*
	Here 'cin' , 'cout' and 'endl' can be used directly, but the resto fhte 'std' namespace has not been brought into view.

	This program displays the following when ran:

	$ ./Ch13_Sec1_Example4
	Enter a number: 144
	This is your number: 144

*/
