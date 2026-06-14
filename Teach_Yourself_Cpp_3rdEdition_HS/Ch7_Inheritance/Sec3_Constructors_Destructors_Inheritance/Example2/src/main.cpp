
/*
	Example 2.: This program shows how to pass argument to a derived class's constructor:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
public:
		base(){ cout << "Constructing base class\n"; }
		~base(){ cout << "Destructing base class\n"; }
};

class derived : public base{
	int j;
public:
	derived(int n){
		cout << "Constructing derived class\n";
		j = n;
	}
	~derived(){ cout << "Destructing derived class\n"; }
	void showj(){ cout << j << '\n'; }
};

int main(){
	derived o(10);

	o.showj();

	return EXIT_SUCCESS;
}

/*
	This program displays the following output:

	Constructing base class
	Constructing derived class
	10
	Destructing derived class
	Destructing base class

	Notice that the argument is passed to the derived class's constructor in the normal fashion.
*/
