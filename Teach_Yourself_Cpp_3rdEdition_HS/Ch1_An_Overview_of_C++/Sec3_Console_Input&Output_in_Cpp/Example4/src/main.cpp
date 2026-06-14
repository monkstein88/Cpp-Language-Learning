
/*	Example 4.: The next program prompts the user for an integer value, a floating-point value, and a string. It then uses one input
	statement to read all three.


*/
#include <iostream>
using namespace std;

int main(){
	int i;
	float f;
	char s[80];

	cout << "Enter an integer, vloat, and a string: ";
	cin >> i >> f >> s;
	cout << "Here's your data: " ;
	cout << i << ' ' << f << ' ' << s << "\n";

	return 0;
}

/*
	As this example illustrates, you can input as many items as you like in one input statement. As in C, individual items must be separated
	by whitespace characters (spaces, tabs or newlines).

	When a string is read, input will stop when the first whitespace character is encountered. For example if you enter the following into
	the preceding program

	10 100.12 This is a test

	The program will display this:

	10 100.2 This

	The string is incomplete because the reading of the string stopped with the space after 'This'. The remainder of the string is left in
	the input buffer, awaiting a subsequent input operation. (This is similar to inputting a string by using 'scanf()' with the %s format.)

*/
