	
/*
	Example 1.: Here is a short example that illustrates the basic operation of a vector.
*/

// Vector basics.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <vector>
using namespace std;

int main()
{
	vector<int> v; // create zero-length vector
	int i;

	// display original size of 'v'
	cout << "Size = " << v.size() << endl;

	// put values onto end of vector, vector will grow as needed
	for(i=0; i<10; i++)
		v.push_back(i);

	// display cyrrent size of 'v'
	cout << "Size now = " << v.size() << endl;

	// display contents vector
	cout << "Current contents" <<'\n';
	for(i=0; i< v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	// put more values onto end of vector again, vector will grow as needed
	for(i=0; i<10; i++)
		v.push_back(i+10);

	// display current size of 'v'
	cout << "Size now = " << v.size() << endl;

	// display contents of vector
	cout << "Current contents:" << '\n';
	for(i=0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	// change contents of vector
	for(i=0; i<v.size(); i++)
		v[i] = v[i] + v[i];

	//display contents fo vector
	cout << "Current contents:\n";
	for(i=0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec3_Example1.exe
	Size = 0
	Size now = 10
	Current contents
	0 1 2 3 4 5 6 7 8 9
	Size now = 20
	Current contents:
	0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
	Current contents:
	0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38


	Let's look at this program carefully. In 'main()', an integer vector called 'v' is created. Since no initialization is used, it is an
	empty vector with an initial cpacity of zero. That is, it is a zero-length vector. The program confirms this by calling the 'size()'
	member function. Next, ten elements are added to the end of 'v' with the member function 'push_back()'. This causes 'v' to grow in order
	to accomodate the new elements. As the output shows, its size after these additions is 10. Next, the contents of 'v' are displayed.
	Notice that the standard array subscripting notation is employed. Next, ten more elements are added and 'v' automatically increases in
	size to handle them. Finally, the values of 'v's elements are altered using standard subscripting notation.

	There is one other pewit of interest in this program. Notice that the loops that display the contents of 'v' use their target 'v.size()'.
	One of the advantages that vectors have over arrays is that it is possible to find the current size of a vector. As you can imagine,
	this is quite useful in a variety of situtations.
*/
