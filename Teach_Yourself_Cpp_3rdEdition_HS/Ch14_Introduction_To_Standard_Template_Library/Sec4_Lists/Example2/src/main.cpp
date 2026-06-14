
/*
	Example 2.: In the previous example, the list was emptied as it was traversed. That is, of course, not neccessary. For example, the loop
	that displays the list could be recoded as shown here.
*/

// List basics.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <list>
using namespace std;

int main()
{
	list<char> lst; // create an empty list
	int i;

	for(i=0; i<10; i++)
		lst.push_back('A'+i);

	cout << "Size = " << lst.size() << endl;

	list<char>::iterator p = lst.begin();

	cout << "Contents: ";
	while(p!=lst.end())
	{
		cout << *p;
		p++;
	}

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec4_Example2.exe
	Size = 10
	Contents: ABCDEFGHIJ


	Here the iterator 'p' is initialized to point to the start of the list. Each time through the loop, 'p' is incremented, causing it to
	point to the next element. The loop ends when 'p' points to the end of the list.

*/
