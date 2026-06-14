
/*
	Exercise 1.: Using the 'stack' example from Section 3.1, Example 2, add function called 'showstack()'
	that is passed an object of type 'stack'. Have this function display the contents of a stack.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

#define STK_SIZE 100

class stack{
	char stck[STK_SIZE]; // holds the stack
	int tos; // index of top of stack
public:
	stack(); // constructor
	void push(char ch); // push character on stack
	char pop(); // pop character from stack
};

// Initilize the stack
stack::stack(){
	cout << "Constructing a stack\n";
	tos = 0;
}

// Push a character.
void stack::push(char ch){
	if(tos==STK_SIZE){
		cout << "Stack is full\n";
		return;
	}
	stck[tos] = ch;
	tos++;
}

// Pop a character.
char stack::pop(){
	if(tos==0){
		cout << "Stack is empty\n";
		return 0; // return on empty stack
	}
	tos--;
	return stck[tos];
}


void showstack(stack stk){
	char chr;
	while((chr = stk.pop()) != 0){
		cout << chr << "\n";
	}
	//cout << "\n";
}

int main(){
	// Create two stacks that are automatically initialized.
	stack s1;

	s1.push('a');
	s1.push('b');
	s1.push('c');
	showstack(s1);
	cout << "Original s1 stack still contains this: "<< "\n";
	for(int i=0; i<3; i++){
		cout << s1.pop() << "\n";
	}

	return EXIT_SUCCESS;
}
