
/*
	Exercise 1.: Write a program that uses 'new' to dynamically allocate a 'float', a 'long', and a 'char'. Give
	these dynamic variables values and display their values. Finally, release all dynamically allocated memory by
	using 'delete'.
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;



int main(){
	float* p_float = new float;
	long* p_long = new long;
	char* p_char = new char;

	if( !(p_float && p_long && p_char) ){
		cout << "Allocation error\n";
		return EXIT_FAILURE;
	}

	*p_float = 3.141562;
	*p_long = -9876543210;
	*p_char = 'G';

	cout << "Allocated float: " << *p_float << "\n";
	cout << "Allocated long: " << *p_long << "\n";
	cout << "Allocated char: " << *p_char << "\n";

	delete p_float;
	delete p_long;
	delete p_char;

	return EXIT_SUCCESS;
}

/*

*/
