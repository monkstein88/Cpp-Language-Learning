/*
	Example 1.: The follwong program illustrates 'catch(...)'
*/

// This example catches all exceptions.
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
	catch(...){ // Exception Handler - that catches all exceptions
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

	$ ./Ch11_Sec4_Example1.exe
	start
	Caught One!
	Caught One!
	Caught One!
	end

	As you can see, all three 'throws' were caught using the one 'catch statement'.

*/
