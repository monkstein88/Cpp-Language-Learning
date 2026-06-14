
/*
	Example 2.: The automatic conversion from the type of a constructor's first argument into a call to the constructor itself has
	interesting implications. For example, assuming 'myclass' from Example 1, the following 'main()' function makes use of the converstion
	from 'int' and 'char *' to assign 'ob1' and 'ob2' new values.
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

	// use automatic conversions to assign new values
	ob1 = "1776"; // converts into 'ob1 = myclass("1776");'
	ob2 = 2001; // converts into 'ob2 = myclass(2001);'

	cout << "ob1: " << ob1.geta() << endl;
	cout << "ob2: " << ob2.geta() << endl;

	return EXIT_SUCCESS;
}

/*
	Since both constructors use different type arguments (as, of course, they must), each initialization statement is automatically
	converted into its equivalent constructor call.

	This program displays the following when ran:

	$ ./Ch13_Sec5_Example2
	ob1: 1776
	ob2: 2001


*/
