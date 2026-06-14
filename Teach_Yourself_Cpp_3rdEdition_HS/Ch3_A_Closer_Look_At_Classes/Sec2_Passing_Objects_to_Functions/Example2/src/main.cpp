
/*
	Example 2.: As stated, the default method of parameter passing in C++, including objects, is by value.
	This means that a bitwise copy of the argument is made and it is  this copy that is used by the function.
	Therefore, changes to the object inside the function do not affect the calling object. This is illustrated
	by the following example:

*/

/*
	Remember, objects, like other parameters, are passed by value. Thus changes to the parameter inside a function
	have no effect on the object used in the call.
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class samp{
	int i;
public:
	samp(int n) { i = n; }
	void set_i(int n) { i = n; }
	int get_i() { return i; }
};

/*
	Set o.i to its square. This has no effect on the object used to call sqr_it(), however.
*/
void sqr_it(samp o){

	o.set_i(o.get_i() * o.get_i());

	cout << "Copy of 'a' has 'i' value of " << o.get_i() << "\n";
}

int main(){
	samp a(10);

	sqr_it(a); //  'a' passed by value

	cout << "But, 'a.i' is unchanged in main: ";
	cout << a.get_i() << "\n"; // displays 10

	return EXIT_SUCCESS;
}

/*
	The output displayed by this program is:
	"Copy of 'a' has 'i' value of 100
	 But, 'a.i' is unchanged in main: 10"
*/
