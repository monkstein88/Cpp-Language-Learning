
/*
	Exercise 5.: Create an inserter and an extractor for this class:

	class pwr{
		int base;
		int exponent;
		double result; // base to the exponent power
	public:
	 	pwr(int b, int e);
	};

	pwr::pwr(int b, int e){
		base = b;
		exponent = e;

		result = 1;
		for( ; e; e--)
			result = result*base;
	}




*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class pwr{
	int base;
	int exponent;
	double result;
public:
	// Constructors:
	pwr(int b, int e);
	// Overloading - via member functions:
	friend ostream& operator<<(ostream& stream, pwr ob){

		stream << "Result of " << ob.base << "^(" << ob.exponent << ") is " << ob.result << '\n';

		return stream;
	}
	friend istream& operator>>(istream& stream, pwr& ob){
		int e;
		stream >> ob.base >> ob.exponent;

		ob.result = 1;
		e = ob.exponent;
		for( ; e ; e--)
			ob.result = ob.result*ob.base;

		return stream;
	}
};

pwr::pwr(int b, int e){
	base = b;
	exponent = e;

	result = 1;
	for( ; e; e--)
		result = result*base;
}

int main(){
	pwr a1(10, 4) , a2(-3, 2);

	cout << a1 << a2 ;
	cout << "Enter a <base> and <exponent> separated by space: ";
	cin >> a2;
	cout << a2;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	Result of 10^(4) is 10000
	Result of -3^(2) is 9
	Enter a <base> and <exponent> separated by space: -7 3
	Result of -7^(3) is -343


*/
