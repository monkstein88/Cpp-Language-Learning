
/*
	Example 1.: In the following program, the 'coord' class contains a conversion function that converts an object to an integer. In this
	case, the function returns the produce of the two coordinates; however, any conversion approapriate to your specific application is
	allowed.
*/

// A simple conversion function example.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
	int x, y;
public:
	coord(int i, int j){ x = i; y = j; }
	operator int(){ return x*y; } // conversion function - converting to 'int' type, with a value of the object after the conversion 'x*y'
};

int main(){
	coord o1(2, 3), o2(4, 3), o3(4,-3);
	int i;
	double f;

	i = o1; // automatically convert 'o1' to integer
	cout << i << '\n';

	i = 100 + o2; // convert 'o2' to integer
	cout << i << '\n';


	f = 100.332 + static_cast<int> (o3); // use typecasting to convert 'o3' to integer
	cout << f << '\n';

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch13_Sec2_Example1.exe
	6
	112
	88.332


	In this example, notice that the conversion function is called when 'o1' is assigned to an integer and when 'o2' is used as part of
	larger integer expression, and also when there is a typecasting applied directly to 'o3'. As state,d by using a conversion function, you
	allow classes that you create to be integrated into "normal" C++ expressions without having to create a series of complex overloaded
	operator functions.

*/
