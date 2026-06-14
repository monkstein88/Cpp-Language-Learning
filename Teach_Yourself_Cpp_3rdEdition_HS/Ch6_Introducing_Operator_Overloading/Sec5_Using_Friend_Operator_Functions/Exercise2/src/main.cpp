
/*
	Exercise 2.: Overload the 'coord' class so it can use 'coord' objects in operations in which and integer value can be multiplied
	by each coordinate. Allow the operation to use either order: 'ob * int' or 'int * ob'.
*/

// Overload the '*' realtive to 'coord' class
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
	friend coord operator+(coord ob1, int i); // called when 'ob + int'
	friend coord operator+(int i, coord ob2); // called when 'int + ob'
	friend coord operator+(coord& ob); // This for a unary '+' , which make (force) all coordinate components to be positive values
	friend coord operator++(coord& ob); // for the prefix form of '++'
	friend coord operator++(coord& ob, int notused); // for the postfix form of '++'
	friend coord operator-(coord ob1, coord ob2); // called when 'ob - ob'
	friend coord operator-(coord ob1, int i); // called when 'ob - int'
	friend coord operator-(int i, coord ob2); // called when 'int - ob'
	friend coord operator-(coord& ob); // This for a unary '-' , which make (force) all coordinate components to be negative values
	friend coord operator/(coord ob1, coord ob2); // called when 'ob / ob'
	friend coord operator/(coord ob1, int i); // called when 'ob / int'
	friend coord operator/(int i, coord ob2); // called when 'int / ob'
	friend coord operator*(coord ob1, coord ob2); // called when 'ob * ob'
	friend coord operator*(coord ob1, int i); // called when 'ob * int'
	friend coord operator*(int i, coord ob2); // called when 'int * ob'
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
// Overload the unary '+' using a friend function - force coordinates to be positive
coord operator+(coord& ob){ // it's necessary to use reference parameter for unary operations
	ob.x = (ob.x < 0)? -ob.x : ob.x;
	ob.y = (ob.y < 0)? -ob.y : ob.y;

	return ob;
}
// Overload '++' using a friend function - pre-increment case
coord operator++(coord& ob){ // it's necessary to use reference parameter for unary operations
	ob.x++;
	ob.y++;

	return ob;
}
// Overload '++' using a friend function - post-increment case
coord operator++(coord& ob, int notused){ // it's necessary to use reference parameter for unary operations
	coord temp;

	if(notused){ exit(EXIT_FAILURE); } // By C++ specification, 'notused' is always supposed to be 0. It will not hold any other value in any case.
	// So use this for signalling some kind of a compiler bug/error. This statement is useless, but it stops compilation errors
	temp.x = ob.x;
	temp.y = ob.y;
	ob.x++;
	ob.y++;

	return temp;
}
// Overload '-' using a friend function for 'ob - ob'
coord operator-(coord ob1, coord ob2){
	coord temp;

	temp.x = ob1.x - ob2.x;
	temp.y = ob1.y - ob2.y;

	return temp;
}
// Overload '-' using a friend function for 'ob - int'
coord operator-(coord ob1, int i){
	coord temp;

	temp.x = ob1.x - i;
	temp.y = ob1.y - i;

	return temp;
}
// Overload '-' using a friend function for 'int - ob'
coord operator-(int i, coord ob2){
	coord temp;

	temp.x = i - ob2.x;
	temp.y = i - ob2.y;

	return temp;
}
// Overload the unary '-' using a friend function - force coordinates to be negative
coord operator-(coord& ob){ // it's necessary to use reference parameter for unary operations

	ob.x = (ob.x > 0)? -ob.x : ob.x;
	ob.y = (ob.y > 0)? -ob.y : ob.y;

	return ob;
}
// Overload '/' using a friend function for 'ob / ob'
coord operator/(coord ob1, coord ob2){
	coord temp;

	if(ob2.x)
		temp.x = ob1.x/ob2.x;
	else{
		cout << "\nError: Divisor (ob2.x) is 0, cannot dividy by 0!\n";
		exit(EXIT_FAILURE);
	}
	if(ob2.y)
		temp.y = ob1.y/ob2.y;
	else{
		cout << "\nError: Divisor (ob2.y) is 0, cannot dividy by 0!\n";
		exit(EXIT_FAILURE);
	}

	return temp;
}
// Overload '/' using a friend function for 'ob / int'
coord operator/(coord ob1, int i){
	coord temp;

	if(i){
		temp.x = ob1.x / i;
		temp.y = ob1.y / i;
	}else{
		cout << "\nError: Divisor (i) is 0, cannot dividy by 0!\n";
		exit(EXIT_FAILURE);
	}

	return temp;
}
// Overload '/' using a friend function for 'int / ob'
coord operator/(int i, coord ob2){
	coord temp;

	if(ob2.x)
		temp.x = i/ob2.x;
	else{
		cout << "\nError: Divisor (ob2.x) is 0, cannot dividy by 0!\n";
		exit(EXIT_FAILURE);
	}
	if(ob2.y)
		temp.y = i/ob2.y;
	else{
		cout << "\nError: Divisor (ob2.y) is 0, cannot dividy by 0!\n";
		exit(EXIT_FAILURE);
	}

	return temp;
}
// OVerload '*' using a friend function for 'ob * ob'
coord operator*(coord ob1, coord ob2){
	coord temp;

	temp.x = ob1.x * ob2.x;
	temp.y = ob1.y * ob2.y;

	return temp;
}
// OVerload '*' using a friend function for 'ob * int'
coord operator*(coord ob1, int i){
	coord temp;

	temp.x = ob1.x * i;
	temp.y = ob1.y * i;

	return temp;
}
// Overload '*' using a friend function for 'int * ob'
coord operator*(int i, coord ob2){
	coord temp;

	temp.x = i * ob2.x;
	temp.y = i * ob2.y;

	return temp;
}

int main(){
	coord o1(-2, 10), o2(0, -3), ores;
	int x, y;

	o1.get_xy(x,y);
	cout << "o1 X: " << x << ", Y: " << y << "\n";
	o2.get_xy(x,y);
	cout << "o2 X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	ores = o1 * o2;
	ores.get_xy(x,y);
	cout << "(o1 * o2) X: " << x << ", Y: " << y << "\n";
	ores = o1 * 3;
	ores.get_xy(x,y);
	cout << "(o1 * 3) X: " << x << ", Y: " << y << "\n";
	ores = -1 * o2;
	ores.get_xy(x,y);
	cout <<"(-1 * o2) X: " << x << ", Y: " << y << "\n";
	cout << "\n";

	return EXIT_SUCCESS;
}

/*
*/
