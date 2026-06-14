/*
	Example 2.: Here is another example of a generic class. It is a reworking of the 'stack' class first introduced in Chapter 1. However,
	in this case, 'stack' has been made into a template class. Thus, it can be used to store any type of object. In the example, shown here,
	a character stack and a floating-point stack are created:
*/

// This function demonstrates a generic stack.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define SIZE (10)

// Create a generic stack class
template <class StackType> class stack{
	StackType stck[SIZE]; // holds the stack
	int tos; // index of top of stack
public:
	void init(){ tos = 0; }; // initialize stack
	void push(StackType ch); // push object on stack
	StackType pop(); // pop object from stack
};

// Push an object
template <class StackType>
void stack<StackType>::push(StackType ch){

	if(tos==SIZE){
		cout << "Stack is full.\n";
		return;
	}

	stck[tos] = ch;
	tos++;
}

// Pop an object
template <class StackType>
StackType stack<StackType>::pop(){

	if(tos == 0){
		cout << "Stack is empty.\n";
		return 0; // return null on empty stack
	}

	tos--;
	return stck[tos];
}

int main(){
	// Demonstrate character stacks.
	stack<char> s1, s2; // create two stacks
	int i;

	// initialize stacks
	s1.init();
	s2.init();

	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');

	for(i=0; i<3; i++)
		cout << "Pop s1: " << s1.pop() << "\n";
	for(i=0; i<3; i++)
		cout << "Pop s2: " << s2.pop() << "\n";

	// demonstrate double stacks
	stack<double> ds1, ds2; // create two stacks

	// initialize stacks
	ds1.init();
	ds2.init();

	ds1.push(1.1);
	ds2.push(2.2);
	ds1.push(3.3);
	ds2.push(4.4);
	ds1.push(5.5);
	ds2.push(6.6);

	for(i=0; i<3; i++)
		cout << "Pop ds1: " << ds1.pop() << "\n";
	for(i=0; i<3; i++)
		cout << "Pop ds2: " << ds2.pop() << "\n";


	return EXIT_SUCCESS;
}

/*
	As the 'stack' class (and the preceding 'list' class) illustrates, generic function and classes provide a powerful tool that you can use
	to maximize your programming time because they allow you to define the general form of an algorithm that can be used with any type of
	data. You are saved from the tedium of creating separate implmentations for each type that you want tthe algorithm to work with.

	This program displays the following when ran:

	$ ./Ch11_Sec2_Example2.exe
	Pop s1: c
	Pop s1: b
	Pop s1: a
	Pop s2: z
	Pop s2: y
	Pop s2: x
	Pop ds1: 5.5
	Pop ds1: 3.3
	Pop ds1: 1.1
	Pop ds2: 6.6
	Pop ds2: 4.4
	Pop ds2: 2.2

*/
