
/*
	Example 1.: Here is a very short program that illustrates when base class and derived class constructor and destructor
	functions are executed:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
public:
	base(){ cout << "Constructing base class\n"; }
	~base(){ cout << "Destructing base class\n"; }
};

class derived : public base{
public:
	derived(){ cout << "Constructing derived class\n"; }
	~derived(){ cout << "Destructing derived class\n"; }
};

int main(){
	derived o;

	return EXIT_SUCCESS;
}

/*
	This program displays the following output:

	Constructing base class
	Constructing derived class
	Destructing derived class
	Destructing base class

	As you can see, the constructors are executed in order of derivation and the desturctors are executed in reverse order.
*/
