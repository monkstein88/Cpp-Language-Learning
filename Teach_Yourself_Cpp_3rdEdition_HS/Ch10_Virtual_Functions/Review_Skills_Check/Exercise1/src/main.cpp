
/*
	Exercise 1.: Create a manipulator that causes numbers to be displayed in scientific notation, using a capital 'E'.
*/
#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

ostream& sci_E(ostream& stream){

	stream.unsetf(ios::fixed); // This might be in conflict with 'ios::scientific' so it's better to be sure that it's turned off
	stream.setf(ios::scientific);
	stream.setf(ios::uppercase);

	return stream;
}


int main(){

	cout << "Displaying float (in capital scientific notation): " << sci_E << 3.14159265359 << endl;

   return EXIT_SUCCESS;
}

/*

	This program displays the following output when ran:

	$ ./Ch10_Review_Skills_Check_Exercise1.exe
	Displaying float (in capital scientific notation): 3.141593E+00


*/
