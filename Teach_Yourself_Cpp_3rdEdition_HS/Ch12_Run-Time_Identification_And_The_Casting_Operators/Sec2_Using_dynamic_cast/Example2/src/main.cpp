
/*
	Example 2.: The following example illustrates how a 'dynamic_cast' can be used to replace 'typeid'.
*/

// Use 'dynamic_cast' to replace 'typeid'
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class Base{
public:
	virtual void f(){ }
};

class Derived : public Base{
public:
	void derivedOnly(){
		cout << "Is a Derived Object\n";
	}
};


int main(){
	Base *bp, b_ob;
	Derived *dp, d_ob;

	// ***************************
	// use 'typeid'
	// ***************************
	bp = &b_ob;
	if(typeid(*bp) == typeid(Derived)){
		dp = (Derived *)bp;
		dp->derivedOnly();
	}
	else{
		cout << "Cast from 'Base' to 'Derived' failed.\n"; // This should be executed
	}

	bp = &d_ob;
	if(typeid(*bp) == typeid(Derived)){
		dp = (Derived *) bp; // This should be executed
		dp->derivedOnly();
	}
	else{
		cout << "Error, cast should work!\n";
	}

	// ***************************
	// use 'dynamic_cast'
	// ***************************
	bp = &b_ob;
	dp = dynamic_cast<Derived *> (bp);
	if(dp){
		dp->derivedOnly();
	}
	else{
		cout << "Cast from 'Base' to 'Derived' failed\n";  // This should be executed
	}

	bp = &d_ob;
	dp = dynamic_cast<Derived *> (bp);
	if(dp){
		dp->derivedOnly(); // This should be executed
	}
	else{
		cout << "Error, cast should work!\n";
	}


	return EXIT_SUCCESS;
}

/*
	As you can see, the use of 'dynamic_cast' simplifies the logic required to a base pointer into a derived pointer.

	This program displays the following when ran:

	$ ./Ch12_Sec2_Example2.exe
	Cast from 'Base' to 'Derived' failed.
	Is a Derived Object
	Cast from 'Base' to 'Derived' failed
	Is a Derived Object
	

*/
