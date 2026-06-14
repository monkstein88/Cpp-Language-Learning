/*
 * capability.cpp
 *
 *  Created on: 12.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 8 - Harnessing polymorphism
 *		@Descr: This chapter demonstrates how to separate programs into modular components and introduces the topic of polymorphism - the third
 *				principle of C++ Object Oriented Programming
 *	 @Exercise: 4
 *	    @Title: Providing capability classes
 *		@Brief: Classes whose sole purpose is to allow other classes to be derived from them are known as "capability classes" - they provide
 *				capabilities to the derived classes.
 *
 *				Capability classes generally contain no data but merely declare a number of virtual methods that can be overridden in their derived
 *				classes.
 *
 *				The following example builds upon the previous example to demonstrate how the "Bird" class can be better written as a capability
 *				class. Its methods no longer contain output statements but return a "-1" (error) value if they are called explicitly.
 *
 *				It is necesssary to change the return type of those methods from "void" to "int" and these changes must also be reflected in each
 *				overriding method in the derived classes.
 *
 *	   @Rember: - The return value of the overriding methods in derived classes must match those declared in the base class.
 *
 *	   @Beware: - Capability class methods are intended to be overridden in derived classes - they should not called explicitly.
 *
 *	   @HotTip:	- Refer back to pages 90 - 95 for more details on error handling.
 */


#include <iostream>

using namespace std;

// Declare a base capability class named "Bird" containing two virtual method declarations that will signal an error if called explicitly
class Bird{
	public:
		virtual int Talk() const { return -1; }
		virtual int Fly() const { return -1; }
};


// Declare a derived class named "Pigeon" containing two methods to override those in the base class
class Pigeon : public Bird{
	public:
		int Talk() const { cout << "Coo! Coo!" << endl; return 0; }
		int Fly() const { cout << "A pigeon flies away... " << endl; return 0; }
};


// Declare a derived class named "Chicken" containing two methods to override those in the base class
class Chicken : public Bird{
	public:
		int Talk() const { cout << "Cluck! Cluck!" << endl; return 0; }
		int Fly() const { cout << "I\'m just a chicken - I can\'t fly!" << endl; return 0;}
};

int main(){
	// Creating two base class pointers binding the derived classes
	Bird* pPigeon = new Pigeon;
	Bird* pChicken = new Chicken;

	// Method call and a statement to terminate the program when an error is met by explicitly calling a bse class method
	pPigeon -> Talk();
	pChicken -> Talk();

	//pPigeon -> Bird::Talk();
	if( pPigeon -> Bird::Talk() ){
		cout << "Error! - Program ended." << endl; return 0;
	}

	pPigeon -> Fly(); // Call will not be made
	pChicken -> Fly(); // Call will not be made

	return 0; // Statement will not be executed
}

