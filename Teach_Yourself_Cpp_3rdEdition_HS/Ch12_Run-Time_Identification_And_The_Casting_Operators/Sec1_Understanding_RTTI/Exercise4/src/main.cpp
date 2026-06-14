
/*
	Exercise 4.: Given this fragment, show how to determine whether 'p' is pointing to a 'D2' object.
*/
#include <iostream>
#include <typeinfo> // for 'typeid()', 'type_info' and so on.
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class B{
	virtual void f(){}
};

class D1 : public B{
	void f() {}
};

class D2 : public B{
	void f() {}
};

int main(){
	B *p;
	D1 ob1;
	D2 ob2;

	p = &ob1;
	if(typeid(*p) == typeid(D1)){
		cout << "'p' is pointing to an object of type ";
		cout << typeid(*p).name() << endl;
	}

	p = &ob2;
	if(typeid(*p) == typeid(D2)){
		cout << "'p' is pointing to an object of type ";
		cout << typeid(*p).name() << endl;
	}
	return EXIT_SUCCESS;
}

/*
	My answer:
		- Well, this is quite a peculiar case, because every member of these classes is private, and when 'D1' and 'D2' inherit 'B', the
		function 'f()' is not accessible to classes 'D1' and 'D2', as it remains private to class 'B'. So for me it is not clear how exactly
		are 'D1' and 'D2' supposed to override the 'f()' from 'B'. But it seems to work :)

		This program displays the following when ran:

		$ ./Ch12_Sec1_Exercise4.exe | c++filt -t
		'p' is pointing to an object of type D1
		'p' is pointing to an object of type D2


	Official answer:
		-   if(typeid(*p) == typeid(D2)) ...

*/
