
/*
	Exercise 2.: Using 'new', show how to allocate a 'double' and give it an initial value of -123.0987
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	double* p_dbl;

	p_dbl = new double (-123.0987);
	if(!p_dbl){
		cout << "Allocation error!\n";
		return EXIT_FAILURE;
	}
	cout << "Double value: " << *p_dbl;
	cout << "\n";

	return EXIT_SUCCESS;
}
