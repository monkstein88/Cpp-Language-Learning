
/*
	Example 3.: Because lists are bidirectional, elements can be put on a list either at the front or at the back. For example, the
	following program creates two lists, with the first being the reverse of the second.
*/

// Elements can be put on the front or end of a list.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <list>
using namespace std;

int main()
{
	list<char> lst;
	list<char> revlst;
	int i;

	for(i=0; i<10; i++)
		lst.push_back('A'+i);

	cout << "Size of lst = " << lst.size() << endl;
	cout << "Original contents: ";

	list<char>::iterator p;

	// Remove elements from 'lst' and put them into 'revlst' in reverse order.
	while(!lst.empty())
	{
		p = lst.begin();
		cout << *p;
		lst.pop_front();
		revlst.push_front(*p);
	}
	cout << endl << endl;

	cout << "Size revlst = ";
	cout << revlst.size() << endl;
	cout << "Reversed content: ";
	p = revlst.begin();
	while(p != revlst.end())
	{
		cout << *p;
		p++;
	}

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch14_Sec4_Example3.exe
	Size of lst = 10
	Original contents: ABCDEFGHIJ

	Size revlst = 10
	Reversed content: JIHGFEDCBA


	In the program, the list is reversed by removing elements from the start of 'lst' and pushing them onto the front of 'revlst'. This
	causes elements to be stored in reverse order in 'revlst'.

*/
