/*
	Example 2.: One very good use for 'catch(...)' is as the last 'catch' of a cluster of catches. In this capacity it provides a useful
	default or "catch all" statement. For example, this slightly different version of the preceding program explicitly catches integer
	exceptions but relies upon 'catch(...)' to catch all others.
*/

// This example catch(...) as default.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void Xhandler(int test){

	try{
		if(test==0)
			throw test; // throw 'int'
		if(test==1)
			throw 'a'; // throw 'char'
		if(test==2)
			throw 123.23; // throw 'double'
	}
	catch(int i){ // Exception Handler - catch an 'int' exception
		cout << "Caught "  << i << '\n';
	}
	catch(...){ // Exception Handler - catch all other exceptions
		cout << "Caught One!\n";
	}
}


int main(){

	cout << "start\n";

	Xhandler(0);
	Xhandler(1);
	Xhandler(2);

	cout << "end";
	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch11_Sec4_Example2.exe
	start
	Caught 0
	Caught One!
	Caught One!
	end


	As this example suggests, using 'catch(...)' as a default is a good way to catch all exceptions that you don't want to handle explicitly.
	Also, by catching all exceptions, you prevent an unhandled exception from causing an abnormal program termination.

*/
