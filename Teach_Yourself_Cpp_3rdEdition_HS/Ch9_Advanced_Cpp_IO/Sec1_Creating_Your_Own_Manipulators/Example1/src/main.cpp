
/*
	Example 1.: As a simple first example, the following creates a manipulator called 'setup()' that sets the field width to 10,
	the precision to 4, and the fill character to '*'.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

ostream& setup(ostream& stream){

	stream.width(10);
	stream.precision(4);
	stream.fill('*');

	return stream;
}


int main(){

	cout << setup << 123.123456 << endl;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	*****123.1


*/
