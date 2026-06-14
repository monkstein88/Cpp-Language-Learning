
/*
	Example 4.:'static' member functions have limited applications, but one good use for them is to "preinitilize" private 'static' data
	before any object is actually created. For example, this is a perfectly valid C++ program:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class static_func_demo
{
	static int i;
public:
	static void init(int x) { i = x; }
	void show() { cout << i; }
};

int static_func_demo::i; // define 'i'

int main(){
	// init 'static' data before object creation
	static_func_demo::init(100);

	static_func_demo x;
	x.show(); // displays 100

	return EXIT_SUCCESS;
}

/*
	Here 'i' is initialized by the call to 'init()' before an object of 'static_func_demo' exists.

	This program displays the following when ran:

	$ ./Ch13_Sec3_Example4.exe
	100


*/
