
/*
	Example 1.: Here is a short base class and a derived class that inherits it (as public):
*/

// Overload the '+' relative to 'coord' class
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
	int x;
public:
	void setx(int n){ x = n; }
	void showx(){ cout << x << '\n'; }
};

// Inherit as public.
class derived : public base{
	int y;
public:
	void sety(int n){ y = n; }
	void showy(){ cout << y << '\n'; }
};


int main(){
	derived ob;

	ob.setx(10); // access member of base class
	ob.sety(20); // access member of derived class

	ob.showx(); // access member of base class
	ob.showy(); // access member of derived class

	return EXIT_SUCCESS;
}

/*
	As this program illustrates, because 'base' is inherited as public, the public members of 'base' - 'setx()' and 'showx()'
	become public members of 'derived' and are, therefore, accessible by any other part of the program. Specifically, they are
	legally called within 'main()'.
*/
