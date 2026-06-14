
/*
	Example 1.: Perphaps the most frequent use of overloaded constructor functions is to provide the option of
  giving an object an initialization or not giving it one. For example, in the following program, 'o1' is given
	an initial value, but 'o2' is not. If you remove the constructor that has  the empty argument list, the program
	will not compile because there is no constructor that matches a non-initialized object of type 'myclass'. The
	reverse is also true. If you remove the parameterized constructror, the program will not compile because there
	is no match for an initialized object . Both are needed for this program to compile correctly.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass{
	int x;
public:
		//overload constructo two ways
		myclass(){ x = 0; } // no initializer
		myclass(int n){ x = n; } // initializer
		int get_x() { return x; }
};

int main(){
	myclass o1(10); // declare with initial value
	myclass o2; // declare without initializer

	cout << "o1: " << o1.get_x() << '\n';
	cout << "o2: " << o2.get_x() << '\n';

	return EXIT_SUCCESS;
}

/*

*/
