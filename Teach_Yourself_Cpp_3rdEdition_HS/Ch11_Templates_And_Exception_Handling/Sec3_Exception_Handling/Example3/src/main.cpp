/*
	Example 3.: An exception can be thrown from a statement that is outside the 'try' block as long as the statement is within a function
	that is called from within the 'try' block. For example, this is a valied program:
*/

// Throwing an exception from a function outside the try block.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void Xtest(int test){
	cout << "Inside Xtest, test is: " << test << "\n";
	if(test)
		throw test;
}

int main(){

	cout << "start\n";

	try{ // start a try block
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}

	catch(int i){// catch an error
		cout << "Caught One! Number is: ";
		cout << i << "\n";
	}

	cout << "end";

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch11_Sec3_Example3.exe
	start
	Inside Xtest, test is: 0
	Inside Xtest, test is: 1
	Caught One! Number is: 1
	end


*/
