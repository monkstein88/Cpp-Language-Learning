
/*
	Example 3.:The following program uses 'flags()' to display the settings of the format flags relative to 'cout'. Pay special
	attention to the 'showflags()' function. You might find it usefful in programs you write.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void showflags();

int main(){

	// show default condition of format flags
	showflags();

	cout.setf(ios::oct | ios::showbase | ios::fixed);

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
	Inside 'showflags()' , the local variable 'f' is declared to be of type 'fmtflags'. If your compiler does not define
	'fmtflags', declare this variable as 'long' instead. The output from the program is shown here:

	skipws on
	left off
	right off
	internal off
	dec on
	oct off
	hex off
	showbase off
	showpoint off
	showpos off
	uppercase off
	scientific off
	fixed off
	unitbuf off
	boolalpha off

	skipws on
	left off
	right off
	internal off
	dec on
	oct on
	hex off
	showbase on
	showpoint off
	showpos off
	uppercase off
	scientific off
	fixed on
	unitbuf off
	boolalpha off



*/
