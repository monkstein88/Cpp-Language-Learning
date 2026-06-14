
/*
	Example 3.: The following program allocates an array of integers:
*/

// A simple example of 'new' and 'delete'
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	int* p;
	p = new int [5]; // allocate room for 5 integers

	// always make sure that allocation succeeded
	if(!p){
		cout << "Allocation error\n";
		return EXIT_FAILURE;
	}
	int i;

	for(i=0; i<5; i++)
		p[i] = i;
	for(i=0; i<5; i++){
		cout << "Here is integer at p[" << i << "]: ";
		cout << p[i] << "\n";
	}
	delete [] p;

	return EXIT_SUCCESS;
}

/*
	This progra displays the following:
	"Here is integer at p[0]: 0
	 Here is integer at p[1]: 1
	 Here is integer at p[2]: 2
	 Here is integer at p[3]: 3
	 Here is integer at p[4]: 4
	 "
*/
