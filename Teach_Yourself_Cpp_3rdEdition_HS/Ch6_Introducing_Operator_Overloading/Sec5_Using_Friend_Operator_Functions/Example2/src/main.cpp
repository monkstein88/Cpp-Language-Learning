
/*
	Example 2.: Overloading an operator by using a friend provides one very important feature that member functions do not. Using a
	friend operator function, you can allow objects to be used in operations built-in type is on the left side of the operator. As
	you saw earlier in this chapter, it is possible to overload a binary member operator function such that the left operand is an
	object and the right operadn is a built-in type. But it is not possible to use a member function to allow the built-in type to
	occur on the left side of the operator. For example, assuming an ovelroad member operator function, the first statement shown
	here is legal; the second is not:

	ob1 =  ob2 + 10; // legal
	ob1 = 10 + ob2;  // illegal

	While it is possible to organize such statements like the first, always having to make sure that the object is on the left side
	of the operand and the built-in type on the right can be cumbersome restirction. The solution to this problem is to make the
	overloaded operator functions friends and define both possible situations.

	As you know, a friend operator function is explicitly passed 'both' operands. Thus, it is possible to define one overloaded
	friend function so that the left operand is an object and the right operand is the other type. Then you could overload the
	operator again with the left operand being the built-in type and the right operand being the object. The following program
	illustrates this method:
*/

// Overload the '==' and '&&' relative to coord class.
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
	friend coord operator+(coord ob1, int i);
	friend coord operator+(int i, coord ob2);
	// Ordinary member functions
	void get_xy(int& i, int& j){ i = x; j = y; }
};

// Overload '+' for 'ob + int' scenario
coord operator+(coord ob1, int i){
	coord temp;

	temp.x = ob1.x + i;
	temp.y = ob1.y + i;

	return temp;
}

// Overload '+' for 'int + ob' scenario
coord operator+(int i, coord ob2){
	coord temp;

	temp.x = i + ob2.x;
	temp.y = i + ob2.y;

	return temp;
}

int main(){
	coord o1(10,10);
	int x, y;

	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	o1 = o1 + 10; // object + integer
	o1.get_xy(x, y);
	cout << "(o1 + 10) X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	o1 = 99 + o1; // integer + object
	o1.get_xy(x, y);
	cout << "(99 + o1) X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	return EXIT_SUCCESS;
}

/*
	As a result of overloading friend operator functions for both situations, both of these statements are now valid:

	o1 = o1 + 10;
	o1 = 99 + o1;

*/
