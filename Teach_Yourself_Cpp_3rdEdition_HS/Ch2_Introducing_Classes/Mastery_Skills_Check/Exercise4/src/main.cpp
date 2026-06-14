
/*
	Exercise 4.: Add another derived class that inherits 'area_cl' from Section 2.3, Exercise 1. Call this 
	class 'cylinder' and have it compute the surface area of a cylinder. Hint: The surface area of a cylinder
	is: 2 * PI * R^2 + PI * D * height.
	
	PI - the number Pi (3.1415....)
	R - radius
	D - diameter
*/

#include <iostream>
#include <cstdlib>

using namespace std;

#define PI (3.14159265358979323846264338328l) //A suffix is unnecessary in C++.  Any floating point value 
// which lacks the 'f' suffix will be typed to the compiler type double by default.

class area_cl{
public:
	double width;
	double height;
};

class rectangle : public area_cl{ // правоъгълник
public:
	rectangle(double w, double h);
	double area();
};

class isosceles : public area_cl{ // равнобедрен триъгълник
public:
	isosceles(double w, double h);
	double area();
};

class cylinder : public area_cl{
	double radius;
public:
	cylinder(double d, double h){
		radius = d / 2.0;
		width = d;
		height = h;
	}
	double area(){
		return (2*PI*(radius*radius) + PI*width*height);
	}
};


int main(){

	rectangle r1(4.2, 6.9);
	isosceles i1(8.1, 8.4);
	cylinder  c1(3.1, 4.3);

	cout << "Rectangle area #r1 :" << r1.area() << "\n";
	cout << "Isosceles area #i1 :" << i1.area() << "\n";
	cout << "Cylinder area #c1: " << c1.area() << "\n";
	
	return EXIT_SUCCESS;
}


rectangle::rectangle(double w, double h){
	width = w;
	height = h;
}

isosceles::isosceles(double w, double h){
	width = w;
	height = h;
}

double rectangle::area(){
	return (width * height);
}

double isosceles::area(){
	return ((width * height)/2);
}
