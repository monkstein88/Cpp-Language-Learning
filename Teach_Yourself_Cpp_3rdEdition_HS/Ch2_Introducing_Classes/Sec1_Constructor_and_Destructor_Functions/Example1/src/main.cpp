
/*
	Example 1.: recall the 'stack' class created earlier in Chapter 1.
	It required an initialialization function to set the stack index variable.
	This is precisely the sort of operation that a constructor function was
	designed to perform. Here is an improved version of the stack class that uses
	a constructor to automatically initialize a stack object whe it is created:
*/

#include <iostream>
using namespace std;

#define SIZE 10

// Declare a stack class for characters.
class stack{
	char stck[SIZE]; // holds the stack
	int tos; // index of top of stack
public:
	stack(); // constructor
	void push(char ch); // push character pm stack
	char pop(); //
};

// Initialize the stack
stack::stack(){
	cout << "Constructing a stack\n";
	tos = 0;
}

// Push a characters
void stack::push(char ch){
	if(tos == SIZE){
		cout << "Stack is full\n";
		return;
	}
	stck[tos++] = ch;
}

// Pop a character
char stack::pop(){
	if(tos == 0){
		cout << "Stack is empty\n";
		return 0;
	}
	return stck[--tos];
}


int main(){
	// Create two stacks that are automatically initialized
	stack s1, s2;
	int i;

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

	return 0;
}


/*
	When an initialization is performed automatically when an object  is created,
	it eliminates any prospect that by error, the initialization will no be performed.
	This is another way that objects help reduce program complexity.
*/
