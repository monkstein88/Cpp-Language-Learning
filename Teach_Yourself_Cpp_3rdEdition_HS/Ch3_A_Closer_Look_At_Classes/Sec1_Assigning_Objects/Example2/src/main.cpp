
/*
	Example 2.: It is important to understand that all data members of one object are assigned to another
	when an assignment is performed. This includes compound data such as arrays. For example, in the following
	version of the 'stack' example, only 's1' has any characters actually pushed onto it. However, because
	of the assignment, 's2's 'stck' array will also contain the characters 'a', 'b' and 'c';

*/ 
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

#define SIZE 10

class stack{
	char stck[SIZE]; // holds the stack
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
	if(tos==SIZE){
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

int main(){
	// Create two stacks that are automatically initialized.
	stack s1, s2;
	int i;
	
	s1.push('a');
	s1.push('b');
	s1.push('c');
	
	// clone s1
	s2 = s1; // now 's1' and 's2' are identical
	
	for(i=0; i<3; i++)
		cout << "Pop s1: " << s1.pop() << "\n";
	
	for(i=0; i<3 ; i++)
		cout << "Pop s2: " << s2.pop() << "\n";

	return EXIT_SUCCESS;
}

