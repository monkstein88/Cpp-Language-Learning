
/*
	Example 3.: The following program illustrates the order in which constructor and destructor functions are called when derived
	class directly inherits multiple base classes:
*/

// Multiple Inherits
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class B1{
public:
	B1(){ cout << "Constructing B1\n"; }
	~B1(){ cout << "Destructing B1\n"; }
};

class B2{
public:
	B2(){ cout << "Constructing B2\n"; }
	~B2(){ cout << "Destructing B2\n"; }
};

// Inherit two base classes.
class D : public B1, public B2{
public:
	D(){ cout << "Constructing D\n"; }
	~D(){ cout << "Destructing D\n"; }
};

int main(){
	D ob;

	return EXIT_SUCCESS;
}

/*
	This program displays the following:

	Constructing B1
	Constructing B2
	Constructing D
	Destructing D
	Destructing B2
	Destructing B1

	As you learned, when multiple direct base classes are inherited, constructors are called in order, left to right, as speciefied
	in the inheritance list. Destructors are called in reverse order. 
*/
