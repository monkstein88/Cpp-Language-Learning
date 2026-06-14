/*
	Example 1.: In the following program, 'arraytype' declares an array of five integers. Its constructor function initializes each
	member of the array. The overloaded 'operator[]()' function returns the value of the element specified by its parameter.
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
	int operator[](int i){
		return a[i];
	}
};


int main(){
	arraytype ob;
	int i;

	for(i=0;i<SIZE;i++)
		cout << ob[i] << " ";
	cout << "\n";

	return EXIT_SUCCESS;
}

/*
	This program displays the follwoing output:

	0 1 2 3 4

	The initialization of the array 'a' by the constructor in this and the following programs is for the sake of illustration only.
	It is not required.
*/
