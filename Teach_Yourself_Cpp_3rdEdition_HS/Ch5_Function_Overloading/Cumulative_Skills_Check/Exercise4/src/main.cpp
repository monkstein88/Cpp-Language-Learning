
/*
	Exercise 4.: Given the following partial class, add the necessary constructor functions so that both declarations within
	'main()' are valid. (Hint: You need to overload 'samp()' twice.)

	class samp{
		int a;
	public:
		// add constructor functions
		int get_a(){ return a; }
	};

	int main(){
		samp ob(88); // init 'ob's a to 88
		samp obarray[10]; // non-initialized 10-element array

		// ...
	}

*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int a;
public:
	// add constructor functions
	samp(){ a = 0; }; // create a constructor that does not initilialize - does not take any parameters
	samp(int val){ a = val; } // create constructor that does initializes - takes (can be passed) parameters
	// both constructors above, are needed if you're going to want to declare arrays of the 'samp' class.
	int get_a(){ return a; }
};


int main(){
	samp ob(88);
	samp obarray[10];

	cout <<" Show 'a' member value of 'ob' object: "<< ob.get_a() << '\n';
	for(int i; i<10;i++)
		cout <<" Show 'a' member value of 'obarray["<< i << "]' object element: "<< obarray[i].get_a() << '\n';

	return EXIT_SUCCESS;
}
