
/*
	Exercise 2.: Explain what is wrong with the following program and then fix it.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass{
	int* p;
public:
	myclass(int i); // 'normal' constructor
	myclass(const myclass &src); // 'copy' constructor
	~myclass(){ delete p; }
	friend int getval(myclass o);
};

// Normal constructor
myclass::myclass(int i){
	p = new int;
	if(!p){
		cout << "Normal constructor - allocation error" << "\n";
		exit(EXIT_FAILURE);
	}
	*p = i;
}

// Copy constructor
myclass::myclass(const myclass &src){
	p = new int;
	if(!p){
		cout << "Copy constructor - allocation error" << "\n";
		exit(EXIT_FAILURE);
	}
	*p = *src.p;
}

int getval(myclass o){ // This passing of object
	return *o.p; // get value
}


int main(){
	myclass a(1), b(2);

	cout << getval(a) << " " << getval(b);
	cout << "\n";
	cout << getval(a) << " " << getval(b);

	return EXIT_SUCCESS;
}


/*
	My answer:
		The 'friend' type function is bizare in its use here. It's usually used when a single function needs to access
		 a member or members of two different type of classes. But in this program, we have only one type of class - 'myclass'
		(there is no other type of class present). The actual wrong here is that the second set of printing out the 'a' and 'b'
		objects '*p' values via 'getval()'. The printed values are wrong - some 'magic numbers' are shown. This is caused, because
		'myclass' has no copy constructor, and when the 'a' and 'b' get declared & initialized at the same time, and then passed to
		'getval()', the values is passed in a normal fashion (bitwise) as identical copy to 'getval()', and when the function
		terminates, the dynamically allocated memory gets freed, and the original memory reserved in 'a' and 'b' also gets destroyed
		(bitwise copy points to the same memory address)

		There are two solutions:
			- make getval, a member of the class (public) function, without passing any arguments to it:
			"
			public:
				...
				int getval(){ return *p; }
				...
			"
			- add a typical 'copy' constructor for 'myclass '- declare it and define it inside the 'myclass' class , as a normal members
			"
			public:
				...
				myclass(const myclass &src){
					p = new int;
					if(!p){
						cout << "Copy constructor - allocation error" << "\n";
						exit(EXIT_FAILURE);
					}
					*p = *src.p;
			"

		Official answer:
		As the program is written, when an object is passed to getval() a bitwise copy is made. When getval() returns and that copy
		is destroyed, the memory allocated to that object (which is pointed to by p) is released. However, this is the same memory
		still required by the object used in the call to getval().

*/
