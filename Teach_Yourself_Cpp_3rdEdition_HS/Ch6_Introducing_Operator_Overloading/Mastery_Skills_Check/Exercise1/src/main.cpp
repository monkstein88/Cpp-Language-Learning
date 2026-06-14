
/*
	Exercise 1.: Overload the '>>' and '<<' shift operator relative to the 'coord' ckass so that the following types of operatrions
	are allowed:

	ob << integer
	ob >> integer

	Make sure your operations shift the 'x' and 'y' values by the amount specified.
*/

#include <iostream>
#include <iomanip> // To be able to use manipulators that take keyword arguments (like 'setprecision' and 'setw') you need.
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <ctime>
using namespace std;

class coord{
	int x, y; // 2D coordinate values: 'x' - abcisa  , 'y' - ordenada
public:
	// Constructors
	coord();
	coord(int x_init, int y_init);
	// Overloading with member functions of:
	// 	- binary (arithmetic) operators
	coord& operator=(const coord& obj); // The assignment operator '=' can only be overloaded by a member function.
	coord& operator=(const int& i); // The assignment operator '=' can only be overloaded by a member function.
	// 	- relational and logic operators
	// ...
	// 	- unary operators
	coord& operator+(); // unary plus - N.B! When invoked this will change the sign of the coordinate value to positive. Does not need to assign the result to anything, it will intrinsically change its own object values.
	coord& operator-(); // unary minus -  N.B! When invoked this will change the sign of the coordinate value to negative. Does not need to assign the result to anything, it will intrinsically change its own object values.
	coord& operator++(); // unary pre-incrmement operator - '++x'
	coord& operator++(int notused); // unary post-increment operator - 'x++'
	coord& operator--(); // unary pre-decrement operator - '--x'
	coord& operator--(int notused); // unary post-decrement operator - 'x--'
	// Overloading with friend functions :
	// 	- binary (arithmetic) operators
	friend coord& operator+(coord ob1, coord ob2); // called when 'ob + ob', by their respective (corresponding) elements
	friend coord& operator+(coord ob1, int i); // called when 'ob + int'
	friend coord& operator+(int i, coord ob2); // called when 'int + ob'
	friend coord& operator-(coord ob1, coord ob2); // called when 'ob - ob'
	friend coord& operator-(coord ob1, int i); // called when 'ob - int'
	friend coord& operator-(int i, coord ob2); // called when 'int - ob'
	// 	- relational and logic operators
	friend coord& operator>>(coord& obj, int pos);
	friend coord& operator<<(coord& obj, int pos);

	// Utility functions:
	void set_xy(int x_set, int y_set); //
	void get_xy(int& x_get, int& y_get); //
};

// 'coord' - Constructors:
coord::coord(){

	x = 0;
	y = 0;
}
coord::coord(int x_init, int y_init){

	x = x_init;
	y = y_init;
}
// 'coord' - Overloading operators relative to 'coord' class:
coord& coord::operator=(const coord& obj){ // Don't use a reference '(coord& ob2)' for the argument list - it won't compile. It must be of 'const coord&' type to compile

	x = obj.x;
	y = obj.y;

	return *this;
}
coord& coord::operator=(const int& i){ // Don't use a reference '(int& i)' for the argument list - it won't compile. It must be of 'const int&' type to compile

	x = i;
	y = i;

	return *this;
}
// Overloading - with member functions - relational and logic operators
coord& operator>>(coord& obj, int pos){
	static coord temp;

	temp.x = obj.x >> pos;
	temp.y = obj.y >> pos;

	return temp;
}
coord& operator<<(coord& obj, int pos){
	static coord temp;

	temp.x = obj.x << pos;
	temp.y = obj.y << pos;

	return temp;
}


// Overloading - with member functions - for unary operators:
coord& coord::operator+(){ //

	x = (x < 0)? -x : x;
	y = (y < 0)? -y : y;

	return *this;
}
coord& coord::operator-(){ //

	x = ( x > 0)? -x : x;
	y = ( y > 0)? -y : y;

	return *this;
}
coord& coord::operator++(){

	x++;
	y++;

	return *this;
}
coord& coord::operator++(int notused){
	static coord temp;

	if(notused){exit(EXIT_FAILURE); } // By C++ specification, 'notused' is always supposed to be 0. It will not hold any other value in any case.
	// So use this for signalling some kind of a compiler bug/error. This statement is useless, but it stops compilation errors
	temp.x = x++;
	temp.y = y++;

	return temp;
}
coord& coord::operator--(){

	x--;
	y--;

	return *this;
}
coord& coord::operator--(int notused){
	static coord temp;

	if(notused){exit(EXIT_FAILURE); } // By C++ specification, 'notused' is always supposed to be 0. It will not hold any other value in any case.
	// So use this for signalling some kind of a compiler bug/error. This statement is useless, but it stops compilation errors
	temp.x = x--;
	temp.y = y--;

	return temp;
}

// Overload binary '+' by using a 'friend' function for 'ob + ob'
coord& operator+(coord ob1, coord ob2){
	static coord temp;

	temp.x = ob1.x + ob2.x;
	temp.y = ob1.y + ob2.y;

	return temp;
}
// Overload '+' for 'ob + int' scenario
coord& operator+(coord ob1, int i){
	static coord temp;

	temp.x = ob1.x + i;
	temp.y = ob1.y + i;

	return temp;
}
// Overload '+' for 'int + ob' scenario
coord& operator+(int i, coord ob2){
	static coord temp;

	temp.x = i + ob2.x;
	temp.y = i + ob2.y;

	return temp;
}
// Overload '-' using a friend function for 'ob - ob'
coord& operator-(coord ob1, coord ob2){
	static coord temp;

	temp.x = ob1.x - ob2.x;
	temp.y = ob1.y - ob2.y;

	return temp;
}
// Overload '-' using a friend function for 'ob - int'
coord& operator-(coord ob1, int i){
	static coord temp;

	temp.x = ob1.x - i;
	temp.y = ob1.y - i;

	return temp;
}
// Overload '-' using a friend function for 'int - ob'
coord& operator-(int i, coord ob2){
	static coord temp;

	temp.x = i - ob2.x;
	temp.y = i - ob2.y;

	return temp;
}

// 'coord' - Utility functions:
void coord::set_xy(int x_set, int y_set){

	x = x_set;
	y = y_set;
}
void coord::get_xy(int& x_get, int& y_get){

	x_get = x;
	y_get = y;
}



int main(){
	coord a1, a2(-4,5), a3(10,1);
	int x, y;

	a2.get_xy(x,y);
	cout << "(a2) X: " << x << ", Y: " << y << '\n';
	a1 = a2 << 1;
	a1.get_xy(x,y);
	cout << "(a2 << 1) X: " << x << ", Y: " << y << '\n';
	a1 = a2 >> 2;
	a1.get_xy(x,y);
	cout << "(a2 >> 2) X: " << x << ", Y: " << y << '\n';
	a1 = a2 >> 3;
	a1.get_xy(x,y);
	cout << "(a2 >> 3) X: " << x << ", Y: " << y << '\n';

	return EXIT_SUCCESS;
}
