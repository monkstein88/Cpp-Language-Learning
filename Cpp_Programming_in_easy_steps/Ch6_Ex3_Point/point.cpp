/*
 * point.cpp
 *
 *  Created on: 27.12.2013
 *      Author: Joro
 *
 *	  @Chapter: 6 - Pointing to data
 *		@Descr: This chapter demonstrates how to produce efficient C++ programs utilizing pointers and references.
 *	 @Exercise: 3
 *	   @Tittle: Doing pointer arithmetic
 *		@Brief:	Once apointer variable has been initialized with a memory address it can be assigned another address, or changed using pointer
 *				arithmetic.
 *
 *				The ++ increment operator or the -- decrement operator will move the  pointer along to the next or previous address for that data
 *				type - the larger the data type, the bigger the jump.
 *
 *				Even larger jumps can be achieved using the += and -= operators.
 *
 *				Pointer arithmetic is especially useful with arrays because the elements in an array occupy consecutive memory addresses.
 *				Assigning just the name of an array to a pointer automatically assigns it the address of the first element. Incrementing the pointer
 *				by one moves the pointer along to the next element.
 *
 *
 *	   @HotTip: The name of an aray acts like a pointer to its first element
 *
 *	   @Beware:	The *=, /= and %= operators cannot be used to move a pointer
 *
 *
 */

#include <iostream>

using namespace std;


int main(){
	// Declaring an initialized integer array of ten elements
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// Declare a pointer, initialized with the memroy address of the first element in the integer array
	int* ptr = nums;

	// Output the memory address of the first element of the integer array, and its value
	cout << endl << "ptr at: " << ptr << " gets: " << *ptr;

	// Now increment the pointer and output uts new memory addres - that of the second element in the integer array
	ptr++;
	cout << endl << "ptr at: " << ptr << " gets: " << *ptr;

	// Increment the pointer again and out its new memory address - that of the third element in the integer array
	ptr++;
	cout << endl << "ptr at: " << ptr << " gets: " << *ptr;

	// Decrement the pointer by two places and output its memory address - that of the first element in the array
	ptr -= 2;
	cout << endl << "ptr at: " << ptr << " gets: " << *ptr;
	cout << endl;

	// Inser a loop to output the value stored in each element of the integer array
	for(int i = 0; i < 10; i++){
		cout << endl << "Element: " << i;
		cout << "	Value: " << *ptr;
		ptr++;
	}
	cout << endl;

	return 0;
}

