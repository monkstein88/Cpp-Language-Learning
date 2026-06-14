
/*
	Example 3.: It is possible to overload an operator relative to a class so that the operand on the right side is an object of an built-
	in type, such as integer, instead of the class for whicht the operator function is a member. For example, here the '+' operator is
	overloaded to add an integer value to a 'coord' object.
*/

// Overload the '+' for 'ob + int', and as well as 'ob + ob' (relative to 'coord' class)
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
	int x, y; // coordinate values
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int& i, int& j){ i = x; j = y; }
	// The object put on the right side of the operator when used in a statement, is the object that
	// be received by the paramater.
	// The object put on the left side of the operator when used in a statement, is the object that
	// generates the call to the operator function and is passed implicitly by 'this'.
	coord operator+(coord ob2); // 'ob + ob'
	coord operator+(int i); // 'ob + int'
};
// N.B! Because we're in the context (inside) the class definition itself here, 'operator+()' is declared inside the class definiton.
// 			We can direct access to the member variables or functions that are private: using 'x' or 'ob.x' are valid.

// Overload '+' relative to 'coord' class.
coord coord::operator+(coord ob2){
	coord temp;

	temp.x = x + ob2.x;
	temp.y = y + ob2.y;

	return temp;
}

// Overload '+' for 'ob + int'
coord coord::operator+(int i){
	coord temp;

	temp.x = x + i;
	temp.y = y + i;

	return temp;
}


// To clarify:
// 'x' and 'y' - refer to the object's members 'x' and 'y' respectively, which are to left of the operator.
// 'ob2.x' and 'ob2.y' - also refer (directly) to the objects' member 'x' and 'y' respectively, but the ones right of the operator.

int main(){
	coord o1(10, 10), o2(5, 3), o3;
	int x, y;

	o1.get_xy(x,y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	o2.get_xy(x,y);
	cout << "(o2) X: " << x << ", Y: " << y << "\n";

	o3 = o1 + o2; // add two objects - calls 'operator+(coord)'
	o3.get_xy(x,y);
	cout << "(o1 + o2) X: " << x << ", Y: " << y << "\n";

	o3 = o1 + 100; // add object + int - calls 'operator+(int)'
	o3.get_xy(x,y);
	cout << "(o1 + 100) X: " << x << ", Y: " << y << "\n";

	return EXIT_SUCCESS;
}

/*
	This program displays the following:

	(o1) X: 10, Y: 10
	(o2) X: 5, Y: 3
	(o1 + o2) X: 15, Y: 13
	(o1 + 100) X: 110, Y: 110

	It is important to remember that when you are overloading a member operator function so that an object can be used in an operation
	involving a built-in type, the built-in type must be on the right side of the operator. The reason for this is easy to understand:
	It is the object on the left that generates the call to the operator function. For instance, what happens when the compiler sees
	the following statement?
	
	o3 = 19 + o1; // 'int + ob'

	There is no built-in operation defined to handle the addition of an integer to an object. The overloaded 'operator+(int i)' function 
	works only when the object is on the left. Therefore, this statement  generates a compile-time error. (Soon you will see one way 
	this restriction.)

*/




