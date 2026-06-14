/*
	Example 4.: A 'try' block can be localized to a function. When this is the case, each time the function is entered, the exception
	handling relative to that function is reset. For example, examine this program:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// A try/catch can be inside a function other than main().
void Xhandler(int test){

	try{
		if(test)
			throw test;
	}
	catch(int i){
		cout << "Caught One! Ex, #: " << i << '\n';
	}
}

int main(){

	cout << "start\n";

	Xhandler(1);
	Xhandler(2);
	Xhandler(3);

	cout << "end";

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch11_Sec3_Example4.exe
	start
	Caught One! Ex, #: 1
	Caught One! Ex, #: 2
	Caught One! Ex, #: 3
	end


*/
