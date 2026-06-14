
/*
	Example 5.: One ordered list can be merged with another. The result is an ordered list that contains the contents of the two original
	lists. The new list is left in the invoking list and the secodn list is left empty. This example merges two lists. The first contains
	the letters ACEGI and the second BDFHJ. These lists are then merged to produce the sequence ABCDEFGHIJ.
*/

// Merge lists.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <list>
using namespace std;

int main()
{
	list<char> lst1, lst2;
	int i;

	for(i=0; i<10; i+=2)
		lst1.push_back('A' + i);
	for(i=1; i<11; i+=2)
		lst2.push_back('A' + i);

	cout << "Contents of lst1: ";
	list<char>::iterator p = lst1.begin();
	while(p != lst1.end())
	{
		cout << *p;
		p++;
	}

	cout << endl << endl;

	cout << "Contents of lst2: ";
	p = lst2.begin();
	while(p != lst2.end())
	{
		cout << *p;
		p++;
	}

	cout << endl << endl;

	// now, merge the two lists
	lst1.merge(lst2);
	if(lst2.empty())
		cout << "lst2 is now empty\n";

	cout << "Contents of lst1 after merge:\n";
	p = lst1.begin();
	while(p != lst1.end())
	{
		cout << *p;
		p++;
	}

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec4_Example5.exe
	Contents of lst1: ACEGI

	Contents of lst2: BDFHJ

	lst2 is now empty
	Contents of lst1 after merge:
	ABCDEFGHIJ


*/
