/*
 * derived.cpp
 *
 *  Created on: 04.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 7 - Creating classes and objects
 *		@Descr: This chapter introduces the topics of encapsulation and inheritance - the first two principles of C++ Object Oriented Programming
 *	 @Exercise: 6
 *	    @Title: Inheriting class properties
 *		@Brief: A C++ class can be created as a brand new class, like those in previous examples, or can be "derived" from an existing class.
 *				Importantly, a derived class inherits members of the parent (base) class from which it is derived - in addition to its own
 *				members.
 *
 *				The ability to inherit members from a base class allows derived classes to be created that share certain common properties, which
 *				have been defined in the base class. For example, a "Polygon" base class may define width and height properties that are common to
 *				all polygons. Classes of "Rectangle" and "Triangle" could be derived from the Polygon class - inheriting width and height properties,
 *				in addition to their own members defining their unique features.
 *
 *				The virtue of inheritance is extremely powerful and is the second principle of Object Oriented Programming (OOP).
 *
 *				A derived class declaration adds a colon : after its class name, followed by an access specifier and the class from which it dervies.
 *
 *
 *
 *	   @HotTip: - A class declaration can derive from more than one class. For example, "class Box : public A, public B, public C {} ;"
 *
 *	   @Beware: - Don't confuse class instances and derived classes - an instance is a copy of a class, whereas a derive class is a new class that
 *				inherits properties of the base class from which it is derived.
 *
 */



#include <iostream>
#include <string>

using namespace std;

// Declare a class named "Polygon" containing two protected variables, accessible only to members of this class and classes derived from this class,
// along with a public method to assign values to those variables
class Polygon{
protected:
	int width, height;
public:
	void setValues(int w, int h) {width = w; height = h;}
};

// After the Polygon class, declare a Rectangle class that derives from the Polygon and adds a unique method
class Rectangle : public Polygon{ // We specify public here, so to additionally inherit the members of the public part (setter methods) of the original class
public:
	int area() { return (width * height); }

};

// After the Rectangle class, declare a Triangle class that derives from the Polygon class and adds a unique method
class Triangle : public Polygon{
public:
	int area() {return ((width * height)/2); }
};

int main(){
	// Create an instance of each derived class
	Rectangle rect; Triangle trgl;

	// Calls to the method inherited from the Polygon (parent) base class - to initialize the inherited variables
	rect.setValues(4,5);
	trgl.setValues(4,5);

	// Output value returned by the unique method of each derived class
	cout << "Rectangle area: " << rect.area() << endl;
	cout << "Triangle area: " << trgl.area() << endl;


	return 0;
}
