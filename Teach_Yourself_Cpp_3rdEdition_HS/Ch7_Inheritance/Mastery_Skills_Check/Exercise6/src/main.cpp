
/*
	Exercise 6.: Fix the following program:
*/

/*
	A variation on the vehicle hierarchy. But this program contains an error. Fix it.
	Hint: try compiling it as is and observe the error messages
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// A base class for various types of vehicles.
class vehicle{
	int num_wheels;
	int range;
public:
	vehicle(int w, int r){
		num_wheels = w;
		range = r;
	}
	void showv(){
		cout << "Wheels: " << num_wheels << '\n';
		cout << "Range: " << range << '\n';
	}
};

enum motor {gas, electric, diesel};

class motorized : virtual public vehicle{ // Note: This inheritance needs to be 'virtual'
	enum motor mtr;
public:
	motorized(enum motor m, int w, int r) : vehicle(w, r){
		mtr = m;
	}
	void showm(){
		cout << "Motor: ";
		switch(mtr){
			case gas : cout << "Gas\n"; break;
			case electric: cout << "Electric\n"; break;
			case diesel : cout << "Diesel\n"; break;
		}
	}
};

class road_use : virtual public vehicle{ // Note: This inheritance needs to be 'virtual'
	int passengers;
public:
	road_use(int p, int w, int r) : vehicle(w, r){
		passengers = p;
	}
	void showr(){
		cout << "Passengers: " << passengers << '\n';
	}
};

enum steering {power, rack_pinion, manual};

class car : public motorized, public road_use{
	enum steering strng;
public:
	car(enum steering s, enum motor m, int w, int r, int p) : vehicle(w, r), motorized(m, w, r), road_use(p, w, r){
		strng = s;
	}
	void show(){
		showv();
		showr();
		showm();
		cout << "Steering: ";
		switch(strng){
			case(power): cout << "Power\n"; break;
			case(rack_pinion): cout << "Rack and Pinion\n"; break;
			case(manual): cout << "Manual\n"; break;
		}
	}
};

int main(){
	car c(power, gas, 4, 500, 5);

	c.show();

	return EXIT_SUCCESS;
}
/*
	Also the order of the mult

	Reason for the problem was double inheritance, two separate derived classes inherited the same base class, without using the
	'virtual' class keyword. And this duplication imposed ambiguity is causing compile time errors

	Official answer:
		- To fix the program, have 'motorized' and 'road_use' inherit vehicle as a virtual base class.
			Also, refer to Question 1 in the Cumulative Skills Check in this chapter.
*/
