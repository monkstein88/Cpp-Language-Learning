
/*
	Exercise 1.: Functions can be overloaded as long as the number or type of their parameters differs.
	Overload 'loadstack()' from Exercise 5 of th Mastery Skills Check so that it takes an integer, called
	'upper', as a parameter. In the overloaded version, if 'upper' is 1, load the stack with the uppercase
	alphabet. Otherwise, load it with the lowercase alphabet.
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

// Load a stack with the letters of the alphabet (only small letters)
stack loadstack(){
	stack alphabet;
	for(char i = 'z'; i >= 'a'; i--){  // Load the alphabet characters in the stack in reverse order - so when they are printed (poped) out
			alphabet.push(i);  						 // they are done so incrementally.
	}
	return alphabet;
}

// Load a stack with the letters of the alphabet (either small or capital)
stack loadstack(int upper){
	stack alphabet;
	if(upper == 1){
		for(char i = 'Z'; i >= 'A'; i--){ // Load the alphabet characters in the stack in reverse order - so when they are printed (poped) out
			alphabet.push(i); 							// they are done so incrementally.
		}
		return alphabet;
	}
	else{
		for(char i = 'z'; i >= 'a'; i--){  // Load the alphabet characters in the stack in reverse order - so when they are printed (poped) out
				alphabet.push(i);  						 // they are done so incrementally.
		}
		return alphabet;
	}
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

	cout << "Print out the alphabet (in capital letters):\n";
	ob1 = loadstack(1);
	showstack(ob1);

	cout << "\n";

	cout << "Print out the alphabet (in small letters):\n";
	ob1 = loadstack(0);
	showstack(ob1);

	exit(EXIT_FAILURE);
}
