
/*
	Example 2.: To allow selected members to be modified by a 'const' member function, specify them as 'mutable'. Here's an example:
*/

// Demonstrate 'mutable'
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class Demo
{
	mutable int i;
	int j;
public:
	int geti() const
	{
		return i; // ok
	}

	void seti(int x) const
	{
		i = x; // now, OK.
	}
	/*
		This following function won't compile.
		void setj() const
		{
			j = x; // Still Wrong!
		}
	*/
};


int main()
{
	Demo ob;

	ob.seti(1900);
	cout << ob.geti();

	return EXIT_SUCCESS;
}

/*
	Here 'i' is specified as mutable, so it can be changed by the 'seti()' function. However, 'j' is not 'mutable', so 'setj()' is unable to
	modify its value.

	This program displays the following when ran:

	$ ./Ch13_Sec4_Example2.exe
	1900

*/
