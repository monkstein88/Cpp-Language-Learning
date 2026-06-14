
/*
	Example 2.: Given the following fragment and using 'dynamic_cast', show how you can assign 'p' a pointer to some object 'ob' if and only
	if 'ob' is a 'D2' object.

	class B{
		virtual void f() {}
	};

	class D1 : public B{
		void f() {}
	};

	class D2 : public B{
		void f() {}
	};

*/

#include <iostream>
#include <typeinfo>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class B{
	virtual void f() {}
};

class D1 : public B{
	void f() {}
};

class D2 : public B{
	void f() {}
};


int main(){
	B *p;
	D2 ob;

	p = dynamic_cast<D2 *> (&ob);
	if(p){
		cout << "Success - casting 'D2' pointer to 'B' pointer\n";
	}
	else{
		cout << "Error - casting 'D2' pointer to 'B' pointer\n";
	}

	return EXIT_SUCCESS;
}




/*
	My answer:
	(Essentially:)
		- p = dynamic_cast<D2*> &ob;

	My program displays the following when ran:

	$ ./Ch12_Sec2_Exercise2.exe
	Success - casting 'D2' pointer to 'B' pointer

*/
