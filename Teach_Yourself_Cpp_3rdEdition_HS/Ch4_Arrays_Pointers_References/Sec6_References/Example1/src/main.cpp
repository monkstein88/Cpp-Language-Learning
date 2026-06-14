
/*
	Example 1.: The classic example of passing arguments by reference is a function that exchanges the values
	of the two arguments with which it is called. Here is an example of calle 'swapargs()' that uses references
	to swap its two integer arguments:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void swapargs(int &x, int &y);

int main(){
	int i, j;

	i = 10;
	j = 19;

	cout << "i: " << i << ", ";
	cout << "j: " << j << "\n";

	return EXIT_SUCCESS;
}

void swapargs(int &x, int &y){
	int t;

	t = x;
	x = y;
	y = t;
}


/*
	If 'swapargs()' had been written using pointers instead of references, it would have looked like this:

	void swapargs(int *x, int *y){
		int t;

		 t = *x;
		*x = *y;
		*y = t
	}

	As you can see, by using the reference version of 'swapargs()', the need for the '*' operator is eliminated.
*/
