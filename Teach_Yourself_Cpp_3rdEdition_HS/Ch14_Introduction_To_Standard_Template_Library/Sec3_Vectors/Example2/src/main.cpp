
/*
	Example 2.: As you know, arrays and pointers are tighly liked in C++. An array can be accessed either through subsripting or through a
	pointer. The parallel to this in the STL is the link between vectors and iterators. You can access the members of a vector by using
	subscripting or by using an iterator. The following example shows both of these approaches.
*/

// Access a vector using an iterator
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <vector>
using namespace std;

int main()
{
	vector<int> v; // create zero-length vector
	int i;

	// push values into a vector
	for(i=0; i<10; i++)
		v.push_back(i);

	// can access vector contents using subscripting
	for(i=0; i<10; i++)
		cout << v[i] << " ";
	cout << endl;

	// access via iterator
	vector<int>::iterator p = v.begin();
	while(p != v.end())
	{
		cout << *p << " ";
		p++;
	}

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec3_Example2.exe
	0 1 2 3 4 5 6 7 8 9
	0 1 2 3 4 5 6 7 8 9


	In this program, the vector is initially created with zero length. The 'push_back()' member function puts values onto the end of the
	vector, expanding its size as needed.

	Notice how the iterator 'p' is declared. The type 'iterator' is defined by the container classes. Thus, to obtain an iterator for a
	particular container, you will use a declaration similar to that shown in the example: simply qualify 'iterator' with the name of the
	container. In the program, 'p' is initialized to point to the start of the vector by using the 'begin()' member function. This function
	returns an iterator to the start of the vector. This iterator can then be used to access the vector an element at a time by incrementing
	it as needed. This process is directly parallel to the way a pointer can be used to access the elements of an array. To determine when
	the end of the vector has been reached, the 'end()' member function is employed. This function returns an iterator to the location that
	is one past the last element in the vector. Thus, when 'p' equals 'v.end()', the end of the vector has been reached.
*/
