
/*
	Example 3.: It is not only legal to give constructor functions default arguments, it is also common. As you saw earlier in this
	chapter, many times a constructor is overloaded simply to allow both initialized and unitialized objects to be created. In many
	cases, you can avoid overloading a constructor by giving it one or more default arguments. For example, examine this program:
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass{
	int x;
public:
	/*
		Use default argument instead of overloading myclass's constructor.
	*/
		myclass(int n = 0){ x = n; }
		int getx(){ return x; }
};

int main(){
	myclass o1(10); // declare with initial value
	myclass o2; // declare without initializer

	cout << "o1: " << o1.getx() << '\n';
	cout << "o2: " << o2.getx() << '\n';

	return EXIT_SUCCESS;
}

/*
	As this example shows, by giving 'n' the default value of 0, it is possible to create objecs that have explicit initial values
	and those for which the default value is sufficient.
*/
