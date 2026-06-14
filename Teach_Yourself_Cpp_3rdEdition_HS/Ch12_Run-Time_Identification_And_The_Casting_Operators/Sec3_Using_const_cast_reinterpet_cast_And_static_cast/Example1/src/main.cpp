
/*
	Example 1.: The following program demonstrates the use of 'reinterpret_cast'
*/

// An example that uses 'reinterpret_cast'.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;


int main(){
	long long int i; // make this 64-bit variable, because the addresses on 64-bit machines/compilers (and thus their pointers) are going to
									 // be 64-bit
	const char *p = "This is a string";

	i = reinterpret_cast<long long int> (p); // cast pointer to integer


	return EXIT_SUCCESS;
}

/*
	Here 'reinterpret_cast' converts the pointer 'p' into an integer. This conversion represents a fundamental type change and is a good use
	of 'reinterpret_cast'.

	This program displays the following when ran:

	(Nothing is printed)
*/
