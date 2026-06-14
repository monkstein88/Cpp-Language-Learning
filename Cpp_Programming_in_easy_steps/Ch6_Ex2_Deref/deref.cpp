/*
 * deref.cpp
 *
 *  Created on: 27.12.2013
 *      Author: Joro
 *
 *	  @Chapter: 6 - Pointing to data
 *		@Descr: This chapter demonstrates how to produce efficient C++ programs utilizing pointers and references.
 *	 @Exercise: 2
 *	   @Tittle: Getting values with pointers
 *		@Brief: Pointers are useful part of efficient C++ programming - they are simply variables that store the memory address of other variables.
 *				Pointer variables are declared in the same way that other variables are declared, but the data type is suffixed by "*" character.
 *				This denotes, in a declaration, that the variable will be a pointer. Always remember that the pointer's data type must match that
 *				of the variable to which it points.
 *
 *				A pointer variable is initialized by assigning it the memory address of another variable using the "&" reference operator. The
 *				assignment can be made either in the declaration statement, or in a separate statement after the declaration. Referncing a pointer
 *				variable by its name alone will simply reveal the memory address that it contains (the address of the variable it points to).
 *
 *				After a pointer variable has been initialized, either in the declaration or by a subsequent assignmet, it "points" to the variable
 *				at the address which it contains. Usefully, this means that the value of the variable to which it points can be referenced by
 *				prefixing the pointer name with the * dereference operator.
 *
 *
 *
 *	   @HotTip: The * dereference operator is alternatively known as the "indirection" operator
 *
 *	   @Rember: The memory addresses are dynamically allocated - so will vary
 *
 *
 */

#include <iostream>
#include <string>

using namespace std;


int main(){
	// Declare two regular initialized variable
	int a = 8, b = 16;

	// Declare and initialize a pointer with the memoru address of the first integer variable;
	int *aPtr = &a;  // aPtr assigned address of a
	// Declare a second pointer, then initialize it with the address of the second integer variable
	int *bPtr; // bPtr declared
	bPtr = &b; // bPtr assigned address of b

	// Output the actual memory address of each pointer
	cout << "Address of pointers..." << endl;
	cout << "aPtr: " << &aPtr << endl;
	cout << "bPtr: " << &bPtr << endl;

	// Output the memory address stored inside each pointer
	cout << "Values in pointers..." << endl;
	cout << "aPtr: " << aPtr << endl;
	cout << "bPtr: " << bPtr << endl;

	// Output the values stored at the memory address stored in each pointer - the value of the variables to which the pointers point
	cout << "Values in addresses pointed to..." << endl;
	cout << "a: " << *aPtr << endl;
	cout << "b: " << *bPtr << endl;



	return 0;
}
