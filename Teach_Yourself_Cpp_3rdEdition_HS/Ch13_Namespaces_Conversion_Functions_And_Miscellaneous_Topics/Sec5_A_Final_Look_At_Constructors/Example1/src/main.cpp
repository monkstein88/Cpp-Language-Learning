
/*
	Example 1.: There can be more than one converting constructor in a class. For example, consider this variation of 'myclass':
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass
{
	int a;
public:
	myclass(int x) { a = x; }
	myclass(const char *str) { a = atoi(str); }
	int geta(){ return a; }
};

int main()
{
	myclass ob1 = 4; // converts to 'myclass(4)'
	myclass ob2 =  "123"; // converts to 'myclass("123")'

	cout << "ob1: " << ob1.geta() << endl;
	cout << "ob2: " << ob2.geta() << endl;

	return EXIT_SUCCESS;
}

/*
	Since both constructors use different type arguments (as, of course, they must), each initialization statement is automatically
	converted into its equivalent constructor call.

	This program displays the following when ran:

	$ ./Ch13_Sec5_Example1
	ob1: 4
	ob2: 123

*/
