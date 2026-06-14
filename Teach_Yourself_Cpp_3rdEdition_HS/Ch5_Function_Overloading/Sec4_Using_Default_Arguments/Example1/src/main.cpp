
/*
	Example 1.: Here is a program that illustrates the example described in the preceding discussion:

*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void f(int a=0, int b=0){
	cout << "a: " << a <<", b: " << b ;
	cout << '\n';
}


int main(){

	f();
	f(10);
	f(10, 99);

	return EXIT_SUCCESS;
}

/*
	As you should expect, this program displays the following output:
	"
	a: 0, b: 0
	a: 10, b: 0
	a: 10, b: 99
	"
	Remember that once the first default argument is specified, all following paramters must have defaults as well. FOr example,
	this slightly different version of 'f()' causes a compile time error:

	void f(int a=0, int b){ // wrong! b must have default, too

		cout << "a: " << a << ", b: " << b ;
		cout << '\n';

	}
*/
