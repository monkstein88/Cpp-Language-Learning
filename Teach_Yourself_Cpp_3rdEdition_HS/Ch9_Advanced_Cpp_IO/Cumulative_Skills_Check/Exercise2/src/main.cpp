
/*
	Exercise 2.: As a special challenge, on your own, create a 'stack' class for characters that stores them in a disk file rather
	than in an array in memory;

*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;


class stack{
	int tos;
	fstream fstk;
public:
	// Constructor - create and initialize stack
	stack(){
		cout << "Initializing stack... ";
		tos = 0;
		fstk.open("stack", ios::in | ios::out | ios::binary | ios::trunc);
		if(!fstk){
			cout << "Error!" << endl;
			exit(EXIT_FAILURE);
		}else{
			cout << "Done!" << endl;
		}
	}
	// Overloading - via friend functions:
	friend ostream& operator<<(ostream& stream, stack& ob);
	// Utility functions
	void push(char ch){
		if(fstk.good()){
			fstk.put(ch);
			tos++;
		}else{
			cout << "Error: cannot push()" << endl;
			exit(EXIT_FAILURE);
		}
	}
	char pop(){
		char ch;

		if(fstk.good()){
			if(tos == 0){
				cout << "Stack is empty" << endl;
				ch = 0; // return null on empty
			}else{
				tos--;
				fstk.seekg(tos*sizeof(char),ios::beg);
				if(fstk.good()){
					fstk.get(ch);
				}else{
					cout << "Error: cannot pop()" << endl;
					exit(EXIT_FAILURE);
				}
			}
		}
		return ch;
	}
};

// Inserter function
ostream& operator<<(ostream& stream, stack& ob){

	if(ob.fstk.tellg() == 0)
		stream << "Error: Stack is empty\n";
	else
		while(ob.fstk.tellg() > 0)
			stream << ob.pop();

	return stream;
}

int main(){
	stack s1;

	cout << "Fill in the stack:\n";
	s1.push('a');
	cout << 'a' << endl;
	s1.push('b');
	cout << 'b' << endl;
	s1.push('c');
	cout << 'c' << endl;
	s1.push('d');
	cout << 'd' << endl;

	cout << "Read out the stack s1:" << '\n';
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;


	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch9_Cumulative_Skills_Check_Exercise2.exe
	Initializing stack... Done!
	Fill in the stack:
	a
	b
	c
	d
	Read out the stack s1:
	d
	c
	b
	a

*/
