
/*
	Example 1.: The following program demonstrates 'typeid'. It first obtains type information about one of C++'s built-in types, 'int'. It
	then displays the types of objects pointed to by 'p', which is a pointer of type 'BaseClass'.

	Note: The output differs from compiler to compiler. For GCC the output for int is i, for unsigned is j, for example. So, (GCC's) G++
	uses implementation-defined naming for the types, but it also offers the utility c++filt to make them human-readable:
	$ ./test | c++filt -t
*/

// An example that uses 'typeid()'
#include <iostream>
#include <typeinfo> // for 'typeid()' , 'type_info' and so on.
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class BaseClass{
	virtual void f() {} // make 'BaseClass' polymorphic
	// ...
};

class Derived1 : public BaseClass{
	// ...
};

class Derived2 : public BaseClass{
	// ...
};

int main(){
	int i;
	BaseClass *p, baseob;
	Derived1 ob1;
	Derived2 ob2;

	// First, display type name of a built-in type.
	cout << "Typeid of 'i' is ";
	cout << typeid(i).name() << endl;

	// Demonstrate 'typeid()' with polymorphic types.
	p = &baseob;
	cout << "'p' is pointing to an object of type ";
	cout << typeid(*p).name() << endl;

	p = &ob1;
	cout << "'p' is pointing to an object of type ";
	cout << typeid(*p).name() << endl;

	p = &ob2;
	cout << "'p' is pointing to an object of type ";
	cout << typeid(*p).name() << endl;


	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch12_Sec1_Example1.exe
	Typeid of 'i' is i
	'p' is pointing to an object of type 9BaseClass
	'p' is pointing to an object of type 8Derived1
	'p' is pointing to an object of type 8Derived2

	As explainedm when 'typeid' is applied to a base class pointer of a polymorphic type, the type of the object pointed to will be
	determined at run-time, as the output produced by the program shows. As an experiment, comment out the virtual funtion 'f()' in
	'BaseClass' and observe the results.

	When the statement:
	 virtual void f() {} // make 'BaseClass' polymorphic
	is commented out and then compiled, the program displays the following when ran:

	$ ./Ch12_Sec1_Example1.exe
	Typeid of 'i' is i
	'p' is pointing to an object of type 9BaseClass
	'p' is pointing to an object of type 9BaseClass
	'p' is pointing to an object of type 9BaseClass

*/
