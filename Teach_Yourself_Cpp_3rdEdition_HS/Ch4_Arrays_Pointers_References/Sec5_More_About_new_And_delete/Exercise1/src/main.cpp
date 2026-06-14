
/*
	Exercise 1.: Show how to convert the following code into its equivalent that uses 'new'.

	char *p;

	p = (char *) malloc(100);
	//...
	strcpy(p, "This a test");

*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	char *p = new char [100];

	if(!p){
		cout << "Allocation error!\n";
		return EXIT_FAILURE;
	}
	//...
	strcpy(p, (char* ) "This is a test");
	return EXIT_SUCCESS;
}

/*
	Hint: A string is simply an array of characters.
*/
