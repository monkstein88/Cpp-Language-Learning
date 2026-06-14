
/*
	Exercise 2.: One interesting use of a 'static' member variable is to keep track of the number of objects of a class that are in
	existence at any given point in time. The way to do this is to increment a 'static' member variable each time the class' constructor is
	called and decrement it each tiem the clas' destructor is called. Implement such a scheme and demonstrate that it works.

*/


#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myobject{
	static int instances;
public:
	myobject(){ instances++; }
	~myobject(){ instances--; }
	int get_i(){ return instances; }

};

int myobject::instances = 0;

int main(){

	cout << "Generating objects..." << endl;
	myobject ob1, ob2, ob3, ob4;

	cout << "Number of objects instantiated: " << ob1.get_i() << endl;
	ob1.~myobject();
	ob2.~myobject();
	ob3.~myobject();
	//ob4.~myobject();

	cout << "Destructing objects..." << endl;
	cout << "Number of objects remaining: " << ob1.get_i() << endl;
	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch13_Sec3_Exercise2.exe
	Generating objects...
	Number of objects instantiated: 4
	Destructing objects...
	Number of objects remaining: 1


*/
