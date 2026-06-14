
/*
	Exercise 6.: Briefly explain the 'overload' keyword does and why it is no longer needed.

	My answer:
		It was used to explictly inform the compiler that the function it preceeded (it is something of an extra type specifier)
		is to be expected to be overloaded by another one, specified later on. The 'overload' keyword is obsolete and not supported,
		using it will bring out an error in the compiler.

	Official answer:
		The overload keyword is obsolete. In early versions of C++ it was used to tell the
		compiler that a function will be overloaded. It is not supported by modern compilers.

*/

#include <iostream>
#include <cstdlib> // holding the definitions for 'EXIT_SUCCESS' and 'EXIT_FAILURE' macros and the 'exit()' function
using namespace std;



int main(){

  return EXIT_FAILURE;
}
