/*
 * object.cpp
 *
 *  Created on: 29.12.2013
 *      Author: Joro
 *
 *	  @Chapter: 7 - Creating classes and objects
 *		@Descr: This chapter introduces the topics of encapsulation and inheritance - the first two principles of C++ Object Oriented Programming
 *	 @Exercise: 2
 *	    @Title: Creating an object
 *		@Brief:	In order to assign and retrieve data from private members of a class, special public accessor methods must be added to the class.
 *				These are the "setter" methods, to assign data, and "getter" methods to retrieve data. Accessor methods are often named as the
 *				variable they addresss, with the first letter made uppercase, and prefixed by "set" or "get" respectively. For example, accessor
 *				methods to address an age variable may be named setAge() and getAge().
 *
 *	   @HotTip: - In the class declaration, notice that all methods are declared public and all variables are declared private. This notion of
 *	   			  "public interface, private data" is a key concept when creating classes
 *	   			- This program will get modified over the next few pages as new features are incorporated
 *
 *
 *	   @Rember:	- Members declared before an access specifier are private by default, and remember to add a final semicolon after each class declaration
 *
 */


#include <iostream>
#include <string>

using namespace std;


// Declare a class Dog
class Dog{
	// Declare three private variables
	int age, weight;
	string color;
	// Add a public access specifier
public:
	// Beginning the public members list by...
	void bark(){cout << "WOOF!" << endl; }  // adding a method to output a string when called, this is an entire function declaration and definition right here
	// Add public setter methods - to assign individual values to each of the private variables
	void setAge(int yrs) { age = yrs; }
	void setWeight(int lbs){ weight = lbs; }
	void setColor(string clr) { color = clr ; }
	// Add public getter methods - to retrieve individual values from each of the private variables
	int getAge() { return age; }
	int getWeight() { return weight; }
	string getColor() { return color; }
};



int main(){
	// Declare an instance of the Dog class named "fido"
	Dog fido;

	// Call each setter method to assign data
	fido.setAge( 3 );
	fido.setWeight( 15 );
	fido.setColor( "brown" );

	// Call each of the getter statements to retrieve the assigned values
	cout << "Fido is a " << fido.getColor() << " dog" << endl;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;

	// Now add call to the regular (public) output method
	fido.bark();


	return 0;
}

