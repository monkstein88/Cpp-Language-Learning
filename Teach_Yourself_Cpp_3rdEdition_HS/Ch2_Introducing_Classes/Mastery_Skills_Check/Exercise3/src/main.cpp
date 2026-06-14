
/*
	Ex 3.: What does the following program display?
*/
#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
	int i = 10;
	long l = 1000000;
	double d = -0.0009;
	
	cout << i << ' ' << l << ' ' << d;
	cout << "\n";

	return EXIT_SUCCESS;
}


/*
 * The output shall be: 
 * 10 1000000 -0.0009
 */