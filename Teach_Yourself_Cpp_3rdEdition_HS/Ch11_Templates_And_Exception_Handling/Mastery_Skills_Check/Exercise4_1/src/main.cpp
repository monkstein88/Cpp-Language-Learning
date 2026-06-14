/*
	Exercise 4.: Rework the 'stack' class so that it can store pairs of different-type objects on the stack. Demonstrate your solutions.

	Note: Using the stack class from Chapter 11, Section 2, Example 2
*/
// This function demonstrates a generic stack.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define SIZE (10)

// Create a generic stack class
template <class StackType> class stack{
	StackType stck[SIZE][2]; // holds the stack
	int tos; // index of top of stack
public:
	void init(){ tos = 0; }; // initialize stack
	void push(StackType ob, StackType ob2); // push object on stack
	StackType pop(StackType &ob2); // pop object from stack
};

// Push an object
template <class StackType>
void stack<StackType>::push(StackType ob, StackType ob2){

	if(tos==SIZE){
		cout << "Stack is full.\n";
		return;
	}

	stck[tos][0] = ob;
	stck[tos][1] = ob2;
	tos++;
}

// Pop an object
template <class StackType>
StackType stack<StackType>::pop(StackType &ob2){

	if(tos==0)
	{
		cout << "Stack is empty.\n";
		return 0; // return null on empty stack
	}
	tos--;

	ob2 =  stck[tos][1];
	return stck[tos][0];
}

int main(){
	// Demonstrate character stacks.
	stack<char> s1, s2; // create two stacks
	int i;
	char ch;

	// initialize stacks
	s1.init();
	s2.init();

	s1.push('a','b');
	s2.push('x','z');
	s1.push('b','d');
	s2.push('y','e');
	s1.push('c','a');
	s2.push('z','x');

	for(i=0; i<3; i++)
	{
		cout << "Pop s1: " << s1.pop(ch);
		cout << ' ' << ch << '\n';
	}
	for(i=0; i<3; i++)
	{
		cout << "Pop s2: " << s2.pop(ch);
		cout << ' ' << ch << '\n';
	}

	// demonstrate double stacks
	stack<double> ds1, ds2; // create two stacks
	double d;
	// initialize stacks
	ds1.init();
	ds2.init();

	ds1.push(1.1, 2.0);
	ds2.push(2.2, 3.0);
	ds1.push(3.3, 4.0);
	ds2.push(4.5, 5.0);
	ds1.push(5.5, 6.0);
	ds2.push(6.6, 7.0);

	for(i=0; i<3; i++)
	{
		cout << "Pop ds1: " << ds1.pop(d);
		cout << ' ' << d << '\n';
	}
	for(i=0; i<3; i++)
	{
		cout << "Pop ds2: " << ds2.pop(d);
		cout << ' ' << d << '\n';
	}
	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch11_Mastery_Skills_Check_Exercise4_1.exe
	Pop s1: c a
	Pop s1: b d
	Pop s1: a b
	Pop s2: z x
	Pop s2: y e
	Pop s2: x z
	Pop ds1: 5.5 6
	Pop ds1: 3.3 4
	Pop ds1: 1.1 2
	Pop ds2: 6.6 7
	Pop ds2: 4.5 5


*/
