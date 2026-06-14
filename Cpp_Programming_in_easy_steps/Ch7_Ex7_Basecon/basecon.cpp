/*
 * basecon.cpp
 *
 *  Created on: 05.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 7 - Creating classes and objects
 *		@Descr: This chapter introduces the topics of encapsulation and inheritance - the first two principles of C++ Object Oriented Programming
 *	 @Exercise: 7
 *	    @Title: Calling base constructors
 *		@Brief: Although derived classes inherit the members of their parent base class they do not inherit its constructor and destructor. However,
 *				it should be noted that the default constructor of the base class is always  called when a new object of a derived class is created -
 *				and the base class destructor is called  when the object gest destroyed. These calls are made in addition to those made to the
 *				constructor and destructor methods of the derived class.
 *
 *				The default constructor of the base class has no arguments - but the class may also have overloaded constructors which do. If you
 *				prefer to call an overloaded constructor of the base class when a new object of a derived class is created, you can create a matching
 *				overloaded constructor in the derived class - having the same number and type of arguments.
 *
 *
 *	   @HotTip: - Each class automatically has an empty default constructor and destructor - for example, "Son(){}" and "~Son(){}"
 *
 *	   @Beware: - Notice that the syntax in the overloaded Son class constructor passes the integer argument to the overloaded base class constructor.
 *
 *
 *
 */

#include <iostream>
#include <string>

using namespace std;

// Declare a class named "Parent", which will be a base class
class Parent{
	// Class members go here. Public access  specifier and
public:
	Parent(){ cout << "Default Parent constructor called." ; } //add default constructor to output text - identifying when it has been called
	Parent(int a){ cout << endl << "Overloaded Parent constructor called." ;} // add an overloaded  constructor, which takes a single integer argument
																			  // and also outputs identifying text
};

// After the Parent class, declaring a derived "Daughter" class
class Daughter : public Parent{
// Class members in the public access specifier
public:
	Daughter(){ cout << endl << "	Derived Daughter class default constructor called."; } // add a default constructor to output text (not overloaded from the base class)
};

// After the Daughter class, declare a derived "Son" class
class Son : public Parent{
public: // in the public access specifier:
	Son(int a) : Parent ( a ){ cout << endl << "	Derived Son class overloaded constructor called."; } // add an overloaded constructor which takes a single integer
																								 // which takes a single integer argument, and also outputs identifying
																								 // text
};


int main(){
	// Create an instance of each derived class - calling base class and derived class constructors
	Daughter emma ;
	Son andrew(0);


	return 0;
}


