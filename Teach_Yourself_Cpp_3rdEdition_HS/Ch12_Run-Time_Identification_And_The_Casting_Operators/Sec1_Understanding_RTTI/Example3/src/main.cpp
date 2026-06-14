
/*
	Example 3.: Although obtaining the type name of an object is useful in some circuimstances often all you need to know is whether the
	type of one object matches that of another. Since the 'type_info' object returned by 'typeid()' overloads the == and != operators, this
	too is easy to accomplish. The following program demonstrates the use of these operators.

	Note: The output differs from compiler to compiler. For GCC the output for int is i, for unsigned is j, for example. So, (GCC's) G++
	uses implementation-defined naming for the types, but it also offers the utility c++filt to make them human-readable:
	$ ./test | c++filt -t
*/

// Demonstrate '==' and '!=' relative to 'typeid()'.
#include <iostream>
#include <typeinfo> // for 'typeid()', 'type_info' and so on.
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class X{
	virtual void f() {}
	// ...
};

class Y{
		virtual void f() {}
		// ...
};

int main(){
	X x1, x2;
	Y y1;

	if(typeid(x1) == typeid(x2))
		cout << "x1 and x2 are same types\n";
	else
		cout << "x1 and x2 are different types\n";

	if(typeid(x1) != typeid(y1))
		cout << "x1 and y1 are different types\n";
	else
		cout << "x1 and y1 are same types\n";

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch12_Sec1_Example3.exe
	x1 and x2 are same types
	x1 and y1 are different types


*/
