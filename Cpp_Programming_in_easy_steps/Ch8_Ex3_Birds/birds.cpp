/*
 * birds.cpp
 *
 *  Created on: 12.01.2014
 *      Author: Joro
 *	  @Chapter: 8 - Harnessing polymorphism
 *		@Descr: This chapter demonstrates how to separate programs into modular components and introduces the topic of polymorphism - the third
 *				principle of C++ Object Oriented Programming
 *	 @Exercise: 3
 *	    @Title: Directing method calls
 *		@Brief: The great advantage of polymorphism with multiple derived class objects is that calls to methods of the same name are directed to the
 *				appropriate overriding method.
 *
 *				A base class may contain only virtual methods which each derived class may override with their own methods, but base class methods
 *				can still be called explicitly using the :: scope resolution operator. This can allow inconsistencies, however - this example would
 *				seem to imply that chickens can fly
 *
 *
 *	   @HotTip: - Overriding mehtods in derived class may, optionally, include the "virual" prefix - as a reminder it is overriding a base class
 *	   			method.
 *
 *	   @Rember: - The backslash "\" character is required to escape the aposrophe in string.
 *
 */

#include <iostream>

using namespace std;

// Declare a base class named "Bird" containing two virtual method declarations
class Bird{
public:
	virtual void Talk() const { cout << "A bird talks... " << endl; }
	virtual void Fly() const { cout << "A bird flies... " << endl; }
};

// Declare a derived class named "Pigeon" containing two methods to override those in the base class
class Pigeon : public Bird{
public:
	void Talk() const { cout << "Coo! Coo!" << endl; }
	void Fly() const { cout << "A pigeon flies away... " << endl; }
};

// Declare a derived class named "Chicken" containing two methods to override those in the base class
class Chicken : public Bird{
public:
	void Talk() const { cout << "Cluck! Cluck!" << endl; }
	void Fly() const { cout << "I\'m just a chicken - I can\'t fly!" << endl; }
};


int main(){
	// Create base class pointes binding derived classes
	Bird* pPigeon = new Pigeon;
	Bird* pChicken = new Chicken;

	// Calls to each method
	pPigeon -> Talk();
	pPigeon -> Fly();
	pChicken -> Talk();
	pChicken -> Fly();
	pPigeon -> Bird::Talk();
	pChicken -> Bird::Fly(); // Inappropriate call.


	return 0;
}


