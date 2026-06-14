
/*
	Example 4.: You can define more than one generic data type with the 'template' statement, using a comma-separated list. For example, this
	program creates a generic function that has two generic types:
*/
#include <iostream>
#include <cstdlib>
using namespace std;

template <class type1, class type2>
void myfunc( type1 x, type2 y){
	cout << x << ' ' << y << endl;
}

int main(){

	myfunc(10, "hi");
	myfunc(0.23, 10L);

	return EXIT_SUCCESS;
}

/*
	In this example, the placeholder types 'type1' and 'type2' are replaced by the compiler with the data types 'int' and 'char' and 'double'
	and 'long', respectively, when the compiler generates the specific instances of 'myfunc()'.

	Remember: When you create a generic function, you are, in essence, allowing the compiler to generate as many different vesions of that
	function as necessary to handle the various ways that your program calls that function.

	This program displays the following when ran:

	$ ./Ch11_Sec1_Example4
	10 hi
	0.23 10


*/
