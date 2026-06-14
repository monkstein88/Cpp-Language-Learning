
/*
	Example 1.: The following program overloads the '+' operator relative to the 'coord' class. This class is
	used to maintain X, Y coordinates.
*/

// Overload the '+' relative to 'coord' class
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
	int x, y; // coordinate values
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int& i, int& j){ i = x; j = y; }
	coord operator+(coord ob2); // Overloading the '+' binary operator.
															// The object put on the right side of the operator '+' when used in a statement, is the object that
															// be received by the paramater.
															// The object put on the left side of the operator '+' when used in a statement, is the object that
															// generates the call to the operator function and is passed implicitly by 'this'.
};

// Overload '+' relative to coord class.
// N.B! Because we're in the context (inside) the class definition itself here, 'operator+()' is declared inside the class definiton.
// 			We can direct access to the member variables or functions that are private: using 'x' or 'ob.x' are valid.
coord coord::operator+(coord ob2){
	coord temp;
	temp.x = x + ob2.x;
	temp.y = y + ob2.y;

	return temp;
}



int main(){
	coord o1(10, 10), o2(5, 3), o3;
	int x, y;

	o3 = o1 + o2; // add two objects - this calls the overloading 'operator+', becauase the binary operator '+' is utilized (put) in context related to 'coord' object.

	o1.get_xy(x,y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	o2.get_xy(x,y);
	cout << "(o2) X: " << x << ", Y: " << y << "\n";

	o3.get_xy(x,y);
	cout << "(o1+o2) X: " << x << ", Y: " << y << "\n";

	return EXIT_SUCCESS;
}

/*
	This program displays the following:
	"
	(o1) X: 10, Y: 10
	(o2) X: 5, Y: 3
	(o1+o2) X: 15, Y: 13
	"

	Let's look closely at this program. The 'operator+()' function returns an object of type 'coord' that has the sum of each operand's X
	coordinates in 'x' and the sum of the Y coordinates in 'y'. Notice that a temporary object is called 'temp' is used inside 'oprator+()'
	to hold the result, and it is this object that is returned. Notice also that neither operand is modified. The reason for 'temp' is
	easy to understand. In this situation (as in most), the '+' has been overloaded in a manner consistent with its normal arithmetic use
	Therefore, it was important that neither operand be changed. For example, when you add 10+4, the result is 14, but neither the 10 nor
	the 4 is modified. Thus, a temporary object is needed to hold the result.

	The reason that the 'operator+()' function returns an object of type 'coord' is that it allows the result of the addition of 'coord'
	objects to be used in larger expressions. For example, the statement

	o3 = o1 + o2;

	is valid only because the result of 'o1 + o2' is a 'coord' object that can be assigned to 'o3'. If a different type had been returned,
	this statement would have been invalid. Further, by returning a 'coord' object, the addition operator allows a string of additions. For
	example, this is a valid statement:

	o3 = o1 + o2 + o3;

	Although there will be situations in which you want an operator function to return something other than an object for which it is
	defined, most of the time operator functions that you create will return an object of their class. (The major exception to this rule
	when the relational and logical operators are overloaded. This situation is examined in Section 6.3, "Overloading the Relational and
	Logical Operators", later in this chapter.)

	One final point about this example. Because a 'coord' object is returned, the following statement is also perfectly valid:

	(o1+o3).get_xy(x, y);

	Here the temporary object returned by 'operator+()' is used directly. Of course, after this statement has executed, the temporary
	object is destroyed.
*/
