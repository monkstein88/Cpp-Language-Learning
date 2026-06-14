/*
	Example 3.: The following program shows how to use the 'new(nothrow)' alternative. It reworks the preceding program and forces an
	allocation failure.
*/

// Demonstrates the new 'new(nothrow)' alternative.
#include <iostream>
#include <new> // Include to have acces to exception 'bad_alloc' that 'new' throws when fails
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	double* p;

	// this will eventually run out of memory
	do{
		p = new(nothrow) double [100000];

		if(p)
			cout << "Allocation OK\n";
		else
			cout << "Allocation Error.\n";
	}while(p);

	return EXIT_SUCCESS;
}

/*
	As this program demonstrates, when you use the 'nothrow' approach, you must check the pointer returned by 'new' after each allocation
	request.

	This program displays the following when ran:

*/
