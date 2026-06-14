
/*
	Example 1.: This progra links 'func()' as a C, rather than a C++, function:
*/

// Illustrate linkage specifier.
#include <iostream>
using namespace std;


extern "C" int fun(int x); // link as C function

int func(int x)
{
	return x/3;
}


/*
	This function can now be linked with code compiled by a C compiler.
*/
