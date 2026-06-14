
/*
	Example 2.: The following program illustrates what occurs when protected members are inherited as public:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
protected: // private to base
	int a, b; // but still accessible by derived
public:
	void setab(int n, int m){ a = n; b = m; }
};

class derived : public base{
	int c;
public:
	void setc(int n){ c = n; }

	// this function has access to 'a' and 'b' from base
	void showabc(){
		cout << a << ' ' << b << ' ' << c << '\n';
	}
};

int main(){
	derived ob;

	/*
		'a' and 'b' are not accesible here becaue they are private to both base and derived.
		Performing a an action with 'ob.a' or 'ob.b' is not possible.
	*/
	ob.setab(1, 2); // but, 'setab()' is accessible here.
	ob.setc(3);

	ob.showabc();

	return EXIT_SUCCESS;
}

/*
	Because 'a' and 'b' are protected in 'base' and inherited as public by 'derived', they are available for use by member functions
	of 'derived'. However, outside of these two classes, 'a' and 'b' are effectively private and inaccessible.
*/
