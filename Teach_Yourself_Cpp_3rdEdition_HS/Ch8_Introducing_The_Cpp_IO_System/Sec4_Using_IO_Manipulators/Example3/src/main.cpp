
/*
	Example 3.: One of the most interesting format flags added by the new I/O library is 'boolalpha'. This flag can be set either
	directly or by using the new manipulators 'boolalpha' or 'noboolalpha'. What makes 'boolalpha' so interesitng is that seeting
	it allows you to input and output boolean values using the keywords 'true' and 'false'. Normally you must enter '1' for true
	and '0' for false. For example, consider the following program:
*/

// Demonstrate 'boolalpha' format flag.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	bool b;

	cout << "Before setting boolalpha flag: ";
	b = true;
	cout << b << " ";
	b = false;
	cout << b << endl;

	cout << "After setting 'boolalpha' flag: ";
	b = true;
	cout << boolalpha << b << " ";
	b = false;
	cout << b << endl;

	cout << "Enter a Boolean value: ";
	cin >> boolalpha >> b; // you can enter 'true' or 'false'
	cout << "You entered: " << b << endl;

	return EXIT_SUCCESS;
}

/*
	Here is a sample run:

	Before setting boolalpha flag: 1 0
	After setting 'boolalpha' flag: true false
	Enter a Boolean value: true
	You entered: true

	As you can see, once the 'boolalpha' flag has been set, boolean values are input and output using the worlds 'true' and
	'false'. Keep in mind, that once 'boolalpha' is set for an input stream, only the keywords 'true' and 'false' will work and
	only they must be used when inputing any data of that sort, using '1' and '0' will not function properly. Also, notice that
	you must set the 'boolalpha' flags for 'cin' and 'cout' separately. As with all format flags, setting 'boolalpha' for one
	stream does not imply that itis also set for another.

*/
