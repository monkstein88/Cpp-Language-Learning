
/*
	Example 2.: In early version of C++, when an increment or decrement operator was overloaded, there was no way to determine
	whether an overloaded '++' or '--' preceded or followed its operand. That is, assuming the preceding program, these two
	statements would have been identical:

	o1++;
	++o1;

	However, the modern specification for C++ has defined a way by which the compiler can distinguish between these two statements.
	To accomplish tis, create two versions of the 'operator++()' function.
	The first is defined as shown in the preceding example:

	coord coord::operator++();

	The second is declared like this:

	coord coord::operator++(int notused);

	If the '++' operator precedes its operand, the 'operator++()' funcitons is called. However, if the '++' follows its operand,
	the 'operator++(int notused)' function is used. In this case, 'notused' will always be passed the value 0. Therefore, it the
	difference between prefix and postfix increment or decrement is important to your class object, you will need to implement
	both operator functions
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
	otemp = o1++;
	cout << "otemp = o1++;" << "\n";
	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	otemp.get_xy(x, y);
	cout << "(otemp) X: " << x << ", Y: " << y << "\n";

	return EXIT_SUCCESS;
}

/*


*/
