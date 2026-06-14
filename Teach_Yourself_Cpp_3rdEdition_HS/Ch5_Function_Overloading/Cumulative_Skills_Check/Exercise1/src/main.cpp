
/*
	Exercise 1.: Create a function  called 'order()' that takes two integer reference parameters. If the first argument is greater
	than the second argument, reverse the two arguments. Otherwise, take no action. That is order the two arguments used to call
	'order()' so that, upon return, the first argument will be less than the second. For example, given

	int x=1 , y=0;
	order(x, y);

	following the call 'x' will be 0 and 'y' will be 1.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void order(int& a_var, int& b_var){
	int temp;
	if(a_var > b_var){
		temp = a_var;
		a_var = b_var;
		b_var = temp;
	}
}

int main(){
	int x = 1, y = 0;

	cout << "x (original): " << x << '\n';
	cout << "y (original): " << y << '\n';
	order(x,y);
	cout << "x (after 'order()'): " << x << '\n';
	cout << "y (after 'order()'): " << y << '\n';

	return EXIT_SUCCESS;
}
