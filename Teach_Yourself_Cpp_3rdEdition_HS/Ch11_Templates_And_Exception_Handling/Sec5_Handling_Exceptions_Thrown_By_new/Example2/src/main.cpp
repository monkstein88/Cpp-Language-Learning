/*
	Example 2.: Since the previous program is unlikely to fail under any normal circuimstance, the following program demonstrates 'new's
	exception-throwing capability by forcing on allocation failure. It does this by allocating memory until it is exhausted
*/

// Force allocation failure
#include <iostream>
#include <new> // Include to have acces to exception 'bad_alloc' that 'new' throws when fails
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	double* p;

	// this will eventually run out of memory
	do{
		try{
			p = new double [100000];
		}
		catch(bad_alloc xa){
			cout << "Allocation failure.\n";
			return 1;
		}
	}while(p);

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch11_Sec5_Example2.exe
	Allocation failure.



*/
