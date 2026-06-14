
/*
	Example 1.: The purpose of declaring a member function as 'const' is to prevent it from modifying the object that invokes it. For
	example, consider the following program.
*/

// Demonstrate 'const' member functions. This program won't compile.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class Demo
{
	int i;
public:
	int geti() const
	{
		return i; //  ok
	}
	void seti(int x) const
	{
		i = x; // error!
	}
}



int main()
{
	Demo ob;

	ob.seti(1900);
	cout << ob.geti();

	return EXIT_SUCCESS;
}

/*
	This program will not compile because 'seti()' is declared as 'const'. This means that it is not allowed to modify the invoking object.
	Since it attempts to change 'i', the program is in error. In constract, since 'geti()' does not attempt to modify 'i', it is perfectly
	acceptable.

	This program displays the following when ran:

	(THIS PROGRAM DOES NOT COMPILE!)
*/
