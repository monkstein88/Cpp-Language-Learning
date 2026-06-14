/*
	Example 5.:  As you have learned, you can rethrow an exception. The most likeley reason for doing so is to allow multiple handlers
	access to the exception. For example, perhaps one exception handler manages one aspect of an exception and a second handler copes with
	another. An exception can only be rethrown from within a 'catch' block (or from any function called from within that block). When you
	rethrow an exception, it will no be recaught by the same 'catch' statement. It will propagate to an outer 'catch' statement. The
	following illustrates rethrowing an exception. It rethrows 'char*' exception.
*/

// Example of rethrowing an exception.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void Xhandler(){

	try{
		throw "hello"; // throw a 'const char*'
	}
	catch(const char* ){ // catch a 'const char*'
		cout << "Caught const char* inside Xhandler()\n";
		throw; // rethrow 'const char*' out of function
	}
}

int main(){

	cout << "start\n";

	try{
		Xhandler();
	}
	catch(const char* ){
		cout << "Caught const char* inside main()\n";
	}

	cout << "end";

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch11_Sec4_Example5.exe
	start
	Caught const char* inside Xhandler()
	Caught const char* inside main()
	end

*/
