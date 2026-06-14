
/*
	Example 1.: Sometimes a short function will be included in a class declaration even though the auto-
	matic in-lining feature is of little or no value. Consider this class declaration:
*/

// Demonstrate in-lining a member function.
#include <iostream>
#include <cstdlib>
using namespace std;

class myclass{
	int i;
public:
	myclass(int n) { i = n; }
	void show() {cout << i; }
};

/*
	Here the function 'show()' is made into an in-line function atuomatically. However, as you should know, 
	I/O operations are (generally) so slow relative to CPU/memory operations that any effect of eliminating 
	the function call overhead is essentially lost. Even so, in C++ programs, it is still common to see small
	functions of this type declared within a class simply for the sake of convenience, and because no harm is
	caused.
*/