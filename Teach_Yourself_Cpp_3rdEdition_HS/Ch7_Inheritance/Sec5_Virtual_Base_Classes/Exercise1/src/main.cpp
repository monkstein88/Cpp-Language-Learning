
/*
	Exercise 1.: Using the program in Example 1, remove the 'virtual' keyword and try to compile the program. See what ypes of
	errors result.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
public:
	int i;
};

// Inherit 'base' as virtual.
class derived1: public base{
public:
	int j;
};

// Inherited 'base' as virtual.
class derived2 : public base{
public:
	int k;
};

/*
	Here, 'derived3' inherits both 'derived1' and 'derived2'. 'virtual' keyword is omitted intentionally
*/
class derived3 : public derived1 , public derived2{
public:
	int product(){ return i*j*k; }
};

int main(){
	derived3 ob;

	ob.i = 10; // unambiguous because only one copy present
	ob.j = 3;
	ob.k = 5;

	cout << "Product is " << ob.product() << '\n';

	return EXIT_SUCCESS;
}

/*
	My answer:
		- The type of errors coming out are:

		src/main.cpp: In member function 'int derived3::product()':
		src/main.cpp:33:24: error: reference to 'i' is ambiguous
		  int product(){ return i*j*k; }
		                        ^
		src/main.cpp:13:6: note: candidates are: 'int base::i'
		  int i;
		      ^
		src/main.cpp:13:6: note:                 'int base::i'
		src/main.cpp: In function 'int main()':
		src/main.cpp:39:5: error: request for member 'i' is ambiguous
		  ob.i = 10; // unambiguous because only one copy present
		     ^
		src/main.cpp:13:6: note: candidates are: 'int base::i'
		  int i;
		      ^
		src/main.cpp:13:6: note:                 'int base::i'
		make: *** [makefile:32: build/obj/src/main.o] Error 1


		This tells us that there are amgigious references to the varaible 'i'.

*/
