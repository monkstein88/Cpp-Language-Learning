
/*
	Example 3.: Here's a short program that illustrates how local variables could be declared anywhere within a block.
*/

#include <iostream>

using namespace std;

int main(){
	int i; // Local variable declared at the start of a block

	cout << "Enter number: ";
	cin >> i;

	// compute factorial
	long long int j, fact = 1; // variables declared action statement

	for(j=i; j>=1; j--)
		fact = fact * j;

	cout << "Factorial is: " << fact;

	return 0;
}

/*
	This program outputs the following when ran:

	Enter number: 12
	Factorial is: 479001600

*/
