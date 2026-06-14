
/*
	Example 1.: Here is a short program that illustrates how a base class pointer can be used to access a derived class:
*/

// Demonstrate pointer to derived class.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
	int x;
public:
	void setx(int i){ x = i; }
	int getx(){ return x; }
};

class derived : public base{
	int y;
public:
	void sety(int i){ y = i; }
	int gety(){ return y; }
};

int main(){
	base* p; // pointer to base type
	base b_ob; // object of base
	derived d_ob; // object of derived

	// use 'p' to accesss base object
	p = &b_ob;
	p->setx(10); // access base object
	cout << "Base object x: " << p->getx() << '\n';

	// use 'p' to access derived object
	p = &d_ob; // point to derived object
	p->setx(99); // accesss derived object

	// can't use 'p' to set 'y', so do it directly
	d_ob.sety(88);

	cout << "Derived object x: " << p->getx() << '\n';
	cout << "Derived object y: " << d_ob.gety() << '\n';

	return EXIT_SUCCESS;
}

/*
	Aside from illustrating pointers to derived classes, there is no value in using a base class pointer in the way shown in this
	example. However, in the next section you will see why base class pointers to derived objects are so important.

	This program displays the following when ran:

	$ ./Ch10_Sec1_Example1.exe
	Base object x: 10
	Derived object x: 99
	Derived object y: 88


*/
