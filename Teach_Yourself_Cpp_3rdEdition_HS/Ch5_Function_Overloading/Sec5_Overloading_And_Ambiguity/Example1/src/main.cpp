
/*
	Example 1.: One of the most common types of ambiguity is caused by the C++'s automatic type conversion rules. As you know, when
	a function is called with an argument that is of a compatible (but not the same) type as the parameter to which it is being
	passed, the type of the argument is automatically converted to the target type. In fact, it is this sort of type conversion that
	allows a function such as 'putchar()' to be called with a character even though its argument is specified as an 'int'. However,
	in some cases, this automatic type conversion will cause an ambiguous situation when a functions is overloaded. To see how,
	examine this program:
*/

// This program contains an ambiguity error.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

float f(float i){
	return i / 2.0;
}

double f(double i){
	return i / 3.0;
}

int main(){
	float x = 10.09;
	double y = 10.09;

	cout << f(x); // unambiguous - use f(float)
	cout << f(y); // unambiguous - use f(double)

	cout << f(10); // ambiguous, convert 10 to double or float??

	return EXIT_SUCCESS;
}

/*
	As the comments in 'main()' indicate, the compiler is able to select the correct version of 'f()' when it is called with either
	a 'float' or a 'double' variable. However, what happens when it is called with an integer? DOes the compiler call 'f(float)' or
	'f(double)'? (Both are valied conversions!) In either case, it is valid to promote an integer into either a 'float' or a 'double'.
	Thus, the ambiguous situation is created.

	This example also points out that ambiguity can be introduced by the way an overloaded function is called. The fact is that
	there is no inherent ambiguity in the overloaded vesions of 'f()' as long as each is called with an unambiguous argument.
*/
