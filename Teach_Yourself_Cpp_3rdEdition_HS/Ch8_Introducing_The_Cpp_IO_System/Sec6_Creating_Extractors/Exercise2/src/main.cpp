
/*
	Exercise 2.:  Create a class that stores an integer value and its lowest factor. Create both an inserter and an extractor for
	this class.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// This is denominator (bottom number, below the fraction line a.k.a vinculum)
class fraction{
 	int denominator; // This is the integer (denominator of a fraction)
	int lfactor; // This is the lowest factor of the denominator
public:
	// Constructors:
	fraction(){ denominator = 0; lfactor = 0; }
	fraction(int d);
	// Overloading - via 'friend' functions
	friend ostream& operator<<(ostream& stream, fraction& ob);
	friend istream& operator>>(istream& stream, fraction& ob);
};


fraction::fraction(int d){
	int i;

	if(d == 0){
		denominator = 0;
		lfactor = 0;
	}else{
		denominator = d;
		lfactor = 1;
		for(i=2 ; i <= abs(denominator)/2; i++){
			if(!(denominator%i)){
				lfactor = i;
				break;
			}
		}
	}
}

ostream& operator<<(ostream& stream, fraction& ob){

	stream << "Integer value: " << ob.denominator << ", has a lowest factor of: " << ob.lfactor << '\n';

	return stream;
}

istream& operator>>(istream& stream, fraction& ob){
	int i;

	stream >> ob.denominator;
	if(ob.denominator == 0){
		ob.lfactor = 0;
	}else{
		ob.lfactor = 1;
		for(i=2; i<=abs(ob.denominator)/2; i++){
			if(!(ob.denominator%i)){
				ob.lfactor = i;
				break;
			}
		}
	}

	return stream;
}


int main(){
	fraction f1(10), f2(-2), f3(121), f4;

	cout << f1 << f2 << f3;
	cout << "Enter an integer: ";
	cin >> f4;
	cout << f4;

	return EXIT_SUCCESS;
}




/*
	This program displays the following when ran:

	Integer value: 10, has a lowest factor of: 2
	Integer value: -2, has a lowest factor of: 1
	Integer value: 121, has a lowest factor of: 11
	Enter an integer: 2
	Integer value: 2, has a lowest factor of: 1

*/
