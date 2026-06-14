/*
	Example 2.: It is possible to design the 'operator[]()' function in such a way that the '[]' can be used on both the left and
	the right sides of an assignment statement. To do this, return a reference to the element being indexed. For example, this
	program makes this change and illustrates its use:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

const int SIZE = 5;

class arraytype{
	int a[SIZE];
public:
	arraytype(){
		int i;
		for(i=0;i<SIZE;i++)
			a[i] = i;
	}
	int& operator[](int i){ // return a reference to the element being indexed
		return a[i];
	}
};

int main(){
	arraytype ob;
	int i;

	for(i=0; i<SIZE; i++)
		cout << ob[i] << " ";
	cout << "\n";

	// add 10 to each element in the array
	for(i=0; i<SIZE; i++)
		ob[i] = ob[i] + 10; // [] on left of =

	for(i=0; i<SIZE; i++)
		cout << ob[i] << " ";

	return EXIT_SUCCESS;
}

/*
	This program displays the following output:

	0 1 2 3 4
	10 11 12 13 14

	Because the 'operator[]()' function now returns a reference to the array element indexed by 'i', it can be used on the left side
	of an assignment to modify an element of the array. (Of course, it can be used on the right side as well.) As you can see, this
	makes objects of 'arraytype' act like normal arrays.
*/
