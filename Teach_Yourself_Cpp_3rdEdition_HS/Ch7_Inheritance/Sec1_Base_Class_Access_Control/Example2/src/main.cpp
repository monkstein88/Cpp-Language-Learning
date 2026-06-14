
/*
	Example 2.: It is important to understand that just because a derived class inherits a base as public, it does not mean that the
	derived class has access to the base's private members. For example, this addition to 'derived' from
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

// Inherit as public - this has an error!
class derived : public base{
	int y;
public:
	void sety(int n){ y = n; }
	void showy(){ cout << y << '\n'; }
	/*
		Cannot access private member of base class. 'x' is private member of base and not available within derived.
	*/
	void show_sum(){ cout << x+y << '\n'; }
};

int main(){

	return EXIT_SUCCESS;
}

/*
	In this example, the 'derived' class attempts to access 'x', which is a private member of 'base'. This is an error because the
	parts a base class remain private to it 'no matter how it is inherited'.
*/
