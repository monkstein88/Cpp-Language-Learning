
/*
	Exercise 1.2.: On your own, experiment with the two example programs. Specifically, try creating an object by using 'area' from
	Example 1 and observe the error message. In Example 2, try removing the redefinition of 'func()' within 'derived2'. Confirm
	that, indeed, the version inside 'derived1' is used.
*/

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
	/* removing the redefinition of 'func()' within 'derived2'
	void func(){
		cout << "Using 'derived2's version of 'func()'\n";
	}
	*/
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

	This program displays the following output when ran:

	$ ./Ch10_Sec3_Exercise1_2.exe
	Using 'base' version of 'func()'
	Using 'derived1's version of 'func()'
	Using 'derived1's version of 'func()'

*/
