
/*
	Example 1.: Here is a simple example of a list.
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

	list<char>::iterator p;

	cout << "Contents: ";
	while(!lst.empty())
	{
		p = lst.begin();
		cout << *p;
		lst.pop_front();
	}

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec4_Example1.exe
	Size = 10
	Contents: ABCDEFGHIJ


	This program creates a list of characters. First, an empty 'list' object is created. Next, ten characters, the letters A through J, are
	put into the list. This is accomplished with the 'push_back()' function, which puts each new value on the end of the existing list. Next,
	the size of the list is displayed. Then, the contents of the list are output by repeatedly obtaining, displaying, and then removing the
	first element in the list. This process stops when the list is empty.

*/
