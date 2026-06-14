
/*
	Example 1.: Here is an example that uses a virtual base class to prevent two copies of 'base' from being present in 'derived3'.
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
	derived3 ob;

	ob.i = 10; // unambiguous because only one copy present
	ob.j = 3;
	ob.k = 5;

	cout << "Product is " << ob.product() << '\n';

	return EXIT_SUCCESS;
}

/*
	If 'derived1' and 'derived2' had not inherited 'base' as virtual, the statement

	ob.i = 10;

	would have been amiguous and a compile-time error would have resulted. (See Exercise 1, below.)
*/
