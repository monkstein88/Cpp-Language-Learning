/*
	Example 3.: The follwoing program shows how to restrict the types of exceptions that can be thrown from a function:

	N.B! 'Dynamic exception specification' feature  - throw(type_list) in a function definiton is deprecated in C++11 and above. So if you
	won't to use this feature you've got to compile your program with downgrade standard C++03 or below.
*/

// Restricting function throw typess
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// This function can only throw ints, chars and doubles.
void Xhandler(int test) throw(int, char, double){ // Note that 'Dynamic exception specification' is deprecated in C++11 and above.
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
	In this program, the function 'Xhandler()' can throw only integer, character, and 'double' exceptions. If it attempts to throw any other
	type of exception, an abnormal program termination will occur. (That is, 'unexpected()' will be called.) To see an example of this,
	remove 'int' from the list and retry the program.

	It is important to understand that a function can only be restricted in what types of exceptions it throws back to the 'try' block that
	called it. That is, a 'try' block within a function can be thrown any type of exception so long as it is caught within that function. The
	restriction applies only when throwing an exception out of the function.

	This program displays the following when ran:

	$ ./Ch11_Sec4_Example3.exe
	start
	Caught int
	end

*/
