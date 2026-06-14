/*
 * overloaded.cpp
 *
 *  Created on: 31.12.2013
 *      Author: Joro
 *
 *	  @Chapter: 7 - Creating classes and objects
 *		@Descr: This chapter introduces the topics of encapsulation and inheritance - the first two principles of C++ Object Oriented Programming
 *	 @Exercise: 5
 *	    @Title: Overloading methods
 *		@Brief: Just as C++ allows functions to be overloaded, class methods can be overloaded too - including constructor methods. An overloaded
 *				constructor method is useful to  assign default values to member variables when an object is created without pasing values to the
 *				constructor.
 *
 *
 *
 *	   @Rember:	- The "this ->" pointer is used to explicitly identify class members when arguments have the same name as members.
 *
 *	   @HotTip: - This is the final rendition of the Dog class. Be sure you can readily identify its public and private members before proceeding.
 *
 *	   @Beware: - Don't add parentheses after the object name when creating an object without passing arguments - notice it's Dog rex; not Dog rex();
 *
 *
 */

#include <iostream>
#include <string>


using namespace std;


class Dog{
private:
	// Declare (explicitly) private - three variables
	int age, weight;
	string color;

public:
	// Public methods
	void bark(){ cout << "WOOF!" << endl;} // This is the default method
	void bark(string noise){cout << noise << endl; } // In the public Dog class declaration , add inline an overloaded bark method - to output a
													 // a passed string argumen
	// Constructor prototype - used to initialize the class' members
	Dog(); // Declaring constructor method prototype taking no arguments (a default constructor method) and ...
	Dog(int, int); // ... an overloaded constructor method prototype that takes two arguents, and ...
	Dog(int, int, string); // ... also another overloaded constructor method prototype that takes (all) three arguments.

	// We also have Destructor prototype
	~Dog();

	// Add public getter methods - to retrieve individual values from each of the private variables (individually)
	int getAge() { return age; }
	int getWeight() { return weight; }
	string getColor() { return color; }
};


// Add a definition for a the default constructor method - assigning default values to
Dog::Dog(){
	age = 1;
	weight = 2;
	color = "black";
}

// Adding a definition for the overloaded constructor method:

// assigning default values to class variables , in this case to color = "white", when an object is created passing two arguments.
Dog::Dog(int age, int weight){
	// Assign values from passed arguments to class variables (members/attributes) - for only two members
	this -> age = age;
	this -> weight = weight;
	color = "white"; // This one (the third) is set automatically by itself (by default).
}

// Constructor definition block for (all) the three definitions
Dog::Dog(int age, int weight, string color){
	// Assign values from passed arguments to class variables (members/attributes) - for all members
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
	// Declare (instantiate)a "fido" obect of class dog - passing (all three) values to its constructor (initializing)
	Dog fido(3, 15, "brown");
	// Call each of the getter statements to retrieve the assigned values
	cout << "Fido is a " << fido.getColor() << " dog" << endl ;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;
	// Now add call to the regular (default) (public) output method
	fido.bark();

	// Create (instantiate) a pooch object of the Dog class - pass (all three) values to the constructor method
	Dog pooch(4, 18, "gray");
	// Call each getter method to retrieve the assigned values
	cout << "Pooch is a " << pooch.getAge();
	cout << " year old " << pooch.getColor();
	cout << " dog who weighs " << pooch.getWeight();
	cout << " pounds";
	// Second call to the regular (defult) output method
	pooch.bark();

	// Create a Dog object without passing any arguments - calling the default constructor
	Dog rex;
	// Call each of the getter method to retrieve the default values - set by the default constructor method
	cout << "Rex is a " << rex.getAge();
	cout << " year old " << rex.getColor();
	cout << " dog who weighs " << rex.getWeight();
	cout << " pounds.";
	// Call to the overloaded output method
	rex.bark("GRRR!");

	// Create a Dog object passing two arguments to call the overloaded constructor
	Dog sammy(2, 6);
	// Retrieve the values set by the the overloaded constructor method and call the overloaded output method
	cout << "Sammy is a " << sammy.getAge();
	cout << " year old " << sammy.getColor();
	cout << " dog who weighs " << sammy.getWeight();
	cout << " pounds.";
	//
	sammy.bark("BOWOW!");



	return 0;
}


