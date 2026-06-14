
/*
	Exercise 1.1.: On your own, experiment with the two example programs. Specifically, try creating an object by using 'area' from
	Example 1 and observe the error message. In Example 2, try removing the redefinition of 'func()' within 'derived2'. Confirm
	that, indeed, the version inside 'derived1' is used.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class area{
	double dim1, dim2;
public:
	void setarea(double d1, double d2){
		dim1 = d1;
		dim2 = d2;
	}
	void getdim(double& d1, double& d2){
		d1 = dim1;
		d2 = dim2;
	}
	virtual void getarea() = 0; // pure virtual function
};


int main(){
	area ob;

	ob.setarea(3.3, 4.5);

	return EXIT_SUCCESS;
}

/*

	This program cannot compile due to reasons:

	$ make
	g++ -std=c++2a -pthread -pedantic-errors -Wall -Wextra -Werror -Iinc/  -lstdc++ -lm      -o build/obj/src/main.o -c src/main.cpp
	src/main.cpp: In function 'int main()':
	src/main.cpp:29:7: error: cannot declare variable 'ob' to be of abstract type 'area'
	  area ob;
	       ^~
	src/main.cpp:13:7: note:   because the following virtual functions are pure within 'area':
	 class area{
	       ^~~~
	src/main.cpp:24:15: note:       'virtual void area::getarea()'
	  virtual void getarea() = 0; // pure virtual function
	               ^~~~~~~
	make: *** [makefile:32: build/obj/src/main.o] Error 1

*/
