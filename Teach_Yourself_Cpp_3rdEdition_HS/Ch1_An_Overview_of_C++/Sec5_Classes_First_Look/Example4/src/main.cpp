
/*
	Example 4.: To get a taste of the power of objects, let's look at more practical example. This program creates a class called 'stack'
	that implements a stack that can be used to store characters:
*/
#include <iostream>
using namespace std;

#define SIZE 10

// Declaration of class 'stack', for storing symbols
class stack {
	char stck[SIZE]; // content of the stack
	int tos; // index for the top of the stack
public:
	void init(); // initialization of the stack
	void push(char ch); // for putting a character into the stack.
	char pop(); // for getting out and reading a character from the stack.
};

// Initialization of the stack
void stack::init(){
	tos = 0;
}

// Putting in a character in the stack
void stack::push(char ch){
	if(tos == SIZE){
		cout << "Stack is full";
		return;
	}
	stck[tos] = ch;
	tos++;
}

// Extracting a character from the stack
char stack::pop(){
	if(tos == 0){
		cout << "Stack is empty" ;
		return 0; // return null if stack is empty
	}
	tos--;
	return (stck[tos]);
}

int main(){
	stack s1, s2; // Create two stacks
	int i;
	// initialization of the stacks
	s1.init();
	s2.init();

	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');

	for(i=0; i<3; i++) cout << "Pop s1: " << s1.pop() << "\n";
	for(i=0; i<3; i++) cout << "Pop s2: " << s2.pop() << "\n";

	return 0;
}

/*
	This program displays the following output:
	Pop s1: c
	Pop s1: b
	Pop s1: a
	Pop s2: z
	Pop s2: y
	Pop s2: x


	Let's take a close look at this program now. The class 'stack' contains two private variables: 'stck' and 'tos'. The array 'stck'
	actually holds the characters pushed onto the stack, and 'tos' contains the index to the top of the stack. The public stack functions
	are 'init()', 'push()' , and 'pop()', which initialize the stack, push a value, and pop a value, respectively.

	Inside 'main()', two stacks, 's1' and 's2', are created, and three characters are pushed onto each stack. It is important to understand
	that each stack object is separate from the other. That is, the characters pushed onto 's1' in no way affect the characters pushed onto
	's2'. Each object contains its own copy of 'stck' and 'tos'. This concept is fundamental to understanding objects. Althought all objects
	of a class share their member functions, each object creates and maintains its own data. 
*/
