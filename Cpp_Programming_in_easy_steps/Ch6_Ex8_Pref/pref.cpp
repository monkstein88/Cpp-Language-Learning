/*
 * pref.cpp
 *
 *  Created on: 27.12.2013
 *      Author: Joro
 *
 *
 *
 *	  @Chapter: 6 - Pointing to data
 *		@Descr: This chapter demonstrates how to produce efficient C++ programs utilizing pointers and references.
 *	 @Exercise: 8
 *	    @Title: Comparing pointers and references
 *		@Brief: Pointers and references can both be used to refer to variable values and to pass them to functions by reference rather by value.
 *				Technically, passing by reference is more efficient than passinb by value so the use of pointers and references is to be encouraged.
 *
 *				The decision whether to use a pointer or a reference is determined by the program requirements. C++ programmers generally prefer to
 *				use references wherever possible as they are easier to use nad easier to understand than pointers. References must, however, obey
 *				certaun rules which can make the use of pointers necessary:
 *
 *				Rule:														References:		Pointers:
 *				Can be declared without initialization							NO				YES
 *				Can be reassigned												NO				YES
 *				Can contain a 0 (null) value									NO				YES
 *				Easiest to use													YES				NO
 *
 *				As a general rule the choice between using a reference or a pointer can be determined by following these guidelines:
 *
 *				- If you don't want to initialize in the declaration use a pointer
 *
 *				OR
 *
 *				- If you want to be able to reassign another variable use a pointer
 *
 *				OTHERWISE
 *
 *				- Always use a reference
 *
 *				Pointers are more flexible than references, however, and can even point to functions. In  this case the pointer declaration must
 *				precisely match the return data type and arguments to those of function to which it points. Additionally the pointer name must be
 *				enclosed within parentheses in the declaration to avoid compiler errors. The function pointer can then be assigned a function name
 *				so that function can be called via the pointer
 *
 *
 *	   @HotTip: C programmers tend to put the & and * characters before the variable names but in C++ it usual  to put them after the data tyoe - as
 *	   			the feature is a property of the data type not the name
 *
 *
 *	   @Rember:	- A reference must be initialized in the declaration to refer to a variable or object - then always refers to that item.
 *
 *
 */


// Specify the C++ library classes to include
#include <iostream>

// Name prefix to use
using namespace std;

// Define an inline function to output the total of two passed arguments
inline void add(int& a, int* b){
	cout << "Total: " << (a + (*b)) << endl;
};

int main(){
	// Declarations creating two regular integer variables, one reference, and two pointers
	int num = 100, sum = 500;
	int& rNum = num;
	int* ptr = &num;
	void ( *fn ) (int& a, int* b) = add; // Declare and initialize a function pointer to add() function

	// Output the first integer variable values via the reference and pointer
	cout << "Reference: " << rNum << endl;
	cout << "Pointer: " << *ptr << endl;

	// Assign the second integer variable to the pointer and output  its value via the pointer, then call the function pointer to output the sum
	// of the variable values
	ptr = &sum;
	cout << "Pointer sum: " << *ptr << endl;
	fn(rNum, ptr);

	return 0;
}












