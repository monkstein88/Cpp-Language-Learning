
/*
	Example 2.: The following program illustrates how a function's virtual nature is preserved when it is inherited:
*/

// Virtual functions retain their virtual nature when inherited.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
public:
	virtual void func(){
		cout << "Using 'base' version of 'func()'\n";
	}
};

class derived1 : public base{
public:
	void func(){
		cout << "Using 'derived1's version of 'func()'\n";
	}
};

// derived2 inherits derived1.
class derived2 : public derived1{
public:
	void func(){
		cout << "Using 'derived2's version of 'func()'\n";
	}
};

int main(){
	base* p;
	base ob;
	derived1 d_ob1;
	derived2 d_ob2;

	p = &ob;
	p->func(); // use 'base's 'func()'

	p = &d_ob1;
	p->func(); // use 'derived1's 'func()'

	p = &d_ob2;
	p->func(); // use 'derived2's 'func()'

	return EXIT_SUCCESS;
}

/*
	In this program, the virtual function 'func()' is first inherited by 'derived1', which overrides it relative to itself. Next,
	'derived2' inherits 'derived1'. In 'derived2', 'func()' is a again overridden.

	Because virtual functions are hierarchical, if 'derived2' did not override 'func()', when 'd_ob2' was accessed, 'derived1's
	'func()' would have been used. If neither 'derived1' nor 'derived2' had overriden 'func()', all references to it would have
	been routed to the one defined in 'base'.

	This program displays the following output when ran:

	$ ./Ch10_Sec3_Example2.exe
	Using 'base' version of 'func()'
	Using 'derived1's version of 'func()'
	Using 'derived2's version of 'func()'
	

*/
