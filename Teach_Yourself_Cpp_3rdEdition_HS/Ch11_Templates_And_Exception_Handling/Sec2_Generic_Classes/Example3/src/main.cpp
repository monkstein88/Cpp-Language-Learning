/*
	Example 3.: A template class can have more than one generic data type. Simply declare all the data types required by the class in a
	comma-separated list within the 'template' specification. For example, the follwoing short example creates a class that uses two generic
	data types:
*/

// This example uses two generic data types in a class definition
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

template <class Type1, class Type2> class myclass{
	Type1 i;
	Type2 j;
public:
	myclass(Type1 a, Type2 b){ i = a;  j = b;}
	void show() { cout << i << ' ' << j << '\n'; }
};

int main(){
	myclass<int, double> ob1(10, 0.23);
	myclass<char, const char*> ob2('X', "This is a test");

	ob1.show();
	ob2.show();

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch11_Sec2_Example3.exe
	10 0.23
	X This is a test

	The program declares two types of objects. 'ob1' uses integer and 'double' data. 'ob2' uses a character and character pointer. For both
	cases, the compiler automatically generates the appropriate data and functions to accommodate the way the objects are created.
*/
