
/*
	Example 2.: If a class type includes a constructor, an array of objects can be initialized. For example,
	here 'ob' is an initialized array:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int a;
public:
	samp(int n){ a = n;}
	int get_a(){ return a; }
};


int main(){
	samp ob[4] = { - 1, -2, -3, -4};
	int i;

	for(i=0; i<4; i++)
		cout << ob[i].get_a() << ' ';

	cout << "\n";

	return EXIT_SUCCESS;
}

/*
	This program displays '-1 -2 -3 -4' on the screen. In this example, the values  -1 through -4 are
	passed to the 'ob' constructor function.

	Actually, the syntax shown in  the initialization list is shorthand for this longer form (first shown
	in Chapter 2):

	samp ob[4] = { samp(-1), samp(-2), samp(-3), samp(-4) };

	However, the form used in the program is more common (although, as you will see, this form will work
	only with arrays whose constructors take only one argument).
*/
