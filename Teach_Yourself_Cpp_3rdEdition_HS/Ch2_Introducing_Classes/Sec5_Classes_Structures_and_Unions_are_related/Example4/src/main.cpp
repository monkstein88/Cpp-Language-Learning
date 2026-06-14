
/*
	Example 4.: This program uses an anonymous union to display the individual bytes that comprise a
	'double'. (This program assumes that 'double'-s are 8 bytes (64-bit) long.)
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

int main(){
	union{
		double value;
 		char bytes[8];
	};
	int i;
	value = 859345.324;
	
	// display the bytes within a double
	for(i = 0; i < 8; i++)
		cout << (int)bytes[i] << " ";
	
	return EXIT_SUCCESS;
}

/*
	As you can see, both 'value' and 'bytes' are accessed as if they were normal variables and not part of a union.
	Even though they are declared as being part of an anonymous union. Even though they are declared as being part
	of an anonymous union, their names are at the same scope level as any other local variable declared at the same 
	point. This is why a member of an anonymous union cannot have the same name as any other variable known to its
	scope.
*/