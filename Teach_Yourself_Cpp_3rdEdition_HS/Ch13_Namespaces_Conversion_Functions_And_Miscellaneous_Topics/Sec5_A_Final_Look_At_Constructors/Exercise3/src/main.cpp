
/*
	Exercise 2.: Will the following fragment work?
*/

class Demo
{
	double x;
public:
	Demo(double i) { x = i; }
	// ...
};

// ...
Demo counter = 10;

/*
	My answer:
		- Yes it will, because the compiler will perform implicit conversion from the type of argument to the type of the class like :
		'Demo counter(10);' which is valid.

	Official answer:
		- Yes, because C++ defines an automatic conversion from 'int' to 'double'.

*/
