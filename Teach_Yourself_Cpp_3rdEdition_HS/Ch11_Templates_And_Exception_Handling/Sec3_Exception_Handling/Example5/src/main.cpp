/*
	Example 5.: As stated earlier, you can have more than one 'catch' associated with a 'try'. In fact, it is common to do so. However, each
	'catch' must catch a different type aof exception. For example, the following program catches both integers and strings:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// Different types of exceptions can be caught.
void Xhandler(int test){
	try{
		if(test)
			throw test;
		else
			throw "Value is zero";
	}
	catch(int i){
		cout << "Caught One! Ex, #: " << i << '\n';
	}
	catch(const char* str){
		cout << "Caught a string: ";
		cout << str << '\n';
	}
}


int main(){

	cout << "start\n";

	Xhandler(1);
	Xhandler(2);
	Xhandler(0);
	Xhandler(3);

	cout << "end";

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch11_Sec3_Example5.exe
	start
	Caught One! Ex, #: 1
	Caught One! Ex, #: 2
	Caught a string: Value is zero
	Caught One! Ex, #: 3
	end

	As you can see, each 'catch' statement responds only to its own type.

	In general, 'catch' expressions are checked in the order in which they occur in a program. Only a matching statement is executed. All
	other 'catch' blocks are ignored

*/
