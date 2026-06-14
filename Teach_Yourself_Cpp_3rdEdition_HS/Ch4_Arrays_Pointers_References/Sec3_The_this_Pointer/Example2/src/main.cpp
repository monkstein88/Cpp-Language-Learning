
/*
	Example 2.: However, there is an even more subtle explanation. When a member function is called,
	it is automatically passed a 'this' pointer to the object that invoked the call. Thus, the
	preceding program could be rewritten as shown here:
*/
#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class inventory{
	char item[20];
	double cost;
	int on_hand;
public:
	inventory(char* i, double c, int o){
		strcpy(this->item, i); // access members
		this->cost = c; // through the 'this'
		this->on_hand = o; // pointer
	}
	void show();
};

void inventory::show(){
	cout << this->item; // use this to access memmbers
	cout << " : $" << this->cost;
	cout << " On hand: " << this->on_hand << "\n";
}

int main(){
	inventory ob((char*) "wrench", 4.95, 4);

	ob.show();

	return EXIT_SUCCESS;
}

/*
	Here the member variables are accessed explicitly through the 'this' pointer. Thus, within
	'show()', these two statements are equivalent:

	cost = 123.23;
	this->cost = 123.23;

	In fact, the first form is, loosely speaking, a shorthand for the second.

	while no C++ programmer would use the 'this' pointer to acess a class member as just shown,
	because the shorthand form is much easier, it is important to understand what the shorthand
	implies.

	The 'this' pointer has several uses, including aiding in overloading operators. This will
	be detailed in Chapter 6. For now, the important thing to understand is that by default,
	all member functions are automatically passed a pointer to the invoking object.
*/
