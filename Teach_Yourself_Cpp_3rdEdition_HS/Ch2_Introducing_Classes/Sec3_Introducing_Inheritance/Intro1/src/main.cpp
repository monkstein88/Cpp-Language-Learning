
/*
	Intro 1.:

	Although C++ inheritance is discussed more fully in Chapter 7, it needs to be
	introduced at this time. As it applies to C++, inheritance is the mechanism by
	which one class can inherit the properties of another. Inheritance allows a
	hierarchy of classes to be built, moving from the most general to the most
	specific.

	When one class is inherited by another, the class that is inherited is called
	the 'base class'. The inheriting class is called the 'derived' class.
	In  general, the process of inheritance begins with the definition of a base class.
	In essence, the 'base class' represents the most general description of a set of
	traits. A 'derived class' inherits those general traits and adds properties that
	are specific to that class.

	To understand how one class can inherit another, let's first begin
	with an example that, althought simple, illustrates many key features of inheritance.

	The base class defines all qualities that will be common to any derived classes -
	it represents the most general description of a set of traits.

	The derived class inherits those general traits and adds properties that are
	specific to that class

	The general form used to inherit a base class is shown here:
	class <derived_class_name> : <access_specifier> <base_class_name>
*/

#include <iostream>
#include <cstdlib>
using namespace std;

// To start, here is the declaration for the base class:
// Define 'base' class 'B'
class B{
	int i;
public:
	void set_i(int n);
	int get_i();
};

//  Using the above base class, here is a derived class that inherits it:
// Define 'derived' class 'D'.
class D: public B{ // ':' tells D will inherit all components of class B, the
									 // 'public' tells the compiler that B will be inherited such
									 // that all public elements of the base class will also be public
									 // elements of the derived class. However, all private elements
									 // of the base class remain private to it and are not directly
									 // accessible by the derived class.
	int j;
public:
	void set_j(int n);
	int mul();
};

// Set value 'i' in base
void B::set_i(int n){
	i = n;
}
// Return value of 'i' in base.
int B::get_i(){
	return (i);
}

// Set value of 'j' in derived.
void D::set_j(int n){
	j = n;
}
// Return value of base's 'i' time derived's 'j'.
int D::mul(){
	// derived class can call base  class public member functions
	return (j * get_i()); // get_i() is a public member of D now.
}

int main(){
	D ob;

	ob.set_i(10); // load 'i' in base
	ob.set_j(4); // load 'j' in derived

	cout << ob.mul() ; // displays 40

	return EXIT_SUCCESS;
}

// The reason that mul() must call get_i() instead of accessing 'i' directly is
// that the private members of a base class (in this case, 'i') remain private
// to it and not accessible by any derived class. The reason that private members
// of a class are not accessible to derived classes - is to maintain 'encapsulation'.
