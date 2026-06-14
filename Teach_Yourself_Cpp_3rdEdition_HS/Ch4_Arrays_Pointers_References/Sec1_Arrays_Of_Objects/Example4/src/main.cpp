
/*
	Example 4.: As you know, a constructor can take more than one argument. When initializing an array
	of objects whose constructor takes more than one argument, you must use the alternative form out
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int a, b;
public:
	samp(int n, int m){ a = n; b = m; }
	int get_a() { return a; }
	int get_b() { return b; }
};


int main(){
	samp ob[4][2] = { samp(1, 2), samp(3, 4),
										samp(5, 6), samp(7, 8),
									  samp(9, 10), samp(11, 12),
									  samp(13, 14), samp(15, 16) };
	int i;

	for(i=0; i<4; i++){
		cout << ob[i][0].get_a() << ' ';
		cout << ob[i][0].get_b() << "\n";
		cout << ob[i][1].get_a() << ' ';
		cout << ob[i][1].get_b() << "\n";
	}

	cout << "\n";

	return EXIT_SUCCESS;
}

/*
	In this example 'samp's constructor takes two arguments. Here, the array 'ob' is declared
	and initialized in 'main()' by using direct calls to 'samp's constructor. This is necessary
	because the formal C++ syntax allows only one argument at a time in a comma-separated list.
	There is no way, for eample, to specify (or more) argument per entry in the list.Therefore,
	when you initialize arrays of objects that have constructors that take more than one argument,
	you must use the "long form"  initialization syntax rather than the "shorthand form."

	Note: You can always use the long form of initialization even if the object takes only one
	argument. It's just that the short form is more convenient in this case.

	The preceding program displays:
	"1 2
	 3 4
	 5 6
	 7 8
	 9 10
	 11 12
	 13 14
	 15 16"
*/
