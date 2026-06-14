/*
 * constructor.cpp
 *
 *  Created on: 30.12.2013
 *      Author: Joro
 *
 *
 *	  @Chapter: 7 - Creating classes and objects
 *		@Descr: This chapter introduces the topics of encapsulation and inheritance - the first two principles of C++ Object Oriented Programming
 *	 @Exercise: 4
 *	    @Title: Initializing class members
 *		@Brief: Class variable members can be initialized by a special "constructor" method that is called whenever an instance of the class is
 *				created. The constructor method is always named exactly as the class name and requires arguments to set the initial value of class
 *				variables.
 *
 *				When a constructor method is declared, an associated "destructor" method should also be declared - that is called whenever an
 *				instance of the class is destroyed. The destructor method is always named as the class name, prefixed by the ~ tilde character.
 *
 *				Constructor and destructor methods have no return value and are called automatically - they cannot be called explicitly.
 *
 *				Values to initialize class variables are passed to the constructor method in the statement creating an object, in parentheses
 *				following the object name.
 *
 *
 *	   @Rember:	- Although the initial values of the variable members are set by the constructor, setter methods can be added to subsequently change
 *	   			the values - and those new values can be retrieved by the getter methods.
 *
 *	   @HotTip: - The definition of a class method is also known as the method "implementation".
 *
 *	   @Beware: - The destructor definition begins with the class name "Dog", the scope resolution operator "::", then the destructor method name
 *	   			"~Dog"
 *
 */

#include <iostream>
#include <string>

using namespace std;

class Dog{
	private:
		// Declare three private (made exlicitly) variables , describing the attributes of the "class" - Dog
		// They are private by default , even if their access was not defined as any.
		int age, weight;
		string color;

	public:
		// Begin the public member list...
		void bark() { cout << "WOOF!" << endl; } // adding a method to output a string when called, this is "inline" an entire function declaration and definition right here

		// Replacing the setValues method prototype ...
		// void setValues(int, int, string); // Replacing the three setter methods with a single combined setter prototype that specifies the argument data types - but not their names
		// ... with this constructor prototype
		Dog(int, int, string);
		// We also have to add an associated destructor prototype
		~Dog();

		// Add public getter methods - to retrieve individual values from each of the private variables (individually)
		int getAge() {return age;}
		int getWeight() {return weight;}
		string getColor() {return color;}
};


// Replacing the setValues definition block...
//void Dog::setValues(int age, int weight, string color){
//	this -> age = age;
//	this -> weight = weight;
//	this -> color = color;
//}
//... with constructor definition block
Dog::Dog(int age, int weight, string color){
	// Assign values from passed arguments to class variables
	this -> age = age;
	this -> weight = weight;
	this -> color = color;
}

// Immediately after, adding a destructor definition block
Dog::~Dog(){
	// Output a confirmation whenever an instance object gets destroyed
	cout << "Object destroyed." << endl;
}



int main(){
	// Now, edit the statement creating the "fido" object -to pass values to its constructor method
	// Dog fido;
	Dog fido( 3, 15, "brown");

	// Also delete statements calling the setValues method of the "fido" ...
	//fido.setValues( 3, 15, "brown");

	// Call each of the getter statements to retrieve the assigned values
	cout << "Fido is a " << fido.getColor() << " dog" << endl;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;

	// Now add call to the regular (public) output method
	fido.bark();



	// Also, edit the statement creating the "pooch" object - to pass values to the constructo method
	//Dog pooch;
	Dog pooch(4, 18, "gray");

	//... and "pooch" objects - the constructor has now replaced that method.
	//pooch.setValues(4, 18, "gray");


	// Call each getter method to retrieve the assigned values
	cout << "Pooch is a " << pooch.getAge();
	cout << " year old " << pooch.getColor();
	cout << " dog who weighs " << pooch.getWeight();
	cout << " pounds.";

	// Second call to the regular output method
	pooch.bark();

	return 0;
}


