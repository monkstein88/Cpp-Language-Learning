
/*
	Example 2. For the sake of illustration, here is the preceding program revised so that the inserter is 'not' a friend of the
	'coord' class. Because the inserter does not have access to the private parts of 'coord', the variables 'x' and 'y' have to be
	made public.
*/

#include <iostream>
// Create an inserter for objects of type 'coord', using a non-friend inserter.
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
public:
	int x, y; // must be public
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
};

// An inserter for the 'coord' class.
ostream& operator<<(ostream& stream, coord ob){

		stream << ob.x << ", " << ob.y << '\n';

		return stream; // Return what had been accumulated in 'stream' so far
}


int main(){
	coord a(1, 1), b(10, 23);

	cout << a << b;

	return EXIT_SUCCESS;
}

/*
	This program displays the following:

	1, 1
	10, 23


*/
