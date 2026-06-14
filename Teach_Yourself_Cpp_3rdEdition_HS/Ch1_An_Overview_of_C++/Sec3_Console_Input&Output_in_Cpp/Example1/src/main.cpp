
/*
	Example 1.: This program outputs a string, two integer values and a double floating-point value:
	value
*/
#include <iostream>
using namespace std;

int main(){
	int i, j;
	double d;

	i = 10;
	j = 20;
	d = 99.101;

	cout << "Here are some values: ";
	cout << i;
	cout << ' ';
	cout << j;
	cout << ' ';
	cout << d;

	return 0;
}

/*
	The output of this program is shown here:

	Here are some values 10 20 99.101

	Remember: If you are working with an older compiler, it might not accept the new-style headers and the 'namespace' statements used by
	this and other programs in this book. If this is the case, substitue the old-style code described in the preceding section.
*/
