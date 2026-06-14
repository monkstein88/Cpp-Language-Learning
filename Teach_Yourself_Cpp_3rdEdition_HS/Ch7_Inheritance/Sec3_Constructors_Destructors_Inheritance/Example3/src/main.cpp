
/*
	Example 3.: In  the following example, both the derived class and the base class constructors take arguments. In this specific
	case, both use the same argument, and the derived class simply passes along the argument to the base.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
	int i;
public:
	base(int n){
		cout << "Constructing base class\n";
		i = n;
	}
	~base(){ cout << "Destructing base class\n"; }
	void showi(){ cout << i << '\n'; }
};

class derived : public base{
	int j;
public:
	derived(int n) : base(n){// pass arg to base class
		cout << "Constructing derived class\n";
		j = n;
	}
	~derived(){ cout << "Destructing derived class\n"; }
	void showj(){ cout << j << '\n'; }
};

int main(){
	derived o(10);

	o.showi();
	o.showj();

	return EXIT_SUCCESS;
}

/*
	This program displays the following output:

	Constructing base class
	Constructing derived class
	10
	10
	Destructing derived class
	Destructing base class

	Pay special attention to the declaration of 'derived's constructor. Notice how the parameter 'n' (which receives the
	initialization argument) is both used by 'derived()' and passed to 'base()'.
*/
