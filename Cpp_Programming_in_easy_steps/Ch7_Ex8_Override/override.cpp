/*
 * override.cpp
 *
 *  Created on: 05.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 7 - Creating classes and objects
 *		@Descr: This chapter introduces the topics of encapsulation and inheritance - the first two principles of C++ Object Oriented Programming
 *	 @Exercise: 8
 *	    @Title: Overriding base methods
 *		@Brief: A method can be declared in a derived class to override a matching method in the base class - if both method declarations have the
 *				same name, arguments, and return type. This effectively hides the base class method as it becomes inaccesssible unless it is called
 *				explicitly, using the :: scope resolution, operator for precise identification.
 *
 *				This technique of overriding base class methods must be used with casre however, to avoid unintentionally hiding overloaded methods
 *				- a single overriding method in a derived class will hide ALL overloaded methods of that name in the base class!
 *
 *
 *
 *	   @Rember: - The method declaration in the derived class mst exaclty match that in the base class to override it - including the const keyword
 *	   			if it used.
 *
 *	   @Beware: - The overriding method declared in the derived class hides both overloaded classes in the base class. Try calling "enrique.speak()"
 *	   			- the compiler will complain there is no matching method for that call.
 *
 */


#include <iostream>
#include <string>

using namespace std;

// Declare a class named "Man", which will be a a base class
class Man{
	//public access specifier and an inline output method
public:
	void speak(){ cout << "Hello!" << endl; } // This is the default (without parameters) inline output class method - speak
	void speak( string msg ){ cout << "	" << msg << endl; } // This is the overloaded inline output class method - speak
};

// Declaring class "Hombre" that is derived from the Man class
class Hombre : public Man{
public: // insering an access specifier and ...
	void speak( string msg ){ cout << msg  << endl; } // method that overrides the overloaded base class method - without a tab output
};


int main(){
	// Creating two objects - an instance of the base class and an instance of the derived class
	Man henry ;
	Hombre enrique ;

	// Call both methods of the base class
	henry.speak();
	henry.speak("It's a beautiful evening.");

	// Call the overriding method in the derived class - producing output without tab
	enrique.speak("Hola!");

	// Explicitly call the ovverridden method in the base class
	enrique.Man::speak("Es un atde hermosa.");

	return 0;
}


