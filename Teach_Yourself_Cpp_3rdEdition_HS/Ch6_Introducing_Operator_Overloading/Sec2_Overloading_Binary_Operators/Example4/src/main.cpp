
/*
	Example 4.: You can use a reference parameter in an operator function. For example, this is a perfectly acceptable way to overload
	the '+' operator relative to the 'coord' class:
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
	coord operator+(coord& ob2); // 'ob + ob'
	coord operator+(int i); // 'ob + int'
};
// N.B! Because we're in the context (inside) the class definition itself here, 'operator+()' is declared inside the class definiton.
// 			We can direct access to the member variables or functions that are private: using 'x' or 'ob.x' are valid.

// Overload '+' relative to 'coord' class using references.
coord coord::operator+(coord& ob2){
	coord temp;

	temp.x = x + ob2.x;
	temp.y = y + ob2.y;

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

	return EXIT_SUCCESS;
}

/*
	This program displays the following:

	(o1) X: 10, Y: 10
	(o2) X: 5, Y: 3
	(o1 + o2) X: 15, Y: 13

	One reason for using reference parameter in an operator function is efficiency. Passing objects as parameters to functions often
	incur a large amount of overhead and consumes a significant number of CPU cycles. However, passing the address of an object is
	always quick and efficient. If the operator is going to be used often, using a reference will generally improve performance
	significantly.

	Another reason for using reference parameter is to avoid the trouble caused when a copy of an operand is destroyed. As you know
	from previous chapters, when an argument is passed by value, a copy of that argument is made. If that object has a destructor
	function, when the function terminates, the copy's destructor is called. In some cases it is possible for the destructor to destroy
	something needed by the calling object. If this is the case, using a reference parameter instead of a value parameter is an easy
	(and efficient way) around the problem. Of course, you could also define a copy constructor that would prevent this problem in the
	general case.
*/
