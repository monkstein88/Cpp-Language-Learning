
/*
	Example 3.: As you know, the minus sign is both a binary and a unary operator in C++. You might be wondering how you can overload
	it so that it retains both of these uses realtive to a class that you create. The solution is actually quite easy: you simply
	overload it twice,  once as a binary operator and once as a unary operator. This program shows how:
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
	coord& operator=(int i); 			// called when 'ob = int' , by a (common) factor 'i'
	// Overloading - of relational and logic operators
	int operator==(coord ob2);
	int operator&&(coord ob2);
	int operator>(coord ob2);
	int operator<(coord ob2);
	// Overloading - of unary operators
	coord operator-() ; // unary minus
	coord operator+() ; // unary plus (though this does not make any sense, but just for consistency)
	coord operator++(); // for pre-increment
	coord operator++(int notused); // for post-increment;
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
coord& coord::operator=(int i){

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
// Overload unary '+' relative to 'coord' class
coord coord::operator+(){

	x = +x;
	y = +y;

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

	if(notused){exit(EXIT_FAILURE); } // By C++ specification, 'notused' is always supposed to be 0. It will not hold any other value in any case.
	// So use this for signalling some kind of a compiler bug/error. This statement is useless, but it stops compilation errors
	temp.x = x;
	temp.y = y;
	x++;
	y++;

	return temp;
}

int main(){
	coord o1(10, 10), o2(5, 7);
	int x, y;

	o1 = o1 - o2; // subtraction - utilizing '-' in binary operation
	o1.get_xy(x, y);
	cout << "(o1 - o2) X: " << x << ", Y: " << y << "\n";

	o1 = -o1 ; // negation - utilizing '-' in unary operation
	o1.get_xy(x, y);
	cout << "(-o1) X: " << x << ", Y: " << y << "\n";

	return EXIT_SUCCESS;
}

/*
	As you can see, when the minus is overloaded as a binary operator, it takes one parameter. When it is overloaded as a unary
	operator, it takes no parameter. This difference in the number of parameters is what makes it possible for the minus to be
	overloaded for both operations. As the program indicates, when the minus sign is used as a binary operator, the
	'operator-(coord ob2)' function is called. When it is used as a unary minus, the 'operator-()' function is called.

*/
