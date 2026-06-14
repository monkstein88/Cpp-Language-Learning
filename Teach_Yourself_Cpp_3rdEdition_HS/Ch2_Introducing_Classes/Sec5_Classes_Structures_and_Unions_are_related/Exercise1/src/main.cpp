
/*
	Exercise 1.: Rewrite the 'stack' class presented in Section 2.1 so it uses a structure rather than a class.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;


//#define S_SIZE (10)

// Declare a stack class for characters.
struct stack{
	stack(int s); // constructor
	~stack(); // destructor
	void push(char ch); // push character on stack
	char pop(); // pop character from stack
private:	
	char* p_stck; // pointer to the beginning of the stack
	int size; //
	int tos; // index of top of stack

};

stack::stack(int s){
	cout << "Constructing a stack... ";
	if(!s){
		cout << "Empty stack specified!\n";
		exit(EXIT_FAILURE);
	}
	if(s < 0){
		cout << "Negative stack specified!\n";
		exit(EXIT_FAILURE);
	}
	p_stck = (char*) malloc(s);
	if(!p_stck){
		cout << "Cannot allocate stack!\n";
		exit(EXIT_FAILURE);
	}
	tos = 0;
	size = s;
	cout << "DONE.\n";
}

stack::~stack(){
	cout << "Freeing up stack... ";
	free(p_stck);
	cout << " OK.\n"; 
	// cout << "FAIL.\n";
}

void stack::push(char ch){
	if(tos==size){
		cout << "Stack is full!";
		return;
	}
	p_stck[tos++] = ch;
}

char stack::pop(){
	if(tos==0){
		cout << "Stack is empty!";
		return 0; // return null on empty stack
	}
	return p_stck[--tos];
}

int main(){
	// Create two stacks that are automatically initialized.
	stack s1(5), s2(10);
	int i;
	
	// Put in some values in the respective stacks
	s1.push('a');
	s1.push('b');
	s1.push('c');
	s2.push('x');
	s2.push('y');
	s2.push('z');

	// This will generate some error messages
	for(i=0; i<5; i++)
		cout << "Pop s1: " << s1.pop() << "\n";
	for(i=0; i<5; i++)
		cout << "Pop s2: " << s2.pop() << "\n";

	return EXIT_SUCCESS;
}
