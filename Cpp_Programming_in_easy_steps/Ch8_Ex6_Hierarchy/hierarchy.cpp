/*
 * hierarchy.cpp
 *
 *  Created on: 13.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 8 - Harnessing polymorphism
 *		@Descr: This chapter demonstrates how to separate programs into modular components and introduces the topic of polymorphism - the third
 *				principle of C++ Object Oriented Programming
 *	 @Exercise: 6
 *	    @Title: Building complex hierarchies
 *		@Brief: It is sometimes desirable to derive an ADT from another ADT to construc a complex hierarchy of classes. This provies great
 *				flexibility and is perfectly acceptable providing each pure method is defined at some point in a derived class
 *
 *	   @Rember: - The Boat class has properties common to any boat whereas the Sail boat class has properties specific to boats that have sails
 *
 *	   @HotTip:	- Try adding a Powerboat class derived from the Boat class (to contain engine information) and a Cruiser class derived from the
 *	   			Powerboat
 *
 */

#include <iostream> // C++ library classes to include

using namespace std; // Specify the namespace prefix to use

// Delcare a base ADT class named "Boat" containing a variable and a accessor method together with one pure virtual method
class Boat{
	protected:
		int length;
	public:
		int getLength() { return length; }
		virtual void Model() = 0;
};


// Declare an ADT class (derived from the Boat class) named "Sailboat" - also containing a variable and accesor method together with one pure virtual
// method
class Sailboat : public Boat{
	protected:
		int mast;
	public:
		int  getMast() { return mast; }
		virtual void Boom() = 0;
};


// Declare a regular class (derived from the Sailboat class) named "Laser" in which all members will allow public access
class Laser : public Sailboat{
	public:
	// Call to its constructor method to assign values to the variables in each class from which this class is derived - and call the destructor method
	Laser() { mast = 19;  length = 35; }
	~Laser();
	// Define the pure virtual methods declared in each class from which this class is derived
	void Model() { cout << "Laser Classic" << endl ; }
	void Boom() { cout << "Boom: 14ft" << endl; }
};


// Declaring an ADT "Powerboat" class derived from the Boat class (to contain engine information)
class Powerboat : public Boat{
	protected:
		int engineHP;
	public:
		int getHP() { return engineHP; }
		virtual void Engine() = 0;
};


// Declaring regular "Cruiser" class derived from the "Powerboat" class - to assign variable values and to define virtual methods.
class Cruiser : public Powerboat{
	public:
		Cruiser() { length = 10; engineHP = 200; }// Call to its constructor
		~Cruiser();
		void Model() {cout << "Red Arrow" << endl; }
		void Engine() {cout << "Engine: BWM-T200" << endl;}
};


int main(){
	//Create an instance of the derived class on the bottom tier of the hierarchy
	Laser* pLaser = new Laser;

	// Calls to each of the defined method
	pLaser -> Model();
	cout << "Length: " << pLaser -> getLength() << "ft" << endl;
	cout << "Height: " << pLaser -> getMast() << "ft" << endl;
	pLaser -> Boom();


	Cruiser* pCruiser = new Cruiser;
	pCruiser -> Model();
	cout << "Length: " << pCruiser->getLength() << "ft" << endl;
	cout << "Engine power: " << pCruiser->getHP()<< "HP" << endl;
	pCruiser->Engine();

	return 0;
}

