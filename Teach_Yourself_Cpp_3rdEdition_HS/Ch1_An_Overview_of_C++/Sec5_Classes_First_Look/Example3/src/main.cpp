
/*
	Example 3.: Just as there can be public member functions, there can be public member variables as well. For example, if 'a' were
	declared in the public section of 'myclass' 'a' could be referenced by any part of the program, as shown here:

*/

// This fragment does not contain an error
#include <iostream>
using namespace std;

class myclass{
	public:
		// now 'a' is declared as public
		int a;
		// and there is no need for 'set_a()' or 'get_a()'
};


int main(){
	myclass ob1, ob2;
	// Here the access is done directly
	ob1.a = 10;
	ob2.a = 99;


	cout << ob1.a << "\n";
	cout << ob2.a << "\n";

	return 0;
}
/*
	In this example, since 'a' is declared as a public member of 'myclass', it is directly accessible from 'main()'. Notice how the dot
	operator is used to access 'a'. In general, when you are calling a member function or accessing a member variable from outside its class,
	the object's name followed by the dot operator followed by the member's name is required to fully specify which object's member you are
	referring to.
*/
