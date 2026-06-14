
/*
	Example 3.: If you want to use a friend operator function to overload either the '++' or '--' unary operator, you must pass the
	operand to the function as a reference parameter. This is because friend functions do not have 'this' pointers. Remember that
	the increment and decrement operators imply that the operand will be modified. However, if you overload these operators by using
	a friend that uses a value parameter, any modifications that occur to the paramater inside the friend operator function will not
	affect the object that generated the call. And since no pointer ot the object is passed implicitly (that is , there is no 'this'
	pointer) when a friend function is used, there is no way for the increment or decrement to affect  the operand.

	However, you pass the operand to the friend as a reference parameter, changes that occur inside the firend function affect the
	object that generates the call. For example, here is a program that overloads the '++' operator by using a friend function:
*/

// Overload the '-' realtive to 'coord' class
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
	friend coord operator+(coord ob1, int i);
	friend coord operator+(int i, coord ob2);
	friend coord operator++(coord& ob); // for the prefix form of '++'
	friend coord operator++(coord& ob, int notused); // for the postfix form of '++'
	// Ordinary member functions
	void get_xy(int& i, int& j){ i = x; j = y; }
};

// Overload binary '+' by using a 'friend' function for 'ob + ob'
coord operator+(coord ob1, coord ob2){
	coord temp;

	temp.x = ob1.x + ob2.x;
	temp.y = ob1.y + ob2.y;

	return temp;
}
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
// Overload '++' using a friend function - pre-increment case
coord operator++(coord& ob){ // use reference parameter
	ob.x++;
	ob.y++;

	return ob;
}

// Overload '++' using a friend function - post-increment case
coord operator++(coord& ob, int notused){
	coord temp;

	if(notused){ exit(EXIT_FAILURE); } // By C++ specification, 'notused' is always supposed to be 0. It will not hold any other value in any case.
	// So use this for signalling some kind of a compiler bug/error. This statement is useless, but it stops compilation errors
	temp.x = ob.x;
	temp.y = ob.y;
	ob.x++;
	ob.y++;

	return temp;
}


int main(){
	coord o1(10, 10), otemp;
	int x, y;

	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	otemp = ++o1; // pre-increment object
	cout << "otemp = ++o1;" << "\n";
	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	otemp.get_xy(x, y);
	cout << "(otemp) X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	otemp = o1++; // post-increment object
	cout << "otemp = o1++;" << "\n";
	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	otemp.get_xy(x, y);
	cout << "(otemp) X: " << x << ", Y: " << y << "\n";

	return EXIT_SUCCESS;
}

/*
	If you are using a modern compiler, you can also distinguish between the prefix and the postfix forms of the increment or
	decrement operators when using a friend operator funcftion in much the same way you did when using member functions. You simply
	add an integer parameter when defining the postfix version. For example, here are the prototypes for both the prefix and postfix
	versions of the increment operator relative to the 'coord' class:

	coord operator++(coord& ob); // prefix
	coord operator++(coord& ob, int notused); // postfix

	If the '++' precedes its operand, the 'operator++(coord& ob)' function is called. However, if the '++' follows its operand, the
	'operator++(coord& ob, int notused)' function is used. In this case, 'notused' will be passed the value 0.
*/
