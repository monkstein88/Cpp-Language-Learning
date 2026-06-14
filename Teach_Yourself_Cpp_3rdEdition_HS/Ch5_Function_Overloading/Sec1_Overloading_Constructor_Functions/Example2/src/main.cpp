
/*
	Example 2.: Another common reason constructor functions are overloaded is to allow both individual objects and arrays
	of objects to occur within a program. As you probably know from your own programming experience, it is fairly common
	to initialize a single variable, but it is not as common to initializae an array. (Quite often array values are
	assigned using information known only when the program is executing.)
	Thus, to allow non-initialized arrays of objects you must include a constructor that supports initialization and one
	that does not.

	For instance, assuming the class 'myclass' from Example 1, both of these declarations are valid:

	myclass ob(10);
	myclass ob[5];

	By providing both a parameterized and a parameterless constructor, your program allows the creation of objects that are
	either initialized or not as needed.

	Of course, once you have defined both parameterized and parameterless constructors you can use them to create initialized
	and non-initialized arrays. For example, the following program declares two arrays of type 'myclass'; one is initialized
	and the other one is not:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass{
	int x;
public:
	// overload constructor two ways
	myclass(){ x = 0;}
	myclass(int n){ x = n; } // initializer
	int getx(){ return x; }
};

int main(){
	myclass o1[10]; // declare array without initializers

	// declare with initializer
	myclass o2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int i;

	for(i=0; i<10; i++){
		cout << "o1[" << i << "]: " << o1[i].getx();
		cout << '\n';
		cout << "02[" << i << "]: " << o2[i].getx();
		cout << '\n';
	}

	return EXIT_SUCCESS;
}


/*
 	In this example, all elements of 'o1' are set to 0 by the constructor function. The elements of 'o2' are initialized as
	shown in the program. 
*/
