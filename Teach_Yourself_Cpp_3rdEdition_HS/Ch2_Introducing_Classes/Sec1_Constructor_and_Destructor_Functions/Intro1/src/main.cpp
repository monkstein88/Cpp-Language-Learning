
/*
	Example 1.: There is a need for initialization for parts of your program some
	times. And this could be also valid for objects and your working with them. When
	applied to real problems, virtually every object you create will require some
	sort of initialization. To address this, C++ allows a constructor function to
	be included in a class declaration.

	A class's constructor is called each time an object of that class is created.
	Thus, any initialization that needs to be performed on an object can be done
	automatically by the constructor function.

	A constructor has the same name as the class of which it is a part and has no
	return type.  For example, here's a short class that contains a constructor.
*/

#include <iostream>
using namespace std;

class myclass{
	int a;
public:
	myclass(); // constructor - declaration (N.B! - Note that there is no return type)
	void show();
};

myclass::myclass(){ // constructor - definition (N.B! - Note that there is no return type)
	cout << "In constructor\n";
	a = 10;
}

void myclass::show(){
	cout << a;
}

int main(){
	myclass ob; // The constructor is called when the object is created.

	ob.show();

	return 0;
}

// It is important to understand that in C++ , a variable delcaration statment
// is an "action statement." - because an object might have a constructor (causing
// a number actions to occur)

// It is illegal in C++ for a constructor to have a return type.

// For global objects - the constructor is called once, when the program first
// begins it execution.
// For local objects  - the constructor is called each time the delaration statement
// executed
