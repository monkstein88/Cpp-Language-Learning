
/*
	Exercise 2.: Using the following skeleton, create appropriate 'car()' and 'truck()' constructor functions. Have each pass along
	appropriate arguments to 'vehicle'. In addition, have 'car()' initialze 'passengers' as specified when object is created. Have
	'truck()' initialize 'loadlimit'as specified when an object is created.
*/


#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// A base class for various types of vehicle.
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

class car : public vehicle{
	int passengers;
public:
	// insert car() construct here
	car(int p, int w, int r) : vehicle(w, r){
		passengers = p;
	}
	void show(){
		showv();
		cout << "Passengers: " << passengers << '\n';
	}
};

class truck : public vehicle{
	int loadlimit;
public:
	// inset truck() constructor here
	truck(int l, int w, int r) : vehicle(w, r){
		loadlimit = l;
	}
	void show(){
		showv();
		cout << "Loadlimit: " << loadlimit << '\n';
	}
};

int main(){
	car c(5, 4, 500);
	truck t(3000, 12, 1200);

	cout << "Car: \n";
	c.show();
	cout << "\nTruck:\n";
	t.show();

return EXIT_SUCCESS;
}

/*

*/
