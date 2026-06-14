
/*
	Example 1. As a simple first example, this program contains an inserter for the 'coord' class, developed in a previous chapter:
*/

// Use a friend inserter for objects of type 'coord'.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
	int x,y;
public:
	// Constructors:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	// Overloading - via friend functions:
	friend ostream& operator<<(ostream& stream, coord ob);
	// Misc utility functions:
	void setc(int i , int j){ x = i; y = j;}
	void getc(int& i, int& j){ i = x; j = y;}
};

ostream& operator<<(ostream& stream, coord ob){

	stream << ob.x << ", " << ob.y << '\n';

	return stream;
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

	The inserter in this program illustrates one very important point about creating your own inserter: make them as general as
	possible. In this case, the I/O statement inside the inserter outputs the values of 'x' and 'y' to 'stream', which is whatever
	stream is passed to the function. As you will see in the following chapter, when written correctly the same inserter that
	outputs to the screen can be used ot output to 'any' stream. Sometimes beginners are tempted to write the 'coord' inserter like
	this:

	ostream& operator<<(ostream& stream, coord ob){

		cout << ob.x << ", " << ob.y << '\n';

		return stream;
	}

	In this case, the output statement is hard-coded to display information on the standard output device linked to 'cout'.
	However, this prevents the inserter from being used by other streams. The point is that you should make your inserters as
	general as possible becxause there is no disadvantage of doing so.
*/




























//
