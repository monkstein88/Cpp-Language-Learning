
/*
	Exercise 1.: Conver the 'stack' class from Section 2.1, Example 1, so that it uses automatic in-line
	functions where appropriate.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

#define SIZE 10
// Declare a stack class for characters.
class stack{
	char stck[SIZE]; // holds the stack
	int tos; // index of top of stack
public:
	stack(){
		cout << "Constructing a stack\n";
		tos = 0;}// constructor - initialize the stack
	// Push a character on the stack
	void push(char ch) { 
		if(tos==SIZE){ 
			cout << "Stack is full!\n";
			return;
		}
		stck[tos] = ch;
		tos++;
	}
	// Pop a character from the stack
	char pop(){ 
		if(tos==0){
			cout << "Stack is empty!\n";
			return 0; // return null on empty stack
		}
		tos--;
		return stck[tos];
	}
};

int main(){
	// Create two stacks that are automatically initialized.
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
	
return EXIT_SUCCESS;
}