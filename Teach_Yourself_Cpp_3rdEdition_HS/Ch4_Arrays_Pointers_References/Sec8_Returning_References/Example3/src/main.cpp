
/*
	Example 3.: One very good use of returning a reference is found when a bounded array type is created. As
	you know, in C and C++, no array boundary checking occurs. It is therefore possible to overflow or underflow
	an array. However, in C++, you can create an array class that performs automatic bounds checking. An array
	class contains two core functions - one stores information into the array and one that retrieves information.
	These functions can check, at run-time, that the array boundaries are not overrun.

	The following program implements a bounds-checking array for characters:
*/

// A simple bounded array example.
#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class array{
	int size;
	char* p;
public:
	array(int num);
	~array(){ delete [] p; }
	char& put(int i);
	char get(int i);
};

array::array(int num){
	p = new char [num];
	if(!p){
		cout << "Allocation error\n";
		exit(EXIT_FAILURE);
	}
	size = num;
}

// Put something into the array.
char& array::put(int i){
	if(i<0 || i>=size){
		cout << "Bounds error!!!\n";
		exit(EXIT_FAILURE);
	}
	return p[i]; // return a reference to p[i]
}

// Get something from the array
char array::get(int i){
	if(i<0 || i>=size){
		cout << "Bounds error!!!\n";
		exit(EXIT_FAILURE);
	}
	return p[i]; // Return simply the character
}

int main(){
	array a(10);

	a.put(3) = 'X';
	a.put(2) = 'R';

	cout << a.get(3) << a.get(2);
	cout << "\n";

	// now generate run-time boundary error
	a.put(11) = '!';

	return EXIT_SUCCESS;
}

/*
	This example is a practical use of funtions returning references, and you should examine it closely.
	Notice that the 'put()' function returns a reference to the array element specified by parameter
	'i'. This reference can then be used on the left side of an assignment statement to store something
	in the array - if the index specified by 'i' is not out of bounds. The reverse is 'get()', which
	returns the value stored at the specified index is within range. This approach to maintaining an
	array is referred to as a 'safe array'. (You will see a better way to create a safe array later on,
	in Chapter 6.)

	One other thing to notice about the preceding program is that the array is allocated dynamically
	by the use of 'new'. This allows arrays of differing length to be declared.

	As mentioned, the way that bounds checking is performed in this pogram is a practical application
	of C++. If you need to have array boundaries verified at run time, this is one way to do it.
	However, remember that bounds checking slows access to the array. Therefore, it is best to include
	bounds checking only when there is a real likelihood that  an array boundary will be violated.
*/
