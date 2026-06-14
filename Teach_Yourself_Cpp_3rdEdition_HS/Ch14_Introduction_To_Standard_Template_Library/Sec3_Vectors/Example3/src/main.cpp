
/*
	Example 3.: In addition to putting new values on the end of a vector, you can insert elements into the middle using the 'insert()'
	function. You can also remove elements using 'erase()'. The following program demonstrates 'insert()' and 'erase()'.
*/

// Demonstrate insert and erase.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <vector>
using namespace std;

int main()
{
	vector<int> v(5,1); // create 5-element vector of 1s
	int i;

	// display original contents of vector
	cout << "Size = " << v.size() << endl;
	cout << "Original contents:\n";
	for(i=0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << endl << endl;

	vector<int>::iterator p = v.begin();
	p += 2; // point to 3rd element

	//insert 10 elements with value 9
	v.insert(p,10,9);

	// display contents after insertion
	cout << "Size after insert = " << v.size() << endl;
	cout << "Contents after insert: \n";
	for(i=0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << endl << endl;

	// remove those elements
	p  = v.begin();
	p += 2; // point to 3rd element
	v.erase(p, p+10); // remove next 10 elements

	// display contents after delection
	cout << "Size after erase = " << v.size() << endl;
	cout << "Contents afer erase:\n";
	for(i=0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << endl;


	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec3_Example3.exe
	Size = 5
	Original contents:
	1 1 1 1 1

	Size after insert = 15
	Contents after insert:
	1 1 9 9 9 9 9 9 9 9 9 9 1 1 1

	Size after erase = 5
	Contents afer erase:
	1 1 1 1 1

*/
