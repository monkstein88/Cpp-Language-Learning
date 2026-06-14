
/*
	Example 1.: This program allocates memory for an integer and initializes that memory:
*/

// An example of initializing a dynamic variable.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	int* p;

	p = new int(9); // give initial value of 9
	if(!p){
		cout << "Allocation error\n";
		return EXIT_FAILURE;
	}
	cout << "Here is integer at p: " << *p << "\n";
	delete p; // release memory

	return EXIT_SUCCESS;
}

/*
	As you should expect, this program displays the value 9, which is the initial value given
	to the memry pointed to by 'p'.
*/
