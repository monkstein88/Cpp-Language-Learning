/*
 * classptr.cpp
 *
 *
 *  Created on: 11.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 8 - Harnessing polymorphism
 *		@Descr: This chapter demonstrates how to separate programs into modular components and introduces the topic of polymorphism - the third
 *				principle of C++ Object Oriented Programming
 *	 @Exercise: 1
 *	    @Title: Pointing to classes
 *		@Brief: The three cornerstones of Object Oriented Programming (OOP) are encapsulation, inheritance, and polymorphism. Examples in the
 *				previous chapter have demonstrated how data can be encapsulated within a C++ class, and how derived classes inherit the properties
 *				of their base class. This chapter introduces the final cornerstone principle of polymorphism.
 *
 *				The term "polymorphism" (from Greek, meaning "many forms") describes the ability to assign a different meaning, or purpose, to an
 *				entity according to its context.
 *
 *				In C++, overloaded operators can be described as polymorphic. For example, the * character can represent either the multiply operator
 *				or the dereference operator according to its context. Similarly, the + character can represent either the add operator or the
 *				concatenate operator according to its context.
 *
 *				More importantly, C++ class methods can also be polymorphic. The key to understand polymorphism with classes is to recognize that a
 *				base class pointer can be created that is also bound to a particular derived class by association.
 *
 *				A pointer to base class can be assigned the memory address of a derived class to provide a "context" - to uniquely identify that
 *				derived class. For example, with a "Base" base class and a derived "Sub" class a pointer can be created like this:
 *
 *									Sub inst;
 *									Base* pSub = &inst;
 *
 *				or  more simply usin the "new" keyword:
 *
 *									Base* pSub = new Sub;
 *
 *
 *				Where there are multiple derived classes, base class pointers can be created binding each derived class by its unique memory address
 *				- which can revealed using the addressof "&" operator.
 *
 *	   @Rember: - Turn back to chapter 6 for more on pointers
 *	   			- The -> class pointer operator is used here to call class methods.
 *
 *	   @HotTip: - The hexadecimal address is passed as an "int"
 *
 *
 */

#include <iostream>
#include <string>

using namespace std;

// Declare a "Base" class containing a method to output a passed integer value in hexadecimal format
class Base{
public:
	void Identify( int addr ) const{
		cout << "Base class called 0x" << hex << addr << endl;
	}
};

// Declare two empty derived classes, SubA and SubB
class SubA : public Base { } ;
class SubB : public Base { } ;

int main(){

	// Create two base class pointers - each binding to a specific derived class
	Base* ptrA = new SubA;
	Base* ptrB = new SubB;

	// Use the pointers to call the base class methods, passing memory address of each for output
	ptrA->Identify( ((unsigned int) &ptrA) ); // We have a typecasting (int) and we take (&) the address of the base class pointer itself
	ptrB->Identify( ((unsigned int) &ptrB) );  // We


	return 0;
}


