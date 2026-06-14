
/*
	Example 1.: What is wrong with the following program?
*/

// This program has an error.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class cl1{
	int i, j;
public:
	cl1(int a, int b){ i = a; j = b;}
	// ...
};

class cl2{
	int i, j;
public:
	cl2(int a, int b){ i = a; j = b; }
	// ...
};

int main(){
	cl1 x(10, 20);
	cl2 y(0, 0);

	x = y; // Though both objects (class) are physically similar, they don't have
	       // the same type - they don't belong to one and same class. So this
				 // should provoke an error during compilation
	// ...

	return EXIT_SUCCESS;
}
