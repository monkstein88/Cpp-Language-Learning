
/*
	Example 1.: The following is an example that demonstrates the usefulness of passing an object by reference.
	First, here is a version of a program that passes an object of 'myclass' by value to a function called 'f()':

*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass{
	int who;
public:
	myclass(int n){
		who = n;
		cout << "Constructing " << who << "\n";
	}
	~myclass(){ cout << "Destructing " << who << "\n"; }
	int id(){ return who; }
};

// o is passed by value.
void f(myclass o){
	cout << "Received " << o.id() << "\n";
}

int main(){
	myclass x(1);

	f(x);

	return EXIT_SUCCESS;
}

/*
	This function displays the following:
	"Constructing 1
	 Received 1
	 Destructing 1
	 Destructing 1
	"

	As you can see, the destructor function is called twice-first when the copy of object '1' is destroyed
	when 'f()' terminates and again when the program finishes.
*/
