
/*
	Exercise 1.: Create an output manipulator that outputs three tabls and then sets the field width to 20. Demonstrate that your
	manipulator works.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

const long double PI = 3.14159265358979323846 ;

ostream& tabs(ostream& stream){

	stream << "\t\t\t";
	stream.width(20);

	return stream;
}


int main(){

	cout << "The value of PI is:" << endl;
	cout << tabs << PI << endl;

	return EXIT_SUCCESS;
}

/*
	This program displays the following output when ran:

	$ ./Ch9_Mastery_Skills_Check_Exercise1.exe
	The value of PI is:
	                                     3.14159


*/
