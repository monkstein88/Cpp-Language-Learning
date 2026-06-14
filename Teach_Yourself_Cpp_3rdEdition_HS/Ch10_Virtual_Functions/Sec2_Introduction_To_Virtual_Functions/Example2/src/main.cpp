
/*
	Example 2.: Virtual functions are hierarchical in order of inheritance. Further, when a derived class does 'not' override a
	virtual function, the function defined within its base class is used. For example, here is a slightly different version of the
	preceding program:
*/

// Virtual functions are hierarchical
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
		cout << "Using 'derived1' version of 'func()': ";
		cout << i*i << '\n';
	}
};

class derived2 : public base{
public:
	derived2(int x) : base(x) {}
	// 'derived2' does not override 'func()'
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
	p->func(); // use 'base's 'func()'

	return EXIT_SUCCESS;
}

/*

	This program displays the following output when ran:

	$ ./Ch10_Sec2_Example2.exe
	Using 'base' version of 'func()': 10
	Using 'derived1' version of 'func()': 100
	Using 'base' version of 'func()': 10

	In this version, 'derived2' does not override 'func()'. When 'p' is assigned 'd_ob2' and 'func()' is called, 'base's version
	is used because it is next up on the class hierarchy. In general, when a derived class does not override a virtual function,
	the 'base' class's version is used instead.
*/
