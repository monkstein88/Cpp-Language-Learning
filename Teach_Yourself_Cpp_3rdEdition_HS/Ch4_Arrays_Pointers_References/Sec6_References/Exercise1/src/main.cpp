
/*
	Exercise 1.: Write a function called 'neg()' that reverses the sign of its integer parameter. Write the
	function two ways first by usin a pointer parameter and then by using a reference paramter. Include a
	short program to demonstrate their operation.

*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void pnt_neg(int* p_val){
	if(!(*p_val))
		return;
	else
		*p_val = -(*p_val);
}

void ref_neg(int& r_val){
	if(!r_val)
		return;
	r_val = -r_val;
}

int main(){
	int i;

	i = -1;
	cout << i << " negated (using pointer (int*) based neg() func.) is: ";
	pnt_neg(&i);
	cout << i << "\n";

	cout << i << " negated (using reference (int&) based neg() func.) is: ";
	ref_neg(i);
	cout << i << "\n";

	return EXIT_SUCCESS;
}

/*

*/
