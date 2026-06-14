/*
	Exc: Write a program that uses C++ - style I/O to input two integers from the
	keyboard and then displays the result of raising the first to the power of the
	second. (For example, if the user enters 2 and 4, ther result is 24, or 16)

*/

#include <iostream>

using namespace std;

int main(){
	int a,x,r;
	// prompt the user for input
	cout << "Please, enter two integers (base and exponent) separated by a space: " ;
	cin >> a >> x ;
	// calculate the power
	r = 1;
	for(;x;x--){
		r  *= a;
	}
	// Print out the result
	cout << "Result of a^x = " << r ;

	return 0;
}
