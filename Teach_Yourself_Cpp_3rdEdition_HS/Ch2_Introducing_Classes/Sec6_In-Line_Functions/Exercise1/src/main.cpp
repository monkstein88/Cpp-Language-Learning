
/*
	Exercise 1.: In Chapter 1 you overloaded the abs() function so that it could find the absolute value
				 of integers, long integers and doubles. Modify that program so that those functions are
				 expanded in line.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

// Overload abs() three ways
inline int absolute(int n);
inline long absolute(long n);
inline double absolute(double n);

int main(){

	cout << "Absolute value of -10: " << absolute(-10) << "\n\n";
	cout << "Absolute value of -10L: " << absolute(-10L) << "\n\n";
	cout << "Absolute value of -10.01: " << absolute( -10.01) << "\n\n";

	return EXIT_SUCCESS;
}

// abs() for ints
inline int absolute(int n){
	cout<< "In integer absolute()\n";
	return n<0 ? -n : n;
}

// abs() for longs
inline long absolute(long n){
	cout << "In long absolute()\n";
	return n<0 ? -n : n;
}

// abs() for doubles
inline double absolute(double n){
	cout << "In double absolute()\n";
	return n<0 ? -n : n;
}