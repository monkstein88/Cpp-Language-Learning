
/*
	Example 1.: Here is a simple example that uses an object pointer:

	You declare an object pointer just like you declare a pointer to any other variable.
	Specify its class name, and then precede the variable name with an asterisk '*'.
	To obtain the address of an object, precede the object with '&' operator, just
	as you do when taking the address of any other type of variable.

	Just like pointers to other pointer, when incremented, will point to the next
	object of its type.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class myclass{
	int a;
public:
	myclass(int x);
	int get();
};

myclass::myclass(int x){
	a = x;
}

int myclass::get(){
	return a;
}


int main(){
	myclass ob(120); // create object
	myclass *p; /// create pointer to object

	p = &ob;  // put address of 'ob' into 'p'

	cout << "Value using object: " << ob.get();
	cout << "\n";

	cout << "Value using pointer: " << p->get();

	return EXIT_SUCCESS;
}
