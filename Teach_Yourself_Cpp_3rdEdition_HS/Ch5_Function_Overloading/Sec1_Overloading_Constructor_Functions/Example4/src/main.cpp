
/*
	Example 4.: There is one other situation in which you will need to overload a class's constructor function: when a
	dynamic array of that class will be allocated. As you should recall from the the preceding chapter, a dynamic array
	cannot be initialized. Thus, if the class contains a constructor that takes an initializer, you must include an
	overloaded version that takes no initializer. For example, here is a programm that allocates an object array dynamically:
*/


#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass{
	int x;
public:
	// overload constructor two ways
	myclass() { x = 0; }
	myclass(int n) { x = n; }
	int getx(){ return x; }
};

int main(){
	myclass *p;
	myclass ob(10);  // initialize single variable

	p = new myclass [10]; // can't use initializers here
	if(!p){
		cout << "Allocation error\n";
		return 1;
	}
	int i;
	// initialize all elements of 'ob'
 	for(i=0; i<10; i++)
 		p[i] = ob;

	for(i=0; i<10; i++){
		cout << "p[" << i << "]: " << p[i].getx();
		cout << '\n';
	}

	return EXIT_SUCCESS;
}

/*
	Without the overloaded version of 'myclass()' that has no initializer, the 'new' statement would have generated a
	compile-time error and the program would not have been compiled.
*/
