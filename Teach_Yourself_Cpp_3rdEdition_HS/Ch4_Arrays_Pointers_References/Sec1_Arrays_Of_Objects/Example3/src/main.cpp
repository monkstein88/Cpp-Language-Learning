
/*
	Example 3.: You can also have multidimensional arrays of objects. For example, here is a program
	that creates a two-dimensional array of objects  and initializes them:
*/

// Create a two-dimensional  array of objects.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int a;
public:
	samp(int n){ a = n; }
	int get_a(){ return a; }
};

int main(){
	samp ob[4][2] = { 1, 2,
										3, 4,
										5, 6,
										7, 8 };
	int i;

	for(i = 0; i < 4; i++){
		cout << ob[i][0].get_a() << ' ';
		cout << ob[i][1].get_a() << "\n";
	}

	cout << "\n";

	return EXIT_SUCCESS;
}

/*
	This program displays
	1 2
	3 4
	5 6
	7 8
*/
