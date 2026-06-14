
/*
	Exercise 2.: Write a program that creates a base class called 'dist' that stores the distance between two points in a 'double'
	variable. In 'dist', create a virtual function called 'trav_time()' that outputs the time it takes to travel that distance,
	assuming that the distance is in miles and the speed is 60 miles per hour. In a derived class called 'metric', override
	'trav_time()' so that it outputs the travel time assuming that the distance is in kilometers and the speed is 100 kilometers
	per hour.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class dist{
protected:
	double distance; // distance between two points in [miles]
public:
	dist(double d){ distance = d;} // This is passed in [miles]
	virtual void trav_time(){
		cout << "Distance: " << distance << " [miles]. " << "Estimated travel time (assuming constant 60mph speed): ";
		cout << fixed << setprecision(2) << distance/60.0 << " [hours]" << endl;
	}
};

class metric : public dist{
public:
	metric(double d) : dist(d/1.609344) {} // Constructor takes argument in [kilometers], but needs to pass the value to base
														// as [miles]
	void trav_time(){
		cout << "Distance: " << distance*1.609344 << " [kilometers]." << " Estimated trave time (assuming constant 100kmh speed): ";
		cout << fixed << setprecision(2) << (distance*1.609344)/100.0 << " [hours]" << endl;
	}
};



int main(){
	dist* p;
	dist d1(250); // 250 miles
	metric m1(350); // 350 kilometers

	p = &d1;
	p->trav_time();

	p = &m1;
	p->trav_time();

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch10_Sec2_Exercise2
	Distance: 250 [miles]. Estimated travel time (assuming constant 60mph speed): 4.17 [hours]
	Distance: 350.00 [kilometers]. Estimated trave time (assuming constant 100kmh speed): 3.50 [hours]

*/
