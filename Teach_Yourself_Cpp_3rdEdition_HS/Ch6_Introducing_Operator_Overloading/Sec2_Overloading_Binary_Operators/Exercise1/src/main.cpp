
/*
	Exercise 1.: Relative to 'coord', overload the '*' and '/' operators. Demonstrate that they work.

*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
	int x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(int x_set, int y_set){ x = x_set; y = y_set; }
	// Overloading - of binary operators
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
	void get_xy(int& x_get, int& y_get){ x_get = x; y_get = y; }
};

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


int main(){
	coord o1(10, 10), o2(5, 3), o3;
	int x, y;

	o1.get_xy(x,y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";
	o2.get_xy(x,y);
	cout << "(o1) X: " << x << ", Y: " << y << "\n";

	o3 = o1 + o2; // add two objects - calls 'operator+(coord)'
	o3.get_xy(x,y);
	cout << "(o1 + o2) X: " << x << ", Y: " << y << "\n";

	o3 = o1 + 100; // add two objects - calls 'operator+(coord)'
	o3.get_xy(x,y);
	cout << "(o1 + 100) X: " << x << ", Y: " << y << "\n";

	o3 = o1 * o2;
	o3.get_xy(x,y);
	cout << "(o1 * o2) X: " << x << ", Y: " << y << "\n";

	o3 = o1 * 100;
	o3.get_xy(x,y);
	cout << "(o1 * 100) X: " << x << ", Y: " << y << "\n";

	o3 = o1 / o2;
	o3.get_xy(x,y);
	cout << "(o1 / o2) X: " << x << ", Y: " << y << "\n";

	o3 = o1 / 100;
	o3.get_xy(x,y);
	cout << "(o1 / 100) X: " << x << ", Y: " << y << "\n";

	return EXIT_SUCCESS;
}

/*
	This outputs:

	(o1) X: 10, Y: 10
	(o1) X: 5, Y: 3
	(o1 + o2) X: 15, Y: 13
	(o1 + 100) X: 110, Y: 110
	(o1 * o2) X: 50, Y: 30
	(o1 * 100) X: 1000, Y: 1000
	(o1 / o2) X: 2, Y: 3
	(o1 / 100) X: 0, Y: 0

*/
