
/*
	Exercise 5.: Using the 'stack' class, write a function called 'loadstack()' that returns a stack that is
	already loaded with the letters of the alphabet(a-z). Assign this stack to another object in the calling
	routine and prove that it contains the alphabet. Be sure to change the stack size so it is large enought
	to hold the alphabet.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define STK_SIZE 100

class stack{
	char stck[STK_SIZE]; // holds the stack
	int tos; // index of top of stack
public:
	stack(); // constructor
	void push(char ch); // push character on stack
	char pop(); // pop character from stack
	int get_tos(){ return tos;}
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

// Load the alphabet characters in the stack in reverse order - so when they are printed (poped) out
// they are done so incrementally.
stack loadstack(){
	stack alphabet;
	for(char i = 'z'; i >= 'a'; i--){
		alphabet.push(i);
	}
	return alphabet;
}

void showstack(stack stk){
	char chr;
	while((chr = stk.pop()) != 0){
		cout << chr << "\n";
	}
	//cout << "\n";
}


int main(){
	stack ob1;

	ob1 = loadstack();
	cout << "Print out the alphabet:\n";
	showstack(ob1);

	exit(EXIT_FAILURE);
}
