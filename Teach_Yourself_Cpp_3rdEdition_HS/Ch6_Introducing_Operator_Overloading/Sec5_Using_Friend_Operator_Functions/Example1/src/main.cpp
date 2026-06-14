
/*
	Example 1.: Here 'operator+()' is overloaded for the 'coord' class using a friend function:
*/

// Overload the '+' relative to 'coord' class using a friend function.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
	int x, y; // coordinate values
public:
	// Constructors
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	// Overloading - binary (arithmetical) operators
	friend coord operator+(coord ob1, coord ob2); // called when 'ob + ob', by their respective (corresponding) elements
	// Ordinary Member functions
	void get_xy(int& i, int&j){ i = x; j = y; }
};

// Overload binary '+' by using a 'friend' function
coord operator+(coord ob1, coord ob2){
	coord temp;

	temp.x = ob1.x + ob2.x;
	temp.y = ob1.y + ob2.y;

	return temp;
}


int main(){
	coord o1(10, 10), o2(5, 3), o3;
	int x, y;

	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	o2.get_xy(x, y);
	cout << "(o2) X: " << x << ", Y: " << y << "\n";
	o3 = o1 + o2; // add two objects - this calls 'operator+()'
	o3.get_xy(x, y);
	cout << "(o1 + o2) X: " << x << ", Y: " << y << "\n";

	return EXIT_SUCCESS;
}

/*
	Note that the left operand is passed to the first parameter and the right operand is passed to the second parameter.
*/
