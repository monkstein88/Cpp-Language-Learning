
/*
	Example 1.: One common (and good) use of a friend function occurs when two different types of
	classes have some quantity in common tht needs to be compared. For example, consider the following
	program, which creates a class called 'car' and a class called 'truck', each containing, as a
	private variable, the speed of the vehicle it represent:

*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE macros and exit() function
using namespace std;

class truck; // forward declaration

class car{
	int passengers;
	int speed;
public:
	car(int p, int s){ passengers = p; speed = s; }
	friend int sp_greater(car c, truck t);
};

class truck{
	int weight;
	int speed;
public:
	truck(int w, int s){ weight = w; speed = s; }
	friend int sp_greater(car c, truck t);
};

/*
	Return positive if car speed faster than truck.
	Return 0 if pseeds are the same
	Return negative if truck speed faster than car.
*/
int sp_greater(car c, truck t){
	return c.speed - t.speed;
}

int main(){
	int t;
	car c1(6, 55), c2(2, 120);
	truck t1(100000, 55), t2(20000, 72);

	cout << "Comparing c1 and t1:\n";
	t = sp_greater(c1, t1);
	if(t<0)
		cout << "Truck is faster.\n";
	else if(t==0)
		cout << "Car and truck speed is the same.\n";
	else
		cout << "Car is faster.\n";

	cout << "Comparing c2 and t2:\n";
	t = sp_greater(c2, t2);
	if(t<0)
		cout << "Truck is faster.\n";
	else if(t==0)
		cout << "Car and truck speed is the same.\n";
	else
		cout << "Car is faster.\n";

	return EXIT_SUCCESS;
}

/*
	This program contains the function 'sp_greater()', which is a friend function of both the
	'car' and 'truck' classes. (As stated, a function can be a friend of two or more classes.)

	This program illustrates one important C++ synstax element the 'forward declaration' (also
	called 'forward reference'). Because 'sp_greater()' takes parameters of the 'car' and the
	'truck' classes, it is logically impossible to declare both before including 'sp_greater()'
	in either. Therefore, there needs to be some way to tell the compiler about a class name
	without actually declaring it. This is called a forward declaration. In C++, to tell the
	compiler that an identifier is the name of a class, use a line like this before the class
	name  is first used:

	class class_namel

	For example, in the preceding program, the forward declaration is:

	class truck;

	Now 'truck' can be used in the friend declaration of 'sp_greater()' without generating a
	compile-time error.
*/
