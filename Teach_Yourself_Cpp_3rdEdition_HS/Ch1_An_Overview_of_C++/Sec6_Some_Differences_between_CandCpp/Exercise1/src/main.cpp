
/*
	Exercise 1.: The following program will not compile as a C++ program. Why not?
*/
	#include <iostream>
	using namespace std;

	int main()
	{

		f();

		return 0;
	}

	void f()
	{
		cout << "this won't work";
	}
/*
	My answer:
		- It will not work because there is no function prototype declared fo 'f()'.

	Official answer:
		- The function f() is not prototyped.
*/
