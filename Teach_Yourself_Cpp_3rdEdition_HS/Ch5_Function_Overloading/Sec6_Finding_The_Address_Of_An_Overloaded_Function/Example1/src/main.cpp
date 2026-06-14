
/*
	Example 1.: Here is a program that contains two versions of a function called 'space()'. The first version outputs 'count'
	number of spaces to the screen. The second version outputs 'count' number of whatever type of character is passed to 'ch'.
	In 'main()', two function pointers are declared. The first one is specified as a pointer to a function having only one
	integer parameter. The second is declared as a pointer to a function taking two parameters.
*/


// Illustrate assigning function pointers to overloaded functions.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// Output count number of spaces.
void space(int count){

	for(;count;count--)
		cout << ' ';
}

// Output count number of chs.
void space(int count , char ch){

	for(; count; count--)
		cout << ch;
}

int main(){
	// Create a pointer to void function with one 'int' parameter
	void (*fp1)(int);
	// Create a pointer to void function with one 'int' parameter and one 'char' parameter;
	void (*fp2)(int, char);

	fp1 = space; // gets address of 'space(int)';

	fp2 = space; // gets address of 'space(int, char)'

	fp1(22); // output 22 spaces
	cout << "|\n";

	fp2(30, 'x'); // output 30 'x's
	cout << "|\n";

	return EXIT_SUCCESS;
}

/*
	As the comments illustrate, the compiler is able to determine which overloaded function to obtain the address of based upon
	how 'fp1' and 'fp2' are declared.

	To review: When you assign the address of an overloaded function to a function pointer, it is the declaration of the pointer
	that determines which function's address is assigned. Further, the declaration of the function pointer must exactly match one
	and only one of the overloaded functions. If it does not, ambiguity will be introduced, causing a compile-time error.
*/
