
/*
	Example 1.: The following program demonstrates 'dynamic_cast'
*/

// Demonstrate 'dynamic_cast'
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class Base{
public:
	virtual void f() { cout << "Inside Base\n"; }
	// ...
};

class Derived : public Base{
public:
	void f() { cout << "Inside Derived\n"; }
};

int main(){
	Base *bp, b_ob;
	Derived *dp, d_ob;

	dp = dynamic_cast<Derived *> (&d_ob);
	if(dp){
		cout << "Cast from 'Derived *' to 'Derived *' OK.\n";
		dp->f();
	}
	else{
		cout << "Error\n";
	}

	cout << endl;

	bp = dynamic_cast<Base *> (&d_ob);
	if(bp){
		cout << "Cast from 'Derived *' to 'Base *' OK.\n";
		bp->f();
	}
	else{
		cout << "Error\n";
	}

	cout << endl;

	bp = dynamic_cast<Base *> (&b_ob);
	if(bp){
		cout << "Cast from 'Base *' to 'Base *' OK.\n";
		bp->f();
	}
	else{
		cout << "Error\n";
	}

	cout << endl;

	dp = dynamic_cast<Derived *> (&b_ob); // Actually , the compiler itself gives out a warning , when trying to compile this line of code.
	if(dp){
		cout << "Error\n"; // It is an error because the above statement with the 'dynamic_cast' should not work (proceed sucessfully) at all.
	}
	else{
		cout << "Cast from 'Base *' to 'Derived *' not OK.\n";
	}

	cout << endl;

	bp = &d_ob; // 'bp' points to 'Derived' object
	dp = dynamic_cast<Derived *> (bp);
	if(dp){
		cout << "Casting 'bp' to a 'Derived *' OK\n" <<
				  "because 'bp' is really pointing\n"  <<
				  "to a 'Derived' object.\n";
		dp->f();
	}
	else{
		cout << "Error\n";
	}

	cout << endl;

	bp = &b_ob; // 'bp' points to 'Base' object
	dp = dynamic_cast<Derived *> (bp);
	if(dp){
		cout << "Error\n"; // It is an error because the above statement with the 'dynamic_cast' should not work (proceed sucessfully) at all.
	}
	else{
		cout << "Now casting 'bp' to a 'Derived *'\n" <<
				  "is not OK because 'bp' is really\n" <<
				  "pointing to a 'Base' object.\n";
	}

	cout << endl;

	dp = &d_ob; // 'dp' points to 'Derived' object
	bp = dynamic_cast<Derived *> (dp);
	if(bp){
		cout << "Casting 'dp' to a 'Base *' is OK.\n";
		bp->f();
	}
	else
		cout << "Error\n";

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch12_Sec2_Example1.exe
	Cast from 'Derived *' to 'Derived *' OK.
	Inside Derived

	Cast from 'Derived *' to 'Base *' OK.
	Inside Derived

	Cast from 'Base *' to 'Base *' OK.
	Inside Base

	Cast from 'Base *' to 'Derived *' not OK.

	Casting 'bp' to a 'Derived *' OK
	because 'bp' is really pointing
	to a 'Derived' object.
	Inside Derived

	Now casting 'bp' to a 'Derived *'
	is not OK because 'bp' is really
	pointing to a 'Base' object.

	Casting 'dp' to a 'Base *' is OK.
	Inside Derived
	

*/
