
/*
	Example 1.: To begin, here is very simple program that contains a function that returns a reference:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int& f(); // return a reference
int x;

int main(){
	f() = 100; // assign 100 to reference returned by f()

	cout << x << "\n";

	return EXIT_SUCCESS;
}

// Return an int reference
int& f(){
	return x; // returns a reference to x
}

/*
	Here function 'f()' is declared as returning a reference to an integer. Inside the body of the function,
	the statement

	return x;

	does not return the value of the global variable 'x', but rather, it automatically returns 'x's address
	(int the form of a reference). Thus, inside 'main()', the statement

	f() = 100;

	puts the value 100 into 'x' because 'f()' has returned a reference to it.

	To review, function 'f()' returns a reference. Thus when 'f()' is used on the left side of the assignment
	statement, it is this reference, returned by 'f()' , that is being assigned to. Since 'f()' returns a
	reference to 'x' (in this example), it is 'x' that receives the value of 100.
*/
