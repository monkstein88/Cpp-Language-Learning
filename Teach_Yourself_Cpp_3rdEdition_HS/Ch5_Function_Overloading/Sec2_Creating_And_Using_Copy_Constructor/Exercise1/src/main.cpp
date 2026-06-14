
/*
	Exercise 1.: The copy constructor is also invoked when a function generates the temporary object is used as the function's
	return value (for those functions that return objects). With this in mind, consider the following output:

	"
	Constructing normally
	Constructing normally
	Constructing copy  (N.B!) This does not print/happen with modern compilers (MinGW-w64 GCC 8.1.0)
	"

	This output was created by the following program. Explain why, and describe precisely what is occurring.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass{
public:
	myclass();
	myclass(const myclass &o);
	myclass f();
};

// Normal constructor
myclass::myclass(){
	cout << "Constructing normally\n";
}

// Copy constructor
myclass::myclass(const myclass &o){
	cout << "Constructing copy\n";
}

// Return an object.
myclass myclass::f(){
	myclass temp;

	return temp;
}

int main(){
	myclass obj; // (1)

	obj = obj.f();

	return EXIT_SUCCESS;
}

/*
	My answers:
		- The first "Constructing normally", is happening because an object of type 'myclass' is created with name 'obj' in main() - (1)
		- The second "Constructing normally", happening when the inside 'obj' class member function 'f()' gets called and inside it a
		(new local/temporary) variable of type 'myclass' gets created. This triggers the normal constructor.
		- The "Constructing copy" does not occur, my guess is that the C++ standard changed this behaviour with modern compilers, so when
		an object is simply returned by a function, the temporary object is not made at all.
*/
