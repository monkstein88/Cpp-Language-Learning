
/*
	Example 1.: Here is a short example that uses a virtual function:
*/

// A simple example using a virtual function.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
public:
	int i;
	base(int x){ i = x; }
	virtual void func(){
		cout << "Using 'base' version of 'func()': ";
		cout << i << '\n';
	}
};

class derived1 : public base{
public:
	derived1(int x) : base(x) {}
	void func(){
		cout << "Using 'derived1's version of 'func()': ";
		cout << i*i << '\n';
	}
};

class derived2 : public base{
public:
	derived2(int x) : base(x) {}
	void func(){
		cout << "Using 'derived2's version of 'func()': ";
		cout << i*i*i << '\n';
	}
};

int main(){
	base* p;
	base ob(10);
	derived1 d_ob1(10);
	derived2 d_ob2(10);

	p = &ob;
	p->func(); // use 'base's 'func()'

	p = &d_ob1;
	p->func(); // use 'derived1's 'func()'

	p = &d_ob2;
	p->func(); // use 'derived2's 'func()'

	return EXIT_SUCCESS;
}

/*

	This program displays the following output when ran:

	$ ./Ch10_Sec2_Example1.exe
	Using 'base' version of 'func()': 10
	Using 'derived1's version of 'func()': 100
	Using 'derived2's version of 'func()': 1000

	The redifinition of a virtual function inside a derived class might, at first, seem somewhat similar to function overloading.
	However, the two processes are distinctly different. First, an overloaded function must differ in type and/or number of
	parameters, while a redefined virtual function must have precisely the same type and number of parameter and the same return
	type. (In fact, if you change either the number or type of parameters when redefining a virtual function, it simply becomes an
	overloaded function and its virtual nature is lost.) Further, virtual functions must be class members. This is not the case
	for overloaded functions. Also, while destructor functions can be virtual, constructors cannot.

	Because of the difference between overloaded functions and redefined virtual functions, the term 'overriding' is used to
	describe virtual function redefinition.

	As you can see, the example program creates three classes. The 'base' class defines the virtual function 'func()'. This class
	is then inherited by both 'derived1' and 'derived2'. Each of these classes overrides 'func()' with its individual
	implementation. Inside 'main()', the base class pointer 'p' is declared along with objects of type 'base', 'derived1', and
	'derived2'. First, 'p' is assigned the address of 'ob' (an object of type 'base'). When 'func()' is called by using '->' , it
	is the version in 'base' that is used. Next, 'p' is assigned the address 'd_ob1' and 'func()' is called again. Because it is
	the type of the object pointed to that determines which virtual function will be called, this time it is the overriden version
	in 'derived1' that is executed. Finally, 'p' is assigned the address of 'd_ob2' and 'func()' is called again, this time, it is
	the version of 'func()' defined inside 'derived2' that is executed.

	The key points to understand from the preceding example are that the type of the object being pointed to determines which
	version of an overriden virtual function will be executed when accessed via a base class pointer, and that this decision is
	made at run-time.
*/
