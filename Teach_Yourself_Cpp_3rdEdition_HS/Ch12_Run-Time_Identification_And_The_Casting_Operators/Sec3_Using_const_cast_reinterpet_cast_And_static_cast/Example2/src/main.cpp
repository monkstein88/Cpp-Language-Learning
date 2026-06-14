
/*
	Example 2.: The following program demonstrates 'const_cast'.
*/

// An example that uses 'reinterpret_cast'.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void f(const int *p){
	int *v;

	// cast away 'const'-ness
	v = const_cast<int *> (p);

	*v = 100 ; // now, modify object through 'v'
}


int main(){
	int x = 99;

	cout << "'x' before call: " << x << endl;
	f(&x);
	cout << "'x' after call: " << x << endl;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	./Ch12_Sec3_Example2
	'x' before call: 99
	'x' after call: 100

	As you can see, 'x' was modified by 'f()' even though the parameter to 'f()' was specifiedas a 'const' pointer.

	It must be stressed that the use of 'const_cast' to cast way 'const'-ness is a potentially dangerous feature. Use it with care.

*/
