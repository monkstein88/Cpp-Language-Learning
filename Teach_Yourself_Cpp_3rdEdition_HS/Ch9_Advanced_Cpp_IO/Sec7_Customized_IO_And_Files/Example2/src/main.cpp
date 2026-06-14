
/*
	Example 2.: All of the I/O manipulators can be used with files. For example, in this reworked version of a program presented
	earlier in this chapter, the same manipulator that writes to the screen will also write to a file:
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// Attention:
ostream& atn(ostream& stream){

	stream << "Attention: ";
	return stream;
}

// Please note:
ostream& note(ostream& stream){

	stream << "Please Note: ";
	return stream;
}


int main(){
	ofstream fout("test");

	if(!fout){
		cout << "Cannot open output file.\n";
		return EXIT_FAILURE;
	}

	// write to screen
	cout << atn << "High voltage circuit\n";
	cout << note << "Turn off all lights\n";

	// write to file (disk)
	fout << atn << "High voltage circuit\n";
	fout << note << "Turn off all lights\n";

	return EXIT_SUCCESS;
}


/*

	This program displays the following when ran:


*/
