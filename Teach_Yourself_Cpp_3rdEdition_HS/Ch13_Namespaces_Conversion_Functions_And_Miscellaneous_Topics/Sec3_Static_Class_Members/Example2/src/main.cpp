
/*
	Example 2.: Because a 'static' member variable exists before any object of that class is created, it can be accessed within a program
	independent of any object. For example, the following variation of the preceding program sets the value of 'i' to 100 without any
	reference to a specific object. Notice the use of the scope resolution operator and class name to access 'i'.
*/

// Use a 'static' member variable independent of any object.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass
{
public:
	static int i; // This has to be public, in order to be able to be accessed directly by just using the scope resolution operator
	void seti(int n){ i = n; }
	int geti(){ return i; }
};

int myclass::i;

int main(){
	myclass o1, o2;

	// set 'i' directly
	myclass::i = 100;

	cout << "o1.i: " << o1.geti() << '\n'; // displays 100
	cout << "o2.i: " << o2.geti() << '\n'; // also displays 100

	return EXIT_SUCCESS;
}

/*
	Because 'i' is set to 100, this program displays the following when ran:

	$ ./Ch13_Sec3_Example2.exe
	o1.i: 100
	o2.i: 100


*/
