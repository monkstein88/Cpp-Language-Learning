
/*
	Example 2.: The following version of the preceding program overloads the '-' and the '=' operators relative to 'coords' class.

*/

// Overload the '+', '-', and '=' relative to 'coord' class
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
	coord operator+(coord ob2); // Overloading the '+' binary operator.
	coord operator-(coord ob2); // Overloading the '-' binary operator.
	coord operator=(coord ob2); // Overloading the '=' binary operator.
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
// Overload '-' relative to 'coord' class
coord coord::operator-(coord ob2){
	coord temp;

	temp.x = x - ob2.x;
	temp.y = y - ob2.y;

	return temp;
}
// Overload '=' relative to 'coord' class
coord coord::operator=(coord ob2){

	x = ob2.x;
	y = ob2.y;

	return *this; // return the object that is assigned
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

	o3 = o1 + o2; // add two objects - this calls the overloading 'operator+', becauase the binary operator '+' is utilized (put) in context related to 'coord' object.
	o3.get_xy(x,y);
	cout << "(o1 + o2) X: " << x << ", Y: " << y << "\n";

	o3 = o1 - o2; // subract two objects
	o3.get_xy(x,y);
	cout << "(o1 - o2) X: " << x << ", Y: " << y << "\n";

	o3 = o1;
	o3.get_xy(x,y);
	cout << "(o3 = o1) X: " << x << ", Y: " << y << "\n";

	return EXIT_SUCCESS;
}

/*
	This program displays the following:

	(o1) X: 10, Y: 10
	(o2) X: 5, Y: 3
	(o1 + o2) X: 15, Y: 13
	(o1 - o2) X: 5, Y: 7
	(o3 = o1) X: 10, Y: 10

	The 'operator-()' functions is implemented similarly to 'operator+()'. However, the above example illustrates a crucial point when you
	are overloaidng an operator in which the order of the operands is important. When the 'operator+()' function was created, it did not
	matter which order the operands were in. (That is, A + B is the same as B + A.) However the subtraction operation is order dependent.
	Therefore, to subtract the operand on the right from the operand on the left. Because it is the left operand that generates the call
	to 'operator-()', the subtraction must be in this order:

	x - ob2.x;

	Remember: When a binary operator is overloaded, the left operand is passed implicitly to the function and the right operand is passed
	as an argument.

	Now look at the assignment operator function. The first thing you should notice that the left operand (that is, the object being
	assigned a value) is modified by the operation. This is in keeping with the normal meaning of assignment. The second thing to notice
	is that the function returns '*this'. That is, the 'operator=()' function returns the object that is being assigned to. The reason
	for this is to allow a series of assignments to be made. As you should know, in C++, the follwong type of statemnt is syntactically
	correct (And indeed very common).

	a = b = c = d = 0;

	By returning '*this' , the overloaded assignment operator allows objects of type 'coord' to be used in a similar fashion. For example,
	this is perfectly valid:

	o3 = o2 = o1;

	Keep in mind that there is no rule that requires an overloaded assignment function to return the object that receives the asignment.
	However, if you want the overloaded '=' to behave realtive to its class the way it does for the built-in types, it must return '*this'.
	
*/
