
/*
	Example 1. This program adds an extractor to the 'coord' class:
*/

// Use a friend inserter for objects of type 'coord'.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class coord{
	int x, y;
public:
	// Constructors
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	// Overloading - via friend functions: - of stream operators:
	friend ostream& operator<<(ostream& stream, coord ob); // 'inserter' functions
	friend istream& operator>>(istream& stream, coord& ob); // 'extractor' function
};

ostream& operator<<(ostream& stream, coord ob){

	stream << ob.x << ", " << ob.y << '\n';

	return stream;
}

istream& operator>>(istream& stream, coord& ob){

	cout << "Enter coordinates: ";
	stream >> ob.x >> ob.y;

	return stream;
}

int main(){
	coord a(1, 1), b(10, 23);

	cout << a << b;

	cin >> a;
	cout << a;

	return EXIT_SUCCESS;
}

/*
	Notice how the extractor  also prompts the user for input. Although such prompting is not required (or even desired) for most
	situations, this function shows how a customized extractor can simplify coding when a promtpint message is needed.

	This program displays the following when ran:

	1, 1
	10, 23
	Enter coordinates: 4 19
	4, 19
*/




























//
