
/*
	Ex 3.: Given the following base class, show how it can be inherited by a derived class called 'Mars'.
*/

#include <iostream>
#include <cstdlib>
using namespace std;


class planet{
	int moons;
	double dis_from_sun;
	double diameter;
	double mass;
public:
	// ...
};


class Mars : public planet{
	// ...
}
