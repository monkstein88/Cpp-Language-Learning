/*
	Exercise 4.: Rework the 'stack' class so that it can store pairs of different-type objects on the stack. Demonstrate your solutions.

	Note: Using the stack class from Chapter 11, Section 2, Example 2
*/

#include <iostream>
#include <cstdlib>
using namespace std;


// This function demonstrates a generic stack.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define SIZE (10)

// Create a generic stack class
template <class obj1, class obj2> class stack{
	obj1 stck1[SIZE]; // holds the stack for items of type 'obj1'
	obj2 stck2[SIZE]; // holds the stack for items of type 'obj2'
	int tos; // index of top of stack
public:
	void init(){ tos = 0; }; // initialize stack
	void push(obj1 ob1, obj2 ob2); // push object on stack
	void pop(obj1 &ob1, obj2& ob2); // pop object from stack
};

// Push an object
template <class obj1, class obj2>
void stack<obj1, obj2>::push(obj1 ob1, obj2 ob2){

	if(tos==SIZE){
		cout << "Stack is full.\n";
		return;
	}

	stck1[tos] = ob1;
	stck2[tos] = ob2;
	tos++;
}

// Pop an object
template <class obj1, class obj2>
void stack<obj1, obj2>::pop(obj1& ob1, obj2& ob2){

	if(tos == 0){
		cout << "Stack is empty.\n";
		return ; // return null on empty stack
	}

	tos--;
	ob1 = stck1[tos];
	ob2 = stck2[tos];
}

int main(){
	// Demonstrate character stacks.
	stack<char, char> s1, s2; // create two stacks
	char ob1, ob2;
	int i;

	// initialize stacks
	s1.init();
	s2.init();

	s1.push('a','A');
	s2.push('x','X');
	s1.push('b','B');
	s2.push('y','Y');
	s1.push('c','C');
	s2.push('z','Z');

	for(i=0; i<3; i++){
		s1.pop(ob1,ob2); cout << "Pop s1: " << ob1 << ' ' << ob2 << "\n";}
	for(i=0; i<3; i++){
		s2.pop(ob1,ob2); cout << "Pop s2: " << ob1 << ' ' << ob2 << "\n";}

	// demonstrate double stacks
	stack<double,int> ds1, ds2; // create two stacks
	double x1;
	int x2;
	// initialize stacks
	ds1.init();
	ds2.init();

	ds1.push(1.1,0);
	ds2.push(2.2,-3);
	ds1.push(3.3,4);
	ds2.push(4.4,100);
	ds1.push(5.5,223);
	ds2.push(6.6,-255);

	for(i=0; i<3; i++){
		ds1.pop(x1, x2); cout << "Pop ds1: " << x1 << ' ' << x2 << "\n";}
	for(i=0; i<3; i++){
		ds2.pop(x1, x2); cout << "Pop ds2: " << x1 << ' ' << x2 << "\n";}


	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch11_Mastery_Skills_Check_Exercise4.exe
	Pop s1: c C
	Pop s1: b B
	Pop s1: a A
	Pop s2: z Z
	Pop s2: y Y
	Pop s2: x X
	Pop ds1: 5.5 223
	Pop ds1: 3.3 4
	Pop ds1: 1.1 0
	Pop ds2: 6.6 -255
	Pop ds2: 4.4 100
	Pop ds2: 2.2 -3


*/
