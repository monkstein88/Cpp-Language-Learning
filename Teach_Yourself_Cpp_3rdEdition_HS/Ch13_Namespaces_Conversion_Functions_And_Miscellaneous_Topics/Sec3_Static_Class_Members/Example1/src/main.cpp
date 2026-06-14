
/*
	Example 1.: Here is a simple example that uses a 'static' member variable:
*/

// A static member variable example.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass
{
	static int i;
public:
	void seti(int n){ i = n; }
	int geti(){ return i; }
};

// Definition of 'myclass::i'. 'i' is still private to myclass.
int myclass::i; // This must be declared, otherwise the code won't compile!!!

int main()
{
	myclass o1, o2;

	o1.seti(10);

	cout << "o1.i: " << o1.geti() << '\n'; // displays 10
	cout << "o2.i: " << o2.geti() << '\n'; // also displays 10

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch13_Sec3_Example1.exe
	o1.i: 10
	o2.i: 10

	Looking at this program you can see that only object 'o1' actually sets the value of 'static' member 'i'. However,  since 'i' is shared
	by both 'o1' and 'o2' (and, indeed, by any object of tyoe 'myclass'), both calls to 'geti()' display the same result.

	Notice how 'i' is declared within 'myclass' but defined outsie of the class. This second step ensures that storage for 'i' is defined.
	Technically, a class declaration is just that, only a declaration. No memory is actually set aside because of a declaration. Because a
	'static' data member 'implies' that memory is allocated for that member, a separate definition is required that causes storage to be
	allocated.
*/
