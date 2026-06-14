
/*
	Exercise 1.: Examine this skeleton:
*/

// This program is fixed.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class mybase{
	int a, b;
public:
	int c;
	void setab(int i, int j){ a = i ; b = j; }
	void getab(int &i, int& j){ i = a; j = b;}
};

class derived1: public mybase{
	// ...
};

class derived2: private mybase{
	// ...
};

int main(){
	derived1 o1;
	derived2 o2;
	int i, j

	// ...

	return EXIT_SUCCESS;
}

/*
	withing 'main()', which of the following statements are legal?

	A. o1.getab(i, j);
	B. o2.getab(i, j);
	C. o1.c = 10;
	D. o2.c = 10;


	My answer:
		- A. & C.

	Official answer:
		- A and C are legal statements.
*/
