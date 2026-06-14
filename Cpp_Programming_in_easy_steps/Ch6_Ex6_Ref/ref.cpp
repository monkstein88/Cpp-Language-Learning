/*
 * ref.cpp
 *
 *  Created on: 27.12.2013
 *      Author: Joro
 *
 *
 *	  @Chapter: 6 - Pointing to data
 *		@Descr: This chapter demonstrates how to produce efficient C++ programs utilizing pointers and references.
 *	 @Exercise: 6
 *	    @Title: Referencing data
 *		@Brief: A C++ "reference" is an alias for a variable or an object in a program. A reference must be initialized within its declaration, by
 *				assigning it the name of the variable or object to which it refers. From then on the reference acts as an alternative name for the
 *				item to which it refers - anything that happens to the reference is really implemented on the variable or object to which it refers.
 *
 *				A reference declaration first states its data type, matching that of the item to which it will refer suffixed by an "&" character
 *				denoting that variable will be a reference, and a chosen name.  Finally the declaration uses the = operator to associate a variable
 *				or object.
 *
 *				Traditionally, a reference is named with the name of the associated variable or object but with an uppercase first letter and the
 *				whole name prefixed by an "r". For example, a declaration to create a reference to an integer variable named "num"looks like:
 *
 *														int& rNum = num;
 *
 *				Note that the purpose of the "&" reference operator is context sensitive so that it declares a reference when used as an L-value,
 *				on the left side of the = operator, otherwise it returns a memory address when used as an R-value.
 *
 *				A reference is such a true alias to its associated item that querying its memory address returns the address of its associated item
 *				- there is no way to discover the address of the reference itself.
 *
 *
 *	   @Beware: - Once reference has been created it will always refer to the item to which it was initialized - a different item cannot be
 *	   			assigned to that reference.
 *	   			- The compiler decides how to use the & reference operator according to its context.
 *
 *	   @Rember:	- A reference is always an alias for the item associated in its declaration
 *
 *
 *
 */

#include <iostream>

using namespace std;



int main(){
	// Declare two variables - a regular integer variable and a reference to that variable
	int num;
	int& rNum = num;

	// Assign an initial value to the integer variable via its reference
	rNum = 400;

	// Output the stored value, both directly and via its reference
	cout << "Value direct: " << num << endl;
	cout << "value via reference: " << rNum << endl;

	// Output the memory address, both directly and via its reference
	cout << "Address direct: " << &num << endl;
	cout << "Address via reference: " << &rNum << endl;

	// Manipulate the value stored in the variable via its reference
	rNum *= 2;

	// Once more output the stored value, both directly and via its reference
	cout << "Value direct: " << num << endl;
	cout << "Value via reference: " << rNum << endl;


	return 0;
}


