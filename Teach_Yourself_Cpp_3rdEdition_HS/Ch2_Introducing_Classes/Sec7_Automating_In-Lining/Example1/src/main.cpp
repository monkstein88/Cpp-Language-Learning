
/*
	Example 1.: Perhaps the most common use of inline functions defined within a class is to defined
	constructor and destructor functions. For example, the 'samp' class can more efficiently be defined
	like this:
*/

// Demonstrate in-lining a member function.
#include <iostream>
#include <cstdlib>
using namespace std;

class samp{
	int i, j;
public:
	samp(int a, int b) { i = a; j = b;}
	int divisible() { return !(i%j); } // in-lined in its definition
};


int main(){
	samp ob1(10, 2), ob2(10, 3);
	
	// this is true
	if(ob1.divisible())
		cout << "10 divisible by 2\n";
	
	// this is false
	if(ob2.divisible())
		cout << "10 divisible by 3\n";
	
	return EXIT_SUCCESS;
}

/*
	The definition of 'amp()' within the class samp is sufficient, and no other definition of 'samp()' is needed.
*/