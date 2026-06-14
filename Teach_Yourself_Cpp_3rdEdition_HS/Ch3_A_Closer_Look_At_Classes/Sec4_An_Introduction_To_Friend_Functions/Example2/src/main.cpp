
/*
	Example 2.: A function can be a member of one class and a friend of another. For example, here is
	the preceding example rewritten so that 'sp_greater' is a memmber of 'car' and a friend of 'truck':
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE macros and exit() function
using namespace std;

class truck; // a forward declaration

class car{
	int passengers;
	int speed;
public:
	car(int p, int s){ passengers = p; speed = s; }
	int sp_greater(truck t);
};

class truck{
	int weight;
	int speed;
public:
	truck(int w, int s){ weight = w; speed = s; }

	// note new use of the scope resolution operator
	friend int car::sp_greater(truck t);
};

/*
	Return positive if car speed faster than truck.
	Return 0 if pseeds are the same
	Return negative if truck speed faster than car.
*/

int car::sp_greater(truck t){
	/*
		Since 'sp_greater()' is member of car, only a truck  object must be passed to it.
	*/
	return speed - t.speed;
}

int main(){
	int t;
	car c1(6,55), c2(2, 120);
	truck t1(10000, 55), t2(20000, 72);

	cout << "Comparing c1 and t1:\n";
	t = c1.sp_greater(t1); // evoke as member function of car
	if(t<0)
		cout << "Truck is faster.\n";
	else if(t==0)
		cout << "Car and truck speed is the same.\n";
	else
		cout << "Car is faster.\n";

	cout << "Comparing c2 and t2:\n";
	t = c2.sp_greater(t2);
	if(t<0)
		cout << "Truck is faster.\n";
	else if(t==0)
		cout << "Car and truck speed is the same.\n";
	else
		cout << "Car is faster.\n";

	return EXIT_SUCCESS;
}

/*
	Notice the new use of the scope resolution operator as it occurs in the friend declaration
	within the 'truck' class declaration. In this case, it is used to tell the compiler that the
	function 'sp_greater()' is a member of the 'car' class.

	One easy way remember how to use the scope resolution operator is that the class name followed
	by scope resolution operator followed by the member name fully specifies a class member.

	In fact, when refering to a member of a class, it is never wrong to fully specify its name.
	However, when an object is used  to call a member function or access a member variable, the
	full name is redundant, and seldom used. For example,

	t = c1.sp_greater(t1);

	can be written using the (redundant) scope resolution operator and the class name 'car' like this:

	t = c1.car::sp_greater(t1);

	However, since 'c1' is an object of type car, the compiler already knows that 'sp_greater()' is
	a member of the 'car' class, making the full class specification unnecessary.
*/
