
/*
	Example 2.: As mentioned, a namespace can be split between files or within a single file; its conents are additive. Consider this
	example:
*/

// Namespaces are additive
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

namespace Demo
{
	int a; // In 'Demo' namespace
}

int x; // this is in global namespace

namespace Demo
{
	int b; // this is in 'Demo' namespace, too.
}


int main(){
	using namespace Demo;

	a = b = x = 100;
	cout << a << " " << b << " " << x << endl ;
	return EXIT_SUCCESS;
}

/*
	Here the 'Demo' namespace contains both 'a' and 'b', but not 'x'.

	This program displays the following when ran:

	$ ./Ch13_Sec1_Example2
	100 100 100

*/
