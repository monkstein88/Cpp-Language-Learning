
/*
	Exercise 1.: Given the following base class,

	class area_cl{
	public:
		double height;
		double width;
	};

	create two derived classes called 'rectangle' and 'isosceles' that inherit
	'area_cl'. HAve each class include a function called area() that returns the
	area of a rectangle or sosceles triangle, as appropriate. Use parameterized
	constructors to initilize 'height' and 'width'.


*/

#include <iostream>
#include <cstdlib>
using namespace std;

class area_cl{
public:
	double width;
	double height;
};

class rectangle : public area_cl{
public:
	rectangle(double w, double h);
	double area();
};

class isosceles : public area_cl{
public:
	isosceles(double w, double h);
	double area();
};


int main(){

	rectangle r1(4.2,6.9);
	isosceles i1(8.1,8.4);

	cout << "Rectangle area #r1 :" << r1.area() << "\n";
	cout << "Isosceles area #i1 :" << i1.area() << "\n";

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
