/*
	Example 4.: The following change to 'Xhandler()' prevents it from throwing any exceptions:

	N.B! 'Dynamic exception specification' feature  - throw(type_list) in a function definiton is deprecated in C++11 and above. So if you
	won't to use this feature you've got to compile your program with downgrade standard C++03 or below.
*/

// This function can throw NO exceptions!
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// This function can be thrown NO exceptions!
void Xhandler(int test) throw(){ // Note that 'Dynamic exception specification' is deprecated in C++11 and above.
	/*
		The following statements no longer work. Instead, they will cause an abnormal program termination.
		This is because the function attempts to throw disallowed exception.
	*/
	if(test==0)
		throw test; // throw 'int'
	if(test==1)
		throw 'a'; // throw 'char'
	if(test==2)
		throw 123.23; // throw 'double'
}

int main(){

	cout << "start\n";

	try{ // also, try passing 1 and 2 to 'Xhandler()'
		Xhandler(0);
	}
	catch(int i){
		cout << "Caught int\n";
	}
	catch(char c){
		cout << "Caught char\n";
	}
	catch(double d){
		cout << "Caught double\n";
	}

	cout << "end";

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch11_Sec4_Example4.exe
	start
	terminate called after throwing an instance of 'int'


*/
