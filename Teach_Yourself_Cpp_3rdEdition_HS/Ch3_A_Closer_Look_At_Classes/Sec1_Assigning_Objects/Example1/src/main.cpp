
/*
	Example 1.: Only objects of the same type can be used in an assignment statement. If the objects are
	not of the same type, a compile-time error is reported. Further, it is not sufficient that the types
	just be physically similar - their type names must be the same. For example, this is not valid program:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class myclass{
	int a, b;
public:
	void set(int i, int j){ a = i; b = j; }; 
	void show(){ cout << a << ' ' << b << "\n";}
};

/*
	This calss is similar to myclass but uses a 
	different class name and thus appears as a different
	type to the compiler.
*/ 

class yourclass{
	int a, b;
public:
	void set(int i, int j){ a = i; b = j; }; 
	void show(){ cout << a << ' ' << b << "\n";}
};

int main(){
	myclass o1;
	yourclass o2;
	
	o1.set(10, 4);
	
	o2 = o1; // ERROR , objects not of same type 
		// src/main.cpp:38:7: error: no match for 'operator=' (operand types are 'yourclass' and 'myclass')
	o1.show();
	o2.show();
	
	return EXIT_SUCCESS;
}

/* 
	In this case, even though 'myclass' and 'yourclass' are physically the same, because they have different
	type names, they are treated as different types by the compiler.
*/

/* THIS WILL NOT COMPILE */