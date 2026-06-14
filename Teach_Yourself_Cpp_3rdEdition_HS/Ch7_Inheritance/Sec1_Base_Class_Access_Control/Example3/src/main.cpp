
/*
	Example 3.: Here is a variation of the program shown in Example 1; this time 'derived' inherits 'base' as private. This change
	causes the program to be in error, as indicated in the comments.
*/

// This program contains an error.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
	int x;
public:
	void setx(int n){ x = n; }
	void showx(){ cout << x << '\n'; }
};

// Inherit base as private.
class derived: private base{
		int y;
public:
	void sety(int n){ y = n; }
	void showy(){ cout << y << '\n'; }
};


int main(){
	derived ob;

	ob.setx(10); // ERROR - now private to derived class
	ob.sety(20); // access member of derived class - OK

	ob.showx(); // ERROR - now private to derived class
	ob.showy(); // access member of derived class - OK

	return EXIT_SUCCESS;
}

/*
	As the comments in this (incorrect) program illustrate, both 'showx()' and 'setx()' become private to 'derived' and are not
	accessible outside of it.

	Keep in mind that 'showx()' and 'setx()' are still public within 'base' no matter how they are inherited by some derived class.
	This means that an object of type 'base' could access these functions anywhere. However, relative to objects of type 'derived',
	they become private. For example, given this fragment:

	base base_ob;

	base_ob.setx(1); // is legal because base_ob is of type base

	the call to 'setx()' legal because 'setx()' is public within 'base'.
*/
