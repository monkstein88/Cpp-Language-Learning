
/*
	Example 3.: As explained, Standard C++ defines its entire library in its own namespace, 'std'. This is the reason that most of the
	programs in this book have included the following statement:

	using namespace std;

	This causes the 'std' namespace to be brought into the current namespace, which gives you direct access to the names of the functions
	and classes defined within the library without having to qualify each one with 'std::'.

	Of course, you can explicitly qualify each name with 'std::' if you like.  For example, the following program does not bring the
	library into the global namespace.
*/

// use explicit 'std::' qualification.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function


int main(){
	double val;

	std::cout << "Enter a number: ";
	std::cin >> val;
	std::cout << "This is your number: ";
	std::cout << val << std::endl;

	return EXIT_SUCCESS;
}

/*
	Here 'cout' and 'cin' are both explicitly qualified by their namespace. That is, to write a standard output you must specify 'std::cout',
	and to read from standard input you must use 'std::in'.

	You might not want to bring the Standard C++ library intto the global namespace if your program will be making only limited use of it.
	However, if your program contains hundreds of references to library names, including 'std' in the current namespace is far easier than
	qualifying each name individually.

	This program displays the following when ran twice:

	$ ./Ch13_Sec1_Example3
	Enter a number: 0.0
	This is your number: 0

	$ ./Ch13_Sec1_Example3
	Enter a number: -414.4404
	This is your number: -414.44


*/
