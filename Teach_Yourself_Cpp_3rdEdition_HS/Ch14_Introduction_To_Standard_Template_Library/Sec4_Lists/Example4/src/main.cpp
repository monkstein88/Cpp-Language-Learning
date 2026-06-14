
/*
	Example 4.: You can sort a list by calling the 'sort()' member function.
*/

// Sort a list.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <list>
using namespace std;

int main()
{
	list<char> lst;
	int i;

	// create a list of random characters
	for(i=0; i<10; i++)
		lst.push_back('A'+(rand()%26));

	cout << "Original contents: ";
	list<char>::iterator p = lst.begin();
	while(p != lst.end())
	{
		cout << *p;
		p++;
	}
	cout << endl << endl;

	// sort the list
	lst.sort();

	cout << "Sorted contents: ";
	p = lst.begin();
	while(p != lst.end())
	{
		cout << *p;
		p++;
	}

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec4_Example4.exe
	Original contents: PHQGHUMEAY

	Sorted contents: AEGHHMPQUY


*/
