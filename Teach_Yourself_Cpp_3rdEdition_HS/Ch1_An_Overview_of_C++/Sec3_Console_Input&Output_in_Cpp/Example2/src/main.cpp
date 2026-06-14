
/*
	Example 2.: It is possible to output more than one value in a single I/O expression. For example, this version of the program described
	in Example 1 shows a more efficient way to code the I/O statements
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
	cout << i << ' ' << j << ' ' << d; // This line prints out several elements in a single statement.
	cout << endl;

	return 0;
}

/*
	Here the line

	cout << i << ' ' << ' ' << d;

	outputs several items in one expression. In general, you can use a single statement to output as many items as you like. If this seems
	confusing, simply remember that the '>>'' output operator behaves line any other C++ operator and can be part of an arbitrarily long
	expression.

	Notice that you must explicitly include spaces between items when needed. IF the spaces are left out, the data will run together when
	displayed on the screen.
*/
