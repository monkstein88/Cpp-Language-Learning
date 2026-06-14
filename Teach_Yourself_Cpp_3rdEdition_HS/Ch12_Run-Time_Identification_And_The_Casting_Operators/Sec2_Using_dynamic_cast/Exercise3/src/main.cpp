
/*
	Example 3.: Convert the 'main()' function in Section 12.1, Example 4, so that it uses 'dynamic_cast' rather than 'typeid' to prevent
	'NullShape' object from being displayed.

*/

#include <iostream>
#include <typeinfo>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class Shape{
public:
	virtual void example() = 0; // this is a pure virtual function - which means it HAS TO BE overriden, in a derived class.
};

class Rectangle : public Shape{
public:
	void example(){
		cout << "*****\n*   *\n*   *\n*****\n";
	}
};

class Triangle : public Shape{
public:
	void example(){
		cout << "*\n* *\n*  *\n*****\n";
	}
};

class Line : public Shape{
public:
	void example(){
			cout << "*****\n";
	}
};

class NullShape : public Shape{
public:
	void example(){

	}
};

// A factory for objects derived from Shape.
Shape* generator(){
	switch(rand() % 4){
		case 0:
			return new Line;
		case 1:
			return new Rectangle;
		case 2:
			return new Triangle;
		case 3:
			return new NullShape;
	}
	return NULL;
}


int main(){
	int i;
	Shape *p;

	for(i=0; i<10; i++){
		p = generator(); // get next object

		cout << "class " << typeid(*p).name() << endl;

		// draw object only if it is not a 'NullShape'
		if(!dynamic_cast<NullShape*>(p))
			p->example();
	}

	return EXIT_SUCCESS;
}




/*

	This program displays the following when ran:

	$ ./Ch12_Sec2_Exercise3.exe | c++filt.exe -t
	class Rectangle
	*****
	*   *
	*   *
	*****
	class NullShape
	class Triangle
	*
	* *
	*  *
	*****
	class Line
	*****
	class Rectangle
	*****
	*   *
	*   *
	*****
	class Line
	*****
	class Triangle
	*
	* *
	*  *
	*****
	class Triangle
	*
	* *
	*  *
	*****
	class Triangle
	*
	* *
	*  *
	*****
	class Line
	*****

*/
