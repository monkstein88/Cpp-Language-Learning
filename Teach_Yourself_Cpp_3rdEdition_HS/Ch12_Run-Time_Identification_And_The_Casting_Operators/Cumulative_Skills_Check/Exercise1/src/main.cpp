/*
	Exercise 1.: Rework the program in Section 12.1, Example 4 so that it uses exception handling to watch for an allocation failure within
	the 'generator()' function.

	Note: The output differs from compiler to compiler. For GCC the output for int is i, for unsigned is j, for example. So, (GCC's) G++
	uses implementation-defined naming for the types, but it also offers the utility c++filt to make them human-readable:
	$ ./test | c++filt -t
*/


#include <iostream>
#include <new>
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
	// Use exception handling to check for allocation errors
	try{
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
	}
	catch(bad_alloc){ // if any of the 'new' statements fails. Note: In order for this to compile, exceptions should be caught by constant
										// reference, not by value - so either remove '-Werror' option when compiling, or use 'catch(bad_alloc&)' in the code
		cout << "Shape allocation error!\n";
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

	$ ./Ch12_Cumulative_Skills_Check_Exercise1  | c++filt -t
	class NullShape
	class Triangle
	*
	* *
	*  *
	*****
	class Rectangle
	*****
	*   *
	*   *
	*****
	class NullShape
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
	class Rectangle
	*****
	*   *
	*   *
	*****


*/
