
/*
	Example 1.: Here is an example that shows how to set several of the format flags:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	ios::fmtflags default_fmtflag; // We need the scope resolution operator '::', here
	default_fmtflag = cout.flags(); // Get the current 'default' flags for the 'cout' stream - to preserve them

	// display using default settings
	cout << 123.23 << " hello " << 100 << '\n';
	cout << 10 << ' ' << -10 << '\n';
	cout << 100.0 << "\n\n";

	// now, change formats
	cout.unsetf(ios::dec); // not required by all compilers, but for GCC 8.1.0 it is required - so you need to unset previous
								  // enabled flag, that will conflict (compete for the 'same' feature) with a flag you will set in a
								  // following statement. In this case - 'dec' or 'hex' display of values.
	cout.setf(ios::hex | ios::scientific);
	cout << 123.23 << " hello " << 100 << '\n';


	cout.setf(ios::showpos);
	cout << 10 << ' ' << -10 << '\n'; // Notice that the stream 'cout' is still holding and formatting its data, according
											 	// the previously set fmtflag configuration, that were several statements above. I.e.
												// the values are still printed in hex format.
	cout.unsetf(ios::scientific); // Again, you need to disable a flag first, that will conflict with a flag that you are about to
											// set in a following statement, both of which fight over a feature shared amongst the two :
											// in this case - 'scientific' or 'normal' notation of floating point values
	cout.setf(ios::showpoint | ios::fixed);
	cout << 100.0 << '\n'; // Again, this still countnue to hold all the previous settings given several instances before , plus,
								  // the one given to it just in the last (previous) statement)  - it tries to show a hexadecimal value,
								  // in scientific notation (because the value is a float), with deciamal coma, showing the plus sign and
								  // etc.

	cout.flags(default_fmtflag); // Restore the default 'fmtflags' flags

	return EXIT_SUCCESS;
}

/*
	This program outputs:

	123.23 hello 100
	10 -10
	100

	1.232300e+02 hello 64
	a fffffff6
	+100.000000

	Notice that the 'showpos' flag affects only decimal output. It does not affect the value 10 when output in hexadeciaml. Also
	notice that the 'unsetf()' call that turns off the 'dec' flag (which is on by default). This call is not needed for all
	compilers. But for some compilers, the 'dec' flag overrides the other flags, so it is necessary to turn it off when turning
	on either 'hex' or 'oct', In general, for maximum portability, it is better to set only the number base that you want to use
	and clear the others.
*/
