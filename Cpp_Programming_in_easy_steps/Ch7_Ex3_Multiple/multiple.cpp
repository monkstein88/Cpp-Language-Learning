/*
 * mutliple.cpp
 *
 *  Created on: 30.12.2013
 *      Author: Joro
 *
 *
 *	  @Chapter: 7 - Creating classes and objects
 *		@Descr: This chapter introduces the topics of encapsulation and inheritance - the first two principles of C++ Object Oriented Programming
 *	 @Exercise: 3
 *	    @Title: Creating multiple objects
 *		@Brief:	A program can easily create multiple objects simply by declaring multiple instances of a class of a class, and each object can have
 *				unique attributes by assigning individual values with its setter methods.
 *
 *				It is often convenient to combine the setter methods into a single method that accepts arguments for each private variable. This
 *				that all values can be assigned with a single statement in the program, but the method will contain multiple statements.
 *
 *				The class declaration in the previous example contains short methods for just one line, which are created "inline" - entirely within
 *				the class declaration block. Where methods have more than two lines they should not be created inline, but should instead be declared
 *				as a "prototype" in the class declaration block and defined separately - after the class declaration. The definition must prefix the
 *				method name with the class name and the scope resolution operator :: to identify the class containing its prototype.
 *
 *				After the Dog class declaration, add a definition block for the prototype using :: scope resolution operator to identify the class in which it resides
 *				Notice that, for easy identification, the arguments are named with the same names as the variables to which they will be assigned. Where a class
 *	 	 	 	method definition has an argument of the same name as a class member the "this ->" class pointer can be used to explicitly refer to the class member.
 * 	 	 	 	For example, "this -> age" refers to the class member variable, whereas age refers to the argument.
 *
 *
 *	   @Rember:	- Note that a prototype is a statement - so it must end with a semicolon.
 *	   			- Where the argument name and class member names are different, the "this ->" class pointer is not needed in the setter method definitions
 *
 */


#include <iostream>
#include <string>


using namespace std;

class Dog{
	// Declare three private variables , describing the attributes of the "class" - Dog
	// They are private by default
	int age, weight;
	string color;
public:
	// Begin the public member list...
	void bark() { cout << "WOOF!" << endl; } // adding a method to output a string when called, this is "inline" an entire function declaration and definition right here

	// Add public setter method - to assign values to each of the private variables collectively
	void setValues(int, int, string); // Replacing the three setter methods with a single combined setter prototype that specifies the argument data types - but not their names

	// Add public getter methods - to retrieve individual values from each of the private variables (individually)
	int getAge() { return age; }
	int getWeight() { return weight; };
	string getColor() { return color;};
};


// After the Dog class declaration, add a definition block for the prototype using :: scope resolution operator to identify the class in which it resides
// Notice that, for easy identification, the arguments are named with the same names as the variables ot which they will be assigned. Where a class
// method definition has an argument of the same name as a class member the "this ->" class pointer can be used to explicitly refer to the class member.
// For example, "this -> age" refers to the class member variable, whereas age refers to the argument.
void Dog::setValues(int age, int weight, string color){
	// Assign values from passed arguments to class variables
	this -> age = age;
	this -> weight = weight;
	this -> color = color;
}

int main(){
	// Declare an instance of the Dog class named "fido"
	Dog fido;

	// Call each setter method to assign data
	//fido.setAge( 3 );
	//fido.setWeight( 15 );
	//fido.setColor( "brown" );
	// Replace the calls to the (previous) three setter methods by a single call ot the combined stter method - passing three agrruments
	fido.setValues( 3, 15, "brown");


	// Call each of the getter statements to retrieve the assigned values
	cout << "Fido is a " << fido.getColor() << " dog" << endl;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;

	// Now add call to the regular (public) output method
	fido.bark();

	// Declare a second instance of the Dog class named "pooch"
	Dog pooch;
	// Second call to the combined setter method -passing three arguments for the new object
	pooch.setValues(4, 18, "gray");


	// Call each getter method to retrieve the assigned values
	cout << "Pooch is a " << pooch.getAge();
	cout << " year old " << pooch.getColor();
	cout << " dog who weighs " << pooch.getWeight();
	cout << " pounds.";

	// Second call to the regular output method
	pooch.bark();


	return 0;
}



