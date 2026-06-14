
/*
	Example 4.: Another type of ambiguity is caused when you are overloading a function which one or more overloaded functions use
	a defaul argument. Consider this program:
*/

// Ambuguity based on default arguments plus overloading.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int f(int a){
	return a*a;
}

int f(int a, int b = 0){
	return a*b;
}

int main(){

	cout << f(10, 2); // calls 'f(int, int)'
	cout << f(10); // ambiguous - call 'f(int)' or 'f(int, int)'

	return EXIT_SUCCESS;
}

/*
	Here the call 'f(10, 2)' is perfectly acceptable, and unambiguous. However, the compiler has now way of knowing whether the
	call 'f(10)' is calling the first version of 'f()' or the second version with 'b' defaulting. 
*/
