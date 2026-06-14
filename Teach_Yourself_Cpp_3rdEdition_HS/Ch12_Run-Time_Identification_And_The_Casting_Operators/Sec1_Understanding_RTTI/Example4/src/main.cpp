
/*
	Example 4.: Although the preceding examples demonstrate the mechanics of using 'typeid()', they don't show its full potential because
	the types in the preceding programs are knowable at compile time. In the following program this is not the case. The program defines a
	simple class hierarchy that draws shapes on the screen. At the top of the hierarchy is the abstract class 'Shape'. Four concrete
	subclasses are created: 'Line', 'Square', 'Rectangle', and 'NullShape'. The function 'generator()' generates an object and returns a
	pointer to it. The actual object created is determined randomly based upon the outcome of the random number generator 'rand()'. (A
	function that produces objects is sometimes called an 'object factory'.) Inside 'main()', the shape of each object is displayed for all
	objects but 'NullShape' objects, which have no shape. Since objects are generated randomly, there is no way to know in advance what type
	of object will be created next. Thus, the use of RTTI is required.

	Note: The output differs from compiler to compiler. For GCC the output for int is i, for unsigned is j, for example. So, (GCC's) G++
	uses implementation-defined naming for the types, but it also offers the utility c++filt to make them human-readable:
	$ ./test | c++filt -t
*/

#include <iostream>
#include <typeinfo> // for 'typeid()', 'type_info' and so on.
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
		if(typeid(*p)!=typeid(NullShape))
			p->example();
	}

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch12_Sec1_Example4.exe | c++filt -t
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
