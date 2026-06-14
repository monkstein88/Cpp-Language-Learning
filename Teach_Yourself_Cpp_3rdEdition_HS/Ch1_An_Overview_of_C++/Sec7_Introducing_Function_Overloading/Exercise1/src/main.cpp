
/*
	Create a function called sroot() that returns the square root of its argument.
	Overload sroot() three ways: have it return of an integer, a long integer and
	a double. (To actually compute the square root, you can use the standard library
	function sqrt() in <cmath> library)
*/

#include <iostream>
#include <cmath>
using namespace std;

int sroot(int);
long sroot(long);
double sroot(double);

int main(){
	cout << "Square root value of 10: " << sroot(10) << "\n\n";
	cout << "Square root value of 10L: " << sroot(10L) << "\n\n";
	cout << "Square root value of 10.01: " << sroot(10.01) << "\n\n";

	return 0;
}


// sroot() for ints
int sroot(int a){
	cout << "In integer sroot()\n";
	return (int) sqrt((double) a);
}

// sroot() for longs
long sroot(long a){
	cout << "In long sroot()\n";
	return (long) sqrt((double) a);
}

// sroot() for ints
double sroot(double a){
	cout<< "In double sroot()\n";
	return sqrt(a);
}
