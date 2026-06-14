
/*
	Exercise 1.: In Example 3, if only 'myclass(int)' is made explicit, will 'myclass(char *)' still allow implicit conversions?
	(Hint: Try it)
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass
{
	int a;
public:
	explicit myclass(int x) { a = x; }
	myclass(const char *str) { a = atoi(str); }
	int geta(){ return a; }
};

int main()
{
	myclass ob1(4); // converts to 'myclass(4)'
	myclass ob2 ="123"; // converts to 'myclass("123")'

	// use automatic conversions to assign new values
	ob1 = "1776"; // converts into 'ob1 = myclass("1776");'
	//ob2 = 2001; // converts into 'ob2 = myclass(2001);'

	cout << "ob1: " << ob1.geta() << endl;
	cout << "ob2: " << ob2.geta() << endl;

	return EXIT_SUCCESS;
}

/*
	My answer:
		- (Before trying) - Not sure, maybe.

		- (After trying) - it looks like not exactly, because the statement 'ob2 = 2001; ' is still present and because the constructor for
		'int' had been made 'explicit', the program will not compile.


		$ make
		g++ -std=c++17 -pthread -pedantic-errors -Wall -Wextra -Werror -Iinc/  -lstdc++ -lm      -o build/obj/src/main.o -c src/main.cpp
		src/main.cpp: In function 'int main()':
		src/main.cpp:22:16: error: invalid conversion from 'int' to 'const char*' [-fpermissive]
		  myclass ob1 = 4; // converts to 'myclass(4)'
		                ^
		src/main.cpp:16:22: note:   initializing argument 1 of 'myclass::myclass(const char*)'
		  myclass(const char *str) { a = atoi(str); }
		          ~~~~~~~~~~~~^~~
		src/main.cpp:27:8: error: ambiguous overload for 'operator=' (operand types are 'myclass' and 'int')
		  ob2 = 2001; // converts into 'ob2 = myclass(2001);'
		        ^~~~
		src/main.cpp:11:7: note: candidate: 'constexpr myclass& myclass::operator=(const myclass&)' <near match>
		 class myclass
		       ^~~~~~~
		src/main.cpp:11:7: note:   conversion of argument 1 would be ill-formed:
		src/main.cpp:27:8: error: invalid user-defined conversion from 'int' to 'const myclass&' [-fpermissive]
		  ob2 = 2001; // converts into 'ob2 = myclass(2001);'
		        ^~~~
		src/main.cpp:16:2: note: candidate is: 'myclass::myclass(const char*)' <near match>
		  myclass(const char *str) { a = atoi(str); }
		  ^~~~~~~
		src/main.cpp:16:2: note:   conversion of argument 1 would be ill-formed:
		src/main.cpp:27:8: error: invalid conversion from 'int' to 'const char*' [-fpermissive]
		  ob2 = 2001; // converts into 'ob2 = myclass(2001);'
		        ^~~~
		src/main.cpp:27:8: error: invalid conversion from 'int' to 'const char*' [-fpermissive]
		src/main.cpp:16:22: note:   initializing argument 1 of 'myclass::myclass(const char*)'
		  myclass(const char *str) { a = atoi(str); }
		          ~~~~~~~~~~~~^~~
		src/main.cpp:11:7: note: candidate: 'constexpr myclass& myclass::operator=(myclass&&)' <near match>
		 class myclass
		       ^~~~~~~
		src/main.cpp:11:7: note:   conversion of argument 1 would be ill-formed:
		src/main.cpp:27:8: error: invalid user-defined conversion from 'int' to 'myclass&&' [-fpermissive]
		  ob2 = 2001; // converts into 'ob2 = myclass(2001);'
		        ^~~~
		src/main.cpp:16:2: note: candidate is: 'myclass::myclass(const char*)' <near match>
		  myclass(const char *str) { a = atoi(str); }
		  ^~~~~~~
		src/main.cpp:16:2: note:   conversion of argument 1 would be ill-formed:
		src/main.cpp:27:8: error: invalid conversion from 'int' to 'const char*' [-fpermissive]
		  ob2 = 2001; // converts into 'ob2 = myclass(2001);'
		        ^~~~
		src/main.cpp:27:8: error: invalid conversion from 'int' to 'const char*' [-fpermissive]
		src/main.cpp:16:22: note:   initializing argument 1 of 'myclass::myclass(const char*)'
		  myclass(const char *str) { a = atoi(str); }
		          ~~~~~~~~~~~~^~~
		src/main.cpp:27:8: error: conversion to non-const reference type 'class myclass&&' from rvalue of type 'myclass' [-fpermissive]
		  ob2 = 2001; // converts into 'ob2 = myclass(2001);'
		        ^~~~
		make: *** [makefile:33: build/obj/src/main.o] Error 1

		- (After trying) But if the line 'ob2 = 2001;' is commented out, the program will compile and run. So if one of the constructors (
		i.e. 'myclass(int)' ) is made explicit, while the other constructor remains as before so (i.e. 'myclass(char *)'), the program will
		compile and will allow implicit conversions, but only fot the latter.

		This program displays the following when ran:

		$ ./Ch13_Sec5_Exercise1.exe
		ob1: 1776
		ob2: 123

	Official answer:
		- Yes.

*/
