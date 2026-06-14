
/*
	Example 3.: As with other types of variables, the address of an objectcan be passed to a function so
	that the argument used in the call can be modified by the function. For example, the following version
	of the program in the preceding example does, indeed, modify the value of the object whose address is
	used in the call to sqr_it().
*/

/*
	Now that the address of an object is passed to sqr_it(), the function can modify the value of the argument
	whose address is used in the call.
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
	Set o.i to its square. This affects the calling argument.
*/
void sqr_it(samp* o){

	o->set_i(o->get_i() * o->get_i());

	cout << "By pointing to 'a', 'a' has 'i' value of " << o->get_i() << "\n";
}

int main(){
	samp a(10);

	sqr_it(&a); // pass the address of 'a' to sqr_it()

	cout << "Thus, 'a' in main() is changed: ";
	cout << a.get_i() << "\n"; // displays 100

	return EXIT_SUCCESS;
}

/*
	The output displayed by this program is:
	"By pointing to 'a', 'a' has 'i' value of  100
	 Thus, 'a' in main() is changed: 100"
*/
