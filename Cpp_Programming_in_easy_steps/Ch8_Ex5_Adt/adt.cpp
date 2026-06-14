/*
 * adt.cpp
 *
 *  Created on: 12.01.2014
 *      Author: Joro
 *
 *	  @Chapter: 8 - Harnessing polymorphism
 *		@Descr: This chapter demonstrates how to separate programs into modular components and introduces the topic of polymorphism - the third
 *				principle of C++ Object Oriented Programming
 *	 @Exercise: 5
 *	    @Title: Making abstract data type
 *		@Brief: An Abstract Data Type (ADT) represents a concept, rather than a tangible object, and is always the base to other classes. A base
 *				class can be made into an ADT by initializing one or more of its methods with zero. These are known as "pure virtual methods" and
 *				must always be overridden in derived classes.
 *
 *	   @Beware: - It is illegal to create an instance object of an ADT - attempting to do so will simply create a compile error.
 *
 *	   @Rember: - A base class need only contain one pure virtual method to create an Abstract Data Type.
 *
 *
 */

#include <iostream>

using namespace std;

// Declaring a base ADT class named "Shape" containing three pure virtual methods
class Shape{
	public:
		virtual int getArea() = 0 ;
		virtual int getEdge() = 0 ;
		virtual void Draw() = 0	;
};


// Declare a derived class named "Rect", containing two private variables
class Rect : public Shape{
	private:
		int height, width;
	public: //
		// Insert public constructor and destrucor
		Rect( int initHeight, int initWidth ){ // Declaration and definition of public constructor
			height = initHeight;
			width = initWidth;
		}
		~Rect(); // Declaration and definitiona (of an empty) destructor

		// Declare three public methods to override the pure virtual methods declared in the "Shape" base class
		int getArea(){ return ( width*height ); }
		int getEdge(){ return ((2*height) + (2*width)); }
		void Draw(){
			for (int i = 0; i < height; i++ ){
				for (int j = 0; j < width; j++) {cout << "x ";}
			cout << endl;
			}
		}
};



int main(){
	// Create  two instances of the derived "Rect" class -to represent a Square and Quadrilateral shape
	Shape* pQuad = new Rect(3, 7);
	Shape* pSquare = new Rect(5, 5);

	// Calls to each method
	pQuad -> Draw();
	cout << "Area is " << pQuad -> getArea() << endl;
	cout << "Perimeter is " << pQuad -> getEdge() << endl;

	pSquare -> Draw();
	cout << "Area is" << pSquare -> getArea() << endl;
	cout << "Perimeter is " << pSquare -> getEdge() << endl;


	return 0;
}


