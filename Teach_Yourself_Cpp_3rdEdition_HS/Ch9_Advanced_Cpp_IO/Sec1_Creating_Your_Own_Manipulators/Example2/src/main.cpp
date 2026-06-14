
/*
	Example 2.: Custom manipulators need not be complex to be useful. For example, the simple manipulators 'atn()' and 'note()'
	shown here, provide a shorter way to output frequently used words or phrases.
*/

#include <iostream>
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

	cout << atn << "High voltage circuit\n";
	cout << note << "Turn off all lights\n";

	return EXIT_SUCCESS;
}

/*
	Even though they are simple, if used frequntly, these manipulators save you from some tedious typing. 

	This program displays the following when ran:

	Attention: High voltage circuit
	Please Note: Turn off all lights


*/
