
/*
	Exercise 2.: Using the following class hierarchy, create 'C' constructor so that it initializes 'k' and passes on argument to
	'A()' and 'B()'.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class A{
	int i;
public:
	A(int a){ i = a; }
};

class B{
	int j;
public:
	B(int a){ j = a; }
};

class C : public A, public B{
	int k;
public:
	/*
		Create 'C()' so that it initializes 'k' and passes arguments to both 'A()' and 'B()'
	*/
	C(int c, int b, int a) : A(a) , B(b){
		k = c;
	}
};

int main(){
	C ob(3,2,1);

return EXIT_SUCCESS;
}

/
