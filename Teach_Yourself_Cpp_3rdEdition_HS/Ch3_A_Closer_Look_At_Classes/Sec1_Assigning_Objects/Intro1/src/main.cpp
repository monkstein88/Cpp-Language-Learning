
/*
	Intro 1.: One object can be assigned to another provided that both objects are of the same type. By
	default, when one object is assigned to another, a bitwise copy of all the data members is made. For
	example, the contents of object called 'o1' is assigned to another object called 'o2', contents of 
	all of 'o1's data are copied into the equivalent members of 'o2'. This is illustrated by the following
	program: 
	
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class myclass{
	int a, b;
public:
	void set(int i, int j){ a = i; b = j; }
	void show(){ cout << a << ' ' << b << "\n"; }
};

int main(){
	myclass o1, o2;
	
	o1.set(10, 4);
	
	// assign o1 to o2
	o2 = o1; 
	
	o1.show();
	o2.show();
	
	return EXIT_SUCCESS;
}

/*
	Here, the object 'o1' has its member variables 'a' and 'b' set to the values 10 and 4, respectively. Next 'o1' is
	assigned to 'o2'. This causes the current value of 'o1.a' to be assigned to 'o2.a' and 'o1.b' to 'o2.b'. Thus, when
	run this program dispalys 
	10 4
	10 4
	
*/