
/*
	Example 1.:As a short first example, this program allocates memory to hold an integer:
*/
#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;


int main(){
	int *p;
	p = new int; // allocate room for an integer
	if(!p){
		cout << "allocation error\n";
		return EXIT_FAILURE;
	}

	*p = 100;
	cout << "Here is integer at p: " << *p << "\n";

	delete p; // release memory

	return EXIT_SUCCESS;
}

/*
 	Notice that the value returned by 'new' is checked before it is used. As explained earlier, this check is
	meaningful only if your compiler implements 'new' is such a way that it returns null on failure.
*/
