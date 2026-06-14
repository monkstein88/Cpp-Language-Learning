
/*
	Example 4.: Here is a more practical example of how a virtual function can be used. This program creates a generic base class
	called 'area' that holds two dimensions of a figure. It also declares a virtual function called 'getarea()' that, when
	overridden by derived classes, returns the area of the type of figure defined by the derived class. In this case, the
	declaration of 'getarea()' inside the base class determines the nature of the interface. The actual implementation is left to
	the classes that inherit it. In this example, the area of a triangle and a rectangle are computed.
*/

// Use virtual function to define interface.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class area{
	double dim1, dim2; // dimensions of figure
public:
	void setarea(double d1, double d2){
		dim1 = d1;
		dim2 = d2;
	}
	void getdim(double& d1, double& d2){
		d1 = dim1;
		d2 = dim2;
	}
	virtual double getarea(){
		cout << "You must override this function\n";
		return 0.0;
	}
};

class rectangle : public area{
public:
	double getarea(){
		double d1, d2;
		getdim(d1, d2);
		return d1*d2;
	}
};

class triangle : public area{
public:
	double getarea(){
		double d1, d2;

		getdim(d1, d2);
		return 0.5*d1*d2;
	}
};

int main(){
	area* p;
	rectangle r;
	triangle t;

	r.setarea(3.3, 4.5);
	t.setarea(4.0, 5.0);

	p = &r;
	cout << "Rectangle has area: " << p->getarea() << '\n';

	p = &t;
	cout << "Triangle has area: " << p->getarea() << '\n';

	return EXIT_SUCCESS;
}

/*
	Notice that the definiton of 'getarea()' inside 'area' is just a placeholder and performs no real function. Because 'area' is
	not linked to any specific type of figure, there is no meaningful definition that can be given to 'getarea()' inside 'area'.
	In fact, 'getarea()' must be overriden by a derived class in order to be useful. In the next section, you will see a way to
	enforce this.

	This program displays the following output when ran:

	$ ./Ch10_Sec2_Example4
	Rectangle has area: 14.85
	Triangle has area: 10


*/
