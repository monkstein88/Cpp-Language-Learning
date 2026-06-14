
/*
	Example 2.: The complement of a constructor is the destructor. This function is
	called when object is destroyed. For example, an object that allocates memory
	when it is created will want to free that memory when it is destroyed. The name
	of destructor is the name of its class, preceded by a ~.
	For example this class contains a destructor function:
*/

#include <iostream>
using namespace std;

class myclass{
	int a;
public:
	myclass(); // constructor
	~myclass(); // destructor
	void show();
};

myclass::myclass(){
	cout << "In constructor\n";
	a = 10;
}

myclass::~myclass(){
	cout << "Destructing...\n";
}

void myclass::show(){
	cout << a << "\n";
}

int main(){
	myclass ob;

	ob.show();

	return 0;
}

// A class's destructor is called when an object is destroyed.
// Local objects - are destroyed when they go out of scope.
// Global objects - are destroyed when the program ends.

// N.B! It is not possible to take the address of either a constructor or a destructor.

// NOTE: Technically, a constructor or a destructor can perform any type of
// operation. The code within these functions does not have to initialize or
// reset anything related to the class for which they are defined.
