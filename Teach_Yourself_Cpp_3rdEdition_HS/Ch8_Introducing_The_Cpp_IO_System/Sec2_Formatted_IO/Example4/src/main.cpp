
/*
	Example 4.: The next program illustrates the second version of 'flags()'. It first constructs a flag mask that turns on
	'showpos', 'showbase', 'oct' and 'right'. It then uses 'flags()' to set the flag variable assocaiated with 'cout' to these
	settings. The function 'showflags()' verifies that the flags are set as indicated. (This is the same function used in the
	program.)
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void showflags();


int main(){

	// show default condition of format fmtflags
	showflags();

	// showpos, showbase, oct, right are on, others off
	ios::fmtflags f = ios::showpos | ios::showbase | ios::oct | ios::right;

	cout.flags(f); // set flags

	showflags();

	return EXIT_SUCCESS;
}


// This function displays the status of the format flags.
void showflags(){
	ios::fmtflags f;

	f = cout.flags(); // get flag settings

	if(f & ios::skipws)
		cout << "skipws on\n";
	else
		cout << "skipws off\n";

	if(f & ios::left)
		cout << "left on\n";
	else
		cout << "left off\n";

	if(f & ios::right)
		cout << "right on\n";
	else
		cout << "right off\n";

	if(f & ios::internal)
		cout << "internal on\n";
	else
		cout << "internal off\n";

	if(f & ios::dec)
		cout << "dec on\n";
	else
		cout << "dec off\n";

	if(f & ios::oct)
		cout << "oct on\n";
	else
		cout << "oct off\n";

	if(f & ios::hex)
		cout << "hex on\n";
	else
		cout << "hex off\n";

	if(f & ios::showbase)
		cout << "showbase on\n";
	else
		cout << "showbase off\n";

	if(f & ios::showpoint)
		cout << "showpoint on\n";
	else
		cout << "showpoint off\n";

	if(f & ios::showpos)
		cout << "showpos on\n";
	else
		cout << "showpos off\n";

	if(f & ios::uppercase)
		cout << "uppercase on\n";
	else
		cout << "uppercase off\n";

	if(f & ios::scientific)
		cout << "scientific on\n";
	else
		cout << "scientific off\n";

	if(f & ios::fixed)
		cout << "fixed on\n";
	else
		cout << "fixed off\n";

	if(f & ios::unitbuf)
		cout << "unitbuf on\n";
	else
		cout << "unitbuf off\n";

	if(f & ios::boolalpha)
		cout << "boolalpha on\n";
	else
		cout << "boolalpha off\n";

	cout << '\n';
}

/*

*/
