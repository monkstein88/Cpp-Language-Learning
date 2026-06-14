
/*
	Example 2.: However, if the program is changed so that 'f()' uses sa reference parameter, no copy is made
	and, therefore, no destructor is called when 'f()' returns:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class myclass{
	int who;
public:
	myclass(int n){
		who = n;
		cout << "Constructing " << who << "\n";
	}
	~myclass(){ cout << "Destructing " << who << "\n"; }
	int id(){ return who; }
};

// Now o is passed by reference
void f(myclass &o){
	// note that . operator is still used!!
	cout << "Received " << o.id() << "\n";
}


int main(){
	myclass x(1);

	f(x);

	return EXIT_SUCCESS;
}

/*
	This version displays the following output:
	"Constructing 1
	 Received 1
	 Destructing 1
  "

	Remember: When accessing members of an object by using a reference, use the dot operator, not the arrow.
*/
