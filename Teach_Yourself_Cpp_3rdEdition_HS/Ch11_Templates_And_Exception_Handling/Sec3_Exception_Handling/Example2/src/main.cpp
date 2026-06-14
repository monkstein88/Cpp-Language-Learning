/*
	Example 2.: As mentioned, the type of the exception must match the type specified in a 'catch' statement. For example, in the preceding
	example, if you change the type in the 'catch' statement to 'double', the exception will not be caught, and abnormal termination will
	occur. This change is shown here
*/

// This example will not work.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){

	cout << "Start\n";

	try{ // start a try block
		cout << "Inside try block\n";
		throw 10; // throw an error
		cout << "This will not execute";
	}
	catch(double i){ // won't work for an int exception
		cout << "Caught One! Number is: ";
		cout << i << "\n";
	}

	cout << "end";

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch11_Sec3_Example2.exe
	Start
	Inside try block
	terminate called after throwing an instance of 'int'

	The program produces the output above because the integer exception will not be caught by a 'double catch' statement.
*/
