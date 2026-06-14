
/*
	Exercise 1.: Overload the '--' for 'coord' class. Create both its prefix and postfix.
*/

// Overload the -- relative to coord class.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord
{
	int x, y; // coordinate values
public:
	// Overload the '-' realtive to 'coord' class
	coord() { x=0; y=0; }
	coord(int i, int j) { x=i; y=j; }
	void get_xy(int &i, int &j) { i=x; j=y; }
	coord operator --(); // prefix
	coord operator --(int notused); // postfix
};
// Overload prefix -- for coord class.
coord coord::operator --(){
	x--;
	y--;
	return *this;
}
// Overload postfix -- for coord class.
coord coord::operator --(int notused){
	if(notused){ exit(EXIT_FAILURE); }
	x--;
	y--;
	return *this;
}

int main(){
	coord o1(10, 10), otemp;
	int x, y;

	// Check the pre-decrement '--' overloading
	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	otemp = --o1; // pre-increment object
	cout << "otemp = --o1;" << "\n";
	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	otemp.get_xy(x, y);
	cout << "(otemp) X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	// Check the post-decrement '--' overloading
	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	otemp = o1--;
	cout << "otemp = o1--;" << "\n";
	o1.get_xy(x, y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	otemp.get_xy(x, y);
	cout << "(otemp) X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	return EXIT_SUCCESS;
}

/*
*/
