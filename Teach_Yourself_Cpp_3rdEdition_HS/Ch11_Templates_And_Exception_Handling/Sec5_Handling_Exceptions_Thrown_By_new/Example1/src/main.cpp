/*
	Example 1.: Here is an example of 'new' that uses a 'try/catch' block to monitor for an allocation failure.
*/


#include <iostream>
#include <new> // Include to have acces to exception 'bad_alloc' that 'new' throws when fails
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	int* p;

	try{
		p = new int; // allocate memory for int
	}
	catch(bad_alloc xa){
		cout << "Allocation failure.\n";
		return 1;
	}

	for(*p = 0; *p < 10; (*p)++)
		cout << *p << " ";

	delete p;

	return EXIT_SUCCESS;
}

/*
	If an allocation failure occurs, it is caught by the 'catch' statement.
	
	This program displays the following when ran:

	$ ./Ch11_Sec5_Example1.exe
	0 1 2 3 4 5 6 7 8 9

*/
