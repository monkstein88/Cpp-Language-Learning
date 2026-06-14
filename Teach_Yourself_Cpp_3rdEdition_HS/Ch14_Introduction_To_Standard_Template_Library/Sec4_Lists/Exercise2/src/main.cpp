
/*
	Exercise 2.: In Example 1, the list was emptied in the process of diplaying it. In Example 2, you saw another way to traverse a list
	that does not destroy it. Can you think of another way to traverse a list without emptying it? Show that your solution works by
	substitude it into the program in Example 1.
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <list>

using namespace std;

int main()
{
	list<char> lst; // create an empty list
	int i; char temp;

	for(i=0; i<10; i++)
		lst.push_back('A'+i);

	cout << "Size = " << lst.size() << endl;

	list<char>::iterator p;

	cout << "Contents: ";
	i=lst.size();
	while(i--)
	{
		temp = lst.front();
		lst.pop_front();
		cout << temp;
		lst.push_back(temp);

	}

	cout << endl << endl;

	cout << "Size after reiteration = " << lst.size() << endl;

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch14_Sec4_Exercise2.exe
	Size = 10
	Contents: ABCDEFGHIJ

	Size after reiteration = 10


*/
