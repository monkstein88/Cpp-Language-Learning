
/*
	Exercise 1.: Using the 'stack' class shown here, create an inserter that displays the contents of the stack. Demonstrate that
	your inserter works.

	#include <iostream>
	using namespace std;

	#define SIZE (10)

	// Declare a stack class for characters
	class stack{
		char stck[SIZE]; // holds the stack
		int tos; // index of top-of-stack
	public:
		stack();
		void push(char ch); // push character on stack
		char pop(); // pop character from stack
	};

	// Initialize the stack
	stack::stack(){
		tos = 0;
	}

	// Push a character
	void stack::push(char ch){

		if(tos == SIZE){
			cout << "Stack is full\n";
			return 0;
		}
		stck[tos] = ch;
		tos++;
	}

	// Pop a character
	char stack::pop(){

		if(tos == 0){
			cout << "Stack is empty\n";
			return 0; // return null on empty stack
		}
		tos--;
		return stck[tos];
	}
*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define SIZE (10)

// Declare a stack class for characters
class stack{
	char stck[SIZE]; // holds the stack
	int tos; // index of top-of-stack
public:
	// Constructors:
	stack();
	// Overloading - via friend functions:
	friend ostream& operator<<(ostream& stream, stack& ob);
	// Utility functions:
	void push(char ch); // push character on stack
	char pop(); // pop character from stack
};

// Initialize the stack
stack::stack(){
	tos = 0;
}

// Inserter function
ostream& operator<<(ostream& stream, stack& ob){

	if(ob.tos == 0)
		stream << "Error: Stack is empty\n";
	else
		while(ob.tos > 0)
			stream << ob.pop();

	return stream;
}

// Push a character
void stack::push(char ch){

	if(tos == SIZE){
		cout << "Stack is full\n";
		return ;
	}
	stck[tos] = ch;
	tos++;
}

// Pop a character
char stack::pop(){

	if(tos == 0){
		cout << "Stack is empty\n";
		return 0; // return null on empty stack
	}
	tos--;
	return stck[tos];
}


int main(){
	stack s1;

	cout << "Fill in the stack.\n";
	s1.push('a');
	s1.push('b');
	s1.push('c');
	s1.push('d');

	cout << "Read out the stack s1:" << '\n';
	cout << s1;


	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	Fill in the stack.
	Read out the stack s1:
	d
	c
	b
	a

*/
