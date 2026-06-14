
/*
	Example 1.: Here is a program that contains both C and C++-style comments
*/

/*
	This is a C-like comment. The program determines whether a given number is even or odd.
*/
#include <iostream>
using namespace std;

int main(){
	int num; // This is a C++ style, single line comment

	// read the number
	cout << "Enter number to be tested: ";
	cin >> num;

	// checks whether it is even or odd
	if((num%2)==0) cout << "Number is even\n";
	else cout << "Number is odd\n";

	return 0;
}
