/*
 * address.cpp
 *
 *  Created on: 26.12.2013
 *      Author: Joro
 *
 *	  @Chapter: 6 - Pointing to data
 *		@Descr: This chapter demonstrates how to produce efficient C++ programs utilizing pointers and references.
 *	 @Exercise: 1
 *	   @Tittle: Understanding data storage
 *		@Brief: In order to understand C++ pointers it si helpful to understand how data is stored on your computer. Envision the computer's memory
 *				as a very long row of sequentially numbered slots, which can each contain one byte of data. When a varaible is declared in a program
 *				the machine reserves a number of slots at which to store data assigned to that variable. The number of slots it reserves depends upon
 *				the variable's data type. When the program uses the variable name to retrieve stored data it actually addresses the number of the
 *				number of the variable's first reserved slot.
 *
 *				Comparison can be drawn to a long row of sequentially numbered houses that can each accomodate a different family. Any family can be
 *				explicitly referenced by addressing their house number.
 *
 *				The slot (house) numbers in compiuter memory are expressed in hexadecimal format nadcan be revealed by & reference operator.
 *
 *				Once memory space has been reserved by a variable declaration, a value of the appropriate data type can be  stored there using the =
 *				assignment operator. For example, num = 100 takes the value on its right (100) and puts it in the memory referenced by the named
 *				variable on its left (num).
 *
 *				The operand to the left of the = assignment operator is called its "L-value" and the operand to its right is called its "R-value".
 *				Consider the "L" in L-value to mean "Location" and consider the "R" in R-vale to mean "Read".
 *
 *				One important rule in C++ programming insists that an R-value cannot appear to the of = assignment operator, but an L-value may
 *				appear on either side. Code that places an R-value to the left of an = assignmen operator will not compile
 *
 *	   @HotTip: L-values are containers, but R-values are data.
 *
 *	   @Rember: The location addresses are dynamically allocated - so will vary from those in this screenshot.
 *
 *	   @Beware:
 *
 *
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
	// Declare three initialized variable
	int num = 100;
	double sum = 0.0123456789;
	string text = "C++ Fun";

	// Output the memory address of the first slot of each variable
	cout << "Integer variable starts at: " << &num << endl;
	cout << "Double variable starts at: " << &sum << endl;
	cout << "String variable starts at: " << &text << endl;

	// Not compile
	//200 = num;
	//5.5 = sum;
	//"Bad assignments" = text;

	return 0;
}



