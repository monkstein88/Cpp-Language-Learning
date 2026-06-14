
/*
	Exercise 1.: On your own, try the preceding example and experiment with it. For example, try to declare a derived pointer and
	having it access an object of the base class.
*/

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
	base* p_b; // pointer to base type
	derived* p_d; // pointer to derived
	base b_ob; // object of base
	derived d_ob; // object of derived

	// use 'p_b' to accesss base object
	p_b = &b_ob;
	p_b->setx(10); // access base object
	cout << "Base object x: " << p_b->getx() << '\n';

	// use 'p_b' to access derived object
	p_b = &d_ob; // point to derived object
	p_b->setx(99); // accesss derived object

	// can't use 'p_b' to set 'y', so assign the 'p_d' to the address of the derived object, to have access via pointer.
	p_d = &d_ob;
	p_d->sety(88);

	cout << "Derived object x: " << p_b->getx() << '\n';
	cout << "Derived object y: " << p_d->gety() << '\n';

	// Attempt to have derived pointer 'p_d' assigned the adress of the base class 'b_ob';
	p_d = &b_ob; // Error - this an invalid conversion

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	(this does not compile due to intentational error)



*/
