
/*
	Exercise 1.: What does the following program display? (Try to determine this wihtou actually running the program.)
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class A{
public:
	A(){ cout << "Constructing A\n"; }
	~A(){ cout << "Destructing A\n"; }
};

class B{
public:
	B(){ cout << "Constructing B\n"; }
	~B(){ cout << "Destructing B\n"; }
};

class C : public A, public B{
public:
	C(){ cout << "Constructing C\n"; }
	~C(){ cout << "Destructing C\n"; }
};


int main(){
	C ob;


return EXIT_SUCCESS;
}

/*
	My answer:
		*(without running the program):

		Constructing A
		Constructing B
		Constructing C
		Destructing C
		Destructing B
		Destructing A

	Official answer:
	
		Constructing A
		Constructing B
		Constructing C
		Destructing C
		Destructing B
		Destructing A

*/
