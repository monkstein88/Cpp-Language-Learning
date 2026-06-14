/*
	Exercise 2.: Change the 'generator()' function from Question 1 so that it uses the 'nothrow' version of 'new'. Be sure to check for
	errors.

	In Standard C++ it is also possible to have 'new' return null instead of throwing an exception when an allocation failure occures. This
	for of new is most useful when you are compiling older code with a modern C++ compiler. It is also valuable when your are replacing
	calls to 'malloc()' with 'new'. This form of 'new' is shown here.

	p_var = new(nothrow) type;
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
Shape* generator() {
	// Use exception handling to check for allocation errors
	Shape* p_temp;
		switch(rand() % 4){
			case 0:
				p_temp = new (nothrow) Line; break;
			case 1:
				p_temp = new (nothrow) Rectangle; break;
			case 2:
				p_temp = new (nothrow) Triangle; break;
			case 3:
				p_temp = new (nothrow) NullShape; break;
		}
		if(p_temp){ // Check if 'p' is null pointer , indicating an error
			return p_temp;
		}
		else{
			cout << "Shape allocation error!\n";
			return NULL;
		}

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

	$ ./Ch12_Cumulative_Skills_Check_Exercise2 | c++filt -t
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
