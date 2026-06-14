/*
 * virtual.cpp
 *
  *
 *  Created on: 05.01.2014
 *      Author: Joro
 *
 *
 *	  @Chapter: 8 - Harnessing polymorphism
 *		@Descr: This chapter demonstrates how to separate programs into modular components and introduces the topic of polymorphism - the third
 *				principle of C++ Object Oriented Programming
 *	 @Exercise: 2
 *	    @Title: Calling virtual method
 *		@Brief: A base class pointer that is bound to a specific derived class can be used to call derived class methods that have been inherited
 *				from the base class. Methods that are unique to the derived class must, however, be called via an instance object.
 *
 *				A base class pointer that is bound to a specific derived class can also be used to explicitly call a method in the base class using
 *				the :: scope resolution operator.
 *
 *				Most usefully, an inherited method in a derived class can override that in the base class when the base method has been declared as a
 *				"virtual" method. This is just a regular method declaration in the base class preceded by the virtual keyword. The declaration of a
 *				virtual method method indicates that the class will be used as a base class from which another class will be derived, which may
 *				contain a method to override the virtual base method.
 *
 *
 *	   @Beware: - Pointers to a base class cannot be used to call non-inherited methods in a derived class.
 *
 *	   @Rember: - Here the Grandchild class inherits the properties of the Child class, which inherits the properties of the Parent class.
 *
 */

#include <iostream>
#include <string>


using namespace std;

// Declaring a base class named "Parent" containing a regular method declaration and a virtual method declarition
class Parent{
public :
	void Common() const {
		cout << "I am part of this family, ";
	}

	virtual void Identify() {
		cout << "I am the parent" << endl;
	}
};


// Declaring a derived class named "Child" containin a method to override the virtual base method
class Child : public Parent{
public:
	void Identify() const { cout << "I am the child" << endl; }
};


// Declaring a "Grandchild" class, derived from the "Child" class, containing a method to override the virtual base method and a regular method
// declaration
class Grandchild : public Child{
public:
	void Identify() const { cout << "I am the grandchild" << endl; }
	void Relate() const { cout << "Grandchild has a parent and grandparent"; }
};


int main(){
	// Create instances of each derived class, plus base class pointers binding those derived classes
	Child son;
	Grandchild grandson;
	Parent* ptrChild = &son;
	Parent* ptrGrandchild = &grandson;


	// Calls to each method
	ptrChild -> Common(); // Inherited
	ptrChild -> Identify(); // Overriding
	ptrGrandchild -> Common(); // Inherited
	ptrGrandchild -> Identify(); // Overriding
	ptrChild -> Parent::Common(); // Explicit
	ptrChild -> Parent::Identify(); // Identify

	grandson.Relate(); // Via instance
	return 0;
}


