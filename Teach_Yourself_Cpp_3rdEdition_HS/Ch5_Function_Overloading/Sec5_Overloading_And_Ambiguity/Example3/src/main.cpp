
/*
	Example 3.: One type of ambiguity is caused when you try to overload functions in which the only difference is the fact that
	one uses a reference parameter and the other uses the default call-by-value parameter. Given C++'s formal syntax, there is no
	way for the compiler to know which function to call. Remember, there is no syntactical difference betwen calling a function that
	takes a value parameter, For example:
*/

// An ambiguous program.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int f(int a, int b){
	return a+b;
}

// this is inherently ambiguous
int f(int a, int& b){
	return a-b;
}

int main(){
	int x=1, y=2;

	cout << f(x, y); // which versio of 'f()' is called???

	return EXIT_SUCCESS;
}

/*
	Here, 'f(x,y)' is ambiguous because it could be calling either version of the function. In fact, the compiler will flag an
	error before this statement is even specified because the overloading of the two functions is inherently ambiguous (even
	when trying to compiler the program, without calling the function 'f(x,y)', it will give an error) and no
	reference to them could be resolved.
*/
