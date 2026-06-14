
/*
	Exercise 2.: Overload the '+' operator for 'coord' class so that it is both a binary operator (as shown earlier) and a unary
	operator. When it is a used as a unary operator, have the '+' make any negative coordinate value positive.
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
	coord operator+(coord& ob2); 	// called when 'ob + ob', by their respective (corresponding) elements
	coord operator+(int i);				// called when 'ob + int'
	coord operator-(coord& ob2);		// called when 'ob - ob', by their respective (corresponding) elements
	coord operator-(int i);				// called when 'ob - int'
	coord operator*(coord& ob2);  	// called when 'ob * ob', by their respective (corresponding) elements
	coord operator*(int i); 			// called when 'ob * int'
	coord operator/(coord& ob2);		// called when 'ob / ob', by their respective (corresponding) elements
	coord operator/(int i);				// called when 'ob / int', by a (common) factor 'i'
	coord& operator=(const coord& ob2);		// called when 'ob = ob' , by their respective (corresponding) elements
	coord& operator=(const int& i); 			// called when 'ob = int' , by a (common) factor 'i'
	// Overloading - of relational and logic operators
	int operator==(coord ob2);
	int operator&&(coord ob2);
	int operator>(coord ob2);
	int operator<(coord ob2);
	// Overloading - of unary operators
	coord operator-() ; // unary minus
	coord operator+() ; // unary plus - N.B! When invoked this will change the sign of the coordinate value to positive.
	coord operator++(); // for pre-increment
	coord operator++(int notused); // for post-increment;
	coord operator--(); // for pre-decrement
	coord operator--(int notused); // for post-decrement
	// Member functions
	void get_xy(int& i, int& j){ i = x; j = y; }
};
// FOR BINARY (ARITHMETICAL) OPERATORS
// Overload '+' for 'ob + ob'
coord coord::operator+(coord& ob2){
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
// Overload '-' for 'ob - ob'
coord coord::operator-(coord& ob2){
	coord temp;

	temp.x = x - ob2.x;
	temp.y = y - ob2.y;

	return temp;
}
// Overload '-' for 'ob - int'
coord coord::operator-(int i){
	coord temp;

	temp.x = x - i;
	temp.y = y - i;

	return temp;
}
// Overload '*' for 'ob * ob'
coord coord::operator*(coord& ob2){
	coord temp;

	temp.x = x * ob2.x;
	temp.y = y * ob2.y;

	return temp;
}
// Overload '*' for 'ob * int'
coord coord::operator*(int i){
	coord temp;

	temp.x = x * i;
	temp.y = y * i;

	return temp;
}
// Overload '/' for 'ob / ob'
coord coord::operator/(coord& ob2){
	coord temp;

	temp.x = x / ob2.x;
	temp.y = y / ob2.y;

	return temp;
}
// Overload '/' for 'ob / int'
coord coord::operator/(int i){
	coord temp;

	temp.x = x / i;
	temp.y = y / i;

	return temp;
}
// Overload '=' for 'ob = ob'
coord& coord::operator=(const coord& ob2){ // Don't use a reference '(coord& ob2)' for the argument list - it won't compile. It must be of 'cosnt coord&' type to compile

	x = ob2.x;
	y = ob2.y;

	return *this; // return the object value that generated the call, with '*this', as a the reference
}
// Overload '=' for 'ob = int'
coord& coord::operator=(const int& i){

	x = i;
	y = i;

	return *this; // return the object value that generated the call, with '*this', as a the reference
}
// FOR RELATIONAL AND LOGIC OPERATORS
// Overload the '==' operator for 'coord'.
int coord::operator==(coord ob2){
	return (x == ob2.x) && (y == ob2.y);
}
// Overload the '&&' operator for 'coord'.
int coord::operator&&(coord ob2){
	return (x && ob2.x) && (y && ob2.y);
}
// Overload the '<' operator for 'coord'.
int coord::operator<(coord ob2){
	return (x < ob2.x) && (y < ob2.y);
}
// Overload the '>' operator for 'coord'.
int coord::operator>(coord ob2){
	return (x > ob2.x) && (y > ob2.y);
}
// FOR UNARY OPERATORS
// Overload unary '-' relative to 'coord' class
coord coord::operator-(){

	x = -x;
	y = -y;

	return *this;
}
// Overload unary '+' relative to 'coord' class - change the coordinate values to positive
coord coord::operator+(){

	x = (x < 0) ? -x : x;
	y = (y < 0) ? -y : y;

	return *this;
}
// Overload the '++' operator - for pre-incrment
coord coord::operator++(){

	x++;
	y++;

	return *this;
}
// Overload the '++' operator - for post-increment
coord coord::operator++(int notused){
	coord temp;

	if(notused){ exit(EXIT_FAILURE); } // By C++ specification, 'notused' is always supposed to be 0. It will not hold any other value in any case.
	// So use this for signalling some kind of a compiler bug/error. This statement is useless, but it stops compilation errors
	temp.x = x;
	temp.y = y;
	x++;
	y++;

	return temp;
}
// Overload the '--' operator - for pre-increment
coord coord::operator--(){

	x--;
	y--;

	return *this;
}
// Overload the '--' operator - for post-increment
coord coord::operator--(int notused){
	coord temp;

	if(notused){ exit(EXIT_FAILURE); } // By C++ specification, 'notused' is always supposed to be 0. It will not hold any other value in any case.
	// So use this for signalling some kind of a compiler bug/error. This statement is useless, but it stops compilation errors
	temp.x = x;
	temp.y = y;
	x--;
	y--;

	return temp;
}

int main(){
	coord o1(10, 10), o2(0, -10), o3(-1,-1), o4(-5,+10);
	int x, y;


	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	+o1; // try to make the 'o1' coordinate values positive, but the 'o1' coords are already
	o1.get_xy(x, y);
	cout << "+o1 X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	o2.get_xy(x, y);
	cout << "(o2) X: " << x << ", Y: " << y << "\n";
	+o2; // try to make the 'o2' coordinate values positive, only 'y' will change
	o2.get_xy(x, y);
	cout << "+o2 X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	o3.get_xy(x, y);
	cout << "(o3) X: " << x << ", Y: " << y << "\n";
	o4.get_xy(x, y);
	cout << "(o4) X: " << x << ", Y: " << y << "\n";
	o4 = o3 + o4;  // just sum them
	o4.get_xy(x, y);
	cout << "(o3 + o4) X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	o3.get_xy(x, y);
	cout << "(o3) X: " << x << ", Y: " << y << "\n";
	+o3;  // try to make the 'o3' coordinate values positive, both 'x' and 'y' will change
	o3.get_xy(x, y);
	cout << "+o3 X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	o4.get_xy(x, y);
	cout << "(o4) X: " << x << ", Y: " << y << "\n";
	o4 = +o4;  // try to make the 'o4' coordinate values positive, only 'x' will change. Also this call is also valid
	o4.get_xy(x, y);
	cout << "o4 = +o4; X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	return EXIT_SUCCESS;
}

/*
*/
