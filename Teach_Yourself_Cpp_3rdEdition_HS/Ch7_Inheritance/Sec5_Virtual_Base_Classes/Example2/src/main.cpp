
/*
	Example 2.: It is important to understand that when a base class is inherited as virtual by a derived class, that base class
	still exists within that derived class. For example, assuming the preceding program, this fragment is perfectly valid:

	derived1 ob;
	ob.i = 100;
*/

// This program uses a virtual base class
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
public:
	int i;
};

// Inherit 'base' as virtual.
class derived1: virtual public base{
public:
	int j;
};

// Inherited 'base' as virtual.
class derived2 : virtual public base{
public:
	int k;
};

/*
	Here, 'derived3' inherits both 'derived1' and 'derived2'. However only one copy of base is present.
*/
class derived3 : public derived1 , public derived2{
public:
	int product(){ return i*j*k; }
};

int main(){
	derived1 ob1;
	
	ob1.i = 100;

	return EXIT_SUCCESS;
}

/*
	The only difference between a normal base class and a virtual one occurs when an object inherits the base more than once. If
	virtual base classes are used, only one base class is present in the object. Otherwise, multiple copies will be found.
*/
