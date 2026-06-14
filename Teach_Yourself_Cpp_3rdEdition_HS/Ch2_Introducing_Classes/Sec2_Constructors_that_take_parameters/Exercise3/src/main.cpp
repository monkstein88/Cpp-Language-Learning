
/*
	Exercise 3.: Create a class called 'box' whose constructor function is passed
	three 'double' values, each of which rerpresents the length of one side of a
	box. Have the 'box' class compute the volume of the box and store the result
	in a 'double' variable. Include a member function called vol() that displays
	the volume of each 'box' object.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class box{
	double length,width,height;
	double volume;
public:
	box(double x, double y, double z);
	void vol();
};

box::box(double x, double y, double z){
	if(x==0 || y==0 || z==0){
		cout << "Incorrect input!\n";
		return;
	}
	length = x; width = y; height = z;
	volume = x * y * z;
}

void box::vol(){
	cout << "Box's volume is: " << volume << " [m^3]\n";
}


int main(){
	box A(2,3,0), B(5,5,5), C(1,2,3);

	A.vol(); // This one is supposed to print out a 'garbage' value
	B.vol();
	C.vol();

	return EXIT_SUCCESS;
}
