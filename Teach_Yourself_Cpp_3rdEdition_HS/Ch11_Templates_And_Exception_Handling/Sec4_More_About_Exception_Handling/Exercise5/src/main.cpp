/*
	Exercise 5.: Here is a skeleton for a function called 'divide()'.

	double divide(double a, double b){
		// add error handling
		return a/b;
	}

	This function returns the result of dividing 'a' by 'b'. Add error checking to this function using C++ exception handling. Specifically,
	prevent a divide-by-zero error. Demonstrate your solution in a program.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

double divide(double a, double b){

	try{ // Check for divide-by-zero
		if(b==0)
			throw "\nError - division by zero!";
	}
	catch(const char* error){
		cout << error << endl;
		exit(EXIT_FAILURE);
	}

	return a/b;
}


int main(){
	double x, y;

	cout << "Enter two floats x & y: ";
	cin >> x >> y;
	cout << "Result x/y: " << divide(x,y);

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
