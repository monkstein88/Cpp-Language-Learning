
/*
	Exercise 3.: In Exercise 1 from Section 7.1 (listed below), if the 'a' and 'b' inside 'myclass' were into protected instead of
	private (by default) members, would any of your answers to that exercise change? If so, how?
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
	My answer:
		- No, the choices would have remained the same.

	Official answer:
		- No.
*/
