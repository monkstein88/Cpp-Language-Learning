
/*
	Example 2.: As explained, when 'typeid()' is applied to a reference to a polymorphic base class, the type returned is that of the actual
	object being referred to. The circumstances in which you will often make use of this feature is when objects are passed to functions by
	reference. For example, in the following program, the function 'WhatType()' declares a reference parameter to objects of type
	'BaseClass'. This means that parameter to objects of type 'BaseClass'. This means that 'WhatType()' can be passed references to objects
	of type 'BaseClass' or any class derived from 'BaseClass'. When the 'typeid()' operator is applied to this parameter, it returns the
	actual type of the object being passed.

	Note: The output differs from compiler to compiler. For GCC the output for int is i, for unsigned is j, for example. So, (GCC's) G++
	uses implementation-defined naming for the types, but it also offers the utility c++filt to make them human-readable:
	$ ./test | c++filt -t
*/

// Use a reference with 'typeid()'
#include <iostream>
#include <typeinfo> // for 'typeid()', 'type_info' and so on.
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

// Demonstrate 'typeid()' with a reference parameter.
void WhatType(BaseClass& ob){
	cout << "'ob' is referencing an object of type ";
	cout << typeid(ob).name() << endl;
}


int main(){
	BaseClass baseob;
	Derived1 ob1;
	Derived2 ob2;

	WhatType(baseob);
	WhatType(ob1);
	WhatType(ob2);
	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch12_Sec1_Example2.exe | c++filt -t
	'ob' is referencing an object of type BaseClass
	'ob' is referencing an object of type Derived1
	'ob' is referencing an object of type Derived2

*/
