
/*
	Exercise 2.: Create an output manipulator called 'sethex()' that sets output to hexadecimal and turns on the 'uppercase' and
	'showbase' flags. Also, create an output manipulator called 'reset()' that undoes the changes made by 'sethex()'.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

static ios::fmtflags fmt_default;

ostream& sethex(ostream& stream){

	// preserve the defualt (previous) fmtflags for the stream, that we're about to alter in the following statements
	fmt_default = stream.flags();
	// for 'basefield':
	stream.unsetf(ios::dec); // This is necessary with GCC, so the next statement takes effect
	stream.setf(ios::hex);
	stream.setf(ios::showbase);
	stream.setf(ios::uppercase);

	return stream;
}

ostream& reset(ostream& stream){

	// restore the fmtflags to their defaults
	stream.flags(fmt_default);

	return stream;
}

int main(){

	cout << "Value of " << 254 << " (dec) = " << sethex << 254 << " (hex)" << endl;
	cout << "Value of " << 122 << " (hex) = " << reset << 122 << " (dec)" << endl;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	Value of 254 (dec) = 0XFE (hex)
	Value of 0X7A (hex) = 122 (dec)


*/
