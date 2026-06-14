
/*
	Example 1.: Here is an example of a derived class that inherits a class derived from another class. Notice how areguments are
	passed along the chain from 'D2' to 'B1'.
*/

// Multiple Inherits
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class B1{
	int a;
public:
	B1(int x){ a = x; }
	int geta(){ return a; }
};

// Inherit direct base class.
class D1 : public B1{
	int b;
public:
	D1(int x, int y) : B1(y){ // pass 'y' to 'B1'
		b = x;
	}
	int getb(){ return b; }
};

// Inherit a derived class and an indirect base.
class D2 : public D1{
	int c;
public:
	D2(int x, int y, int z) : D1(y, z){ // pass args to 'D1'
		c = x;
	}
	/*
		Because bases inherited as public, 'D2' has access to public elements of both 'B1' and 'D1'.
	*/
	void show(){
		cout << geta() << ' ' << getb() << ' ' << c << '\n';
	}
};

int main(){
	D2 ob(1, 2, 3);

	ob.show();
	// 'geta()' and 'getb()' are still public here
	cout << ob.geta() << ' ' << ob.getb() << '\n';

	return EXIT_SUCCESS;
}

/*
	The call to 'ob.show()' displays '3 2 1'. In this example, 'B1' is an indirect base class of 'D2'. Notice that 'D2' has access
	to the public members of both 'D1' and 'B1'. As you should remember, when public members of a base class are inherited as
	public, they become public members of the derived class. Therefore, when 'D1' inherits 'B1', 'geta()' becomes a public member of
	'D1', which becomes a public member of 'D2'.

	As the program illustrates, each class in a class hierarchy must pass all arguments required by each preceding base class.
	Failure to do so will generate a compile-time error.

	The class hierarchy created in this program is illustrated here:

						B1
						^
						|
						|
						D1
						^
						|
						|
						D2

	Before we move on, a short discussion about how to draw C++-style inheritance graphs is in order. In the preceding graph notice
	that the arrows point up instead of down. Traditionally, C++ programmers usually draw inheritance charts as directed graphs in
	which the arrow points from the derived class to the base class. While newcomers sometimes find this approach counter-inuitive,
	it is nevertheless the way inheritance charts are usually depicted in C++.
*/
