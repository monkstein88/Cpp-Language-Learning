
/*
	Example 2: Here is another example of function overloading that is not ambiguous in and of itself. However, when this funcion
	is called with the wrong type of argument, C++'s automatic conversion rules cause an ambiguous situation,
*/

// This program is ambiguous.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void f(unsigned char c){
	cout << c;
}

void f(char c){
	cout << c;
}

int main(){

	f('c');
	f(86); // which 'f()' is called???

	return EXIT_SUCCESS;
}


/*
	Here, when 'f()' is called with the numeric constant 86, the compiler cannot know whether to call 'f(unsigned char)' or 'f(char)'.
	Either conversion is equally valid, thus leading to ambiguity.
*/
