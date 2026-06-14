
/*
	Example 2.: Here is reworked version of the preceidng program, in which a derived class directly inherits two base classes:
*/

// Multiple Inherits
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// Create first base class.
class B1{
	int a;
public:
	B1(int x){ a = x; }
	int geta(){ return a;}
};
// Create secodn base class.
class B2{
	int b;
public:
	B2(int x){ b = x; }
	int getb(){ return b; }
};

// Directly inherit two base classes.
class D1 : public B1, public B2{
	int c;
public:
	// here 'z' and 'y' are passed  to 'B1' and 'B2', respectively
	D1(int x, int y, int z) : B1(z), B2(y){
		c = x;
	}

	/*
		Because bases inherited as public. 'D' has access to public elements of  both 'B1' and 'B2'.
	*/
	void show(){
		cout << geta() << ' ' << getb() << ' ' << c;
		cout << '\n';
	}
};


int main(){
	D1 ob(1, 2, 3);

	ob.show();

	return EXIT_SUCCESS;
}

/*
	In this version, the argument to 'B1' and 'B2' are passed individually to these classes by 'D'. This program creates a class
	that looks like this:

	B1										B2
	 ^										^
	 |--------------------|
	 						|
							|
							D1
*/
