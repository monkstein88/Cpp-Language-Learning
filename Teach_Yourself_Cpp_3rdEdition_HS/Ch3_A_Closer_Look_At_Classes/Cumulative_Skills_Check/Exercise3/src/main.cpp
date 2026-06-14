
/*
	Exercise 3.: Experiment: When an object of a derived class is assigned to another object of the same
	derived class, is the data associated with the base class also copied? To find out, use the following
	two classes and write a program that demonstrates what happens.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class base{
	int a;
public:
	void load_a(int n){ a = n; }
	int get_a(){ return a; }
};

class derived: public base{
	int b;
public:
	void load_b(int n){ b = n; }
	int get_b(){ return b; }
};


int main(){
	derived ob1, ob2;

	ob1.load_a(5);
	ob1.load_b(10);

	// assign ob1 to ob2
	ob2 = ob1;

	cout << "Here is ob1's 'a' and 'b': ";
	cout << ob1.get_a() << " " << ob1.get_b() << "\n";

	cout << "Here is ob2's 'a' and 'b': ";
	cout << ob2.get_a() << " " << ob2.get_b() << "\n";

	/*
		As you can probably guess, the output is the same for each object.
	*/

	return EXIT_SUCCESS;
}


/*
	Yes, it should be copied, because the copy is binary type (cloning) of all the values, etc.


	The public members (of the base class) are inherited and directly acessible (in the derived one).
	The private members (of the base class) are inherited (in the derived class), but cannot be accessed (in the derived class) directly,
	so there has to be developed public methods to read or write to the private methods of the base class.

	A friend function is not inherited in the derived class

	Official: The outcome of the experiment is a s follows.: Yes, data from the base class is also copied when an
	object of a derived class is assigned to another object of the same derived class (type).
	Above is a program that demonstrates this fact.

*/
