
/*
	Exercise 2.:  Show the I/O statement that outputs the value 100 in hexadecimal with the base indicator (the '0x') shown. Use
	the 'setiosflags()' manipulator to accomplish this.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;


int main(){

	//cout << hex << showbase << -100 << ' ' << 100 << endl;
	cout << resetiosflags(ios::dec); // Note: THIS IS ACTUALLY MANDATORY TO DO, YOU NEED TO DISABLE THE
												// DECIMAL FORMAT DISPALY FIRST!!!
	cout <<setiosflags(ios::hex | ios::showbase);
	cout << -100 << ' ' << 100 << endl;
	return EXIT_SUCCESS;
}




/*

*/
