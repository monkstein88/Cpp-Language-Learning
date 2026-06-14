
/*
	Exercise 1.: Change the 'stack' class so it dynamically allocates memory for
	the stack. Have the size of the stack specified by a parameter to the constructor
	function. (Don't forget to free this memory with a destructor function.)
*/

#include <iostream>
#include <cstdlib>
using namespace std;

//#define S_SIZE (10)

// Declare a stack class for characters.
class stack{
	char* p_stck; // pointer to the beginning of the stack
	int size; //
	int tos; // index of top of stack
public:
	stack(int s); // constructor
	~stack(); // destructor
	void push(char ch); // push character on stack
	char pop(); // pop character from stack
};

// Initialize the stack
stack::stack(int s){
	if(!s){
		cout << "Empty stack specified!\n";
		exit(EXIT_FAILURE);
	}
	p_stck = (char*) malloc(s);
	if(!p_stck){
		cout << "Allocation error!\n";
		exit(EXIT_FAILURE);
	}
	tos = 0;
	size = s;
	cout << "Constructing a stack\n";
}

// Free up the stack
stack::~stack(){
	cout << "Freeing up stack\n";
	free(p_stck);
}

// Push a character.
void stack::push(char ch){
	if(tos==size){
		cout << "Stack is full\n";
		return;
	}
	p_stck[tos] = ch;
	tos++;
}

// Pop a character.
char stack::pop(){
	if(tos==0){
		cout << "Stack is empty\n";
		return 0; // return null on empty stack
	}
	tos--;
	return p_stck[tos];
}

int main(){
	// Create two stacks that are automatically initialized.
	stack s1(5), s2(0);
	int i;

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
