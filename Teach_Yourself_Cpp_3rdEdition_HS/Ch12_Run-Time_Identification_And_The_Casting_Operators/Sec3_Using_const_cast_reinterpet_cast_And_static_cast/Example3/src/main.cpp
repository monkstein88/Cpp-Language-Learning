
/*
	Example 3.: The 'static_cast' operator is essentially a substitute for the original cast operator. It simply performs a non-polymorphic
	cast. For example, the following casts a 'float' into an 'int'.
*/

// use 'static_cast'
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;


int main(){
	int i;
	float f;

	f = 192.22;

	i = static_cast<int> (f);

	cout << i << endl;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	./Ch12_Sec3_Example3
 192


*/
