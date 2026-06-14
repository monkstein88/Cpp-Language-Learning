
/*
	Example 1.: The following program illustrates the basics of using a map. It sotres ten key/value pairs. The key is a character and the
	value is an integer. The key/value pairs stored are

	A	0
	B	1
	C 	2

	and so on. Once the pairs have been stored, the user is prompted for a key (i.e., a letter from A through J), and the value associated
	with that key is displayed.
*/

// A simple map demonstration.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <map>
using namespace std;

int main()
{
	map<char, int> m;
	int i;

	// put pairs into map
	for(i=0; i<10; i++)
		m.insert(pair<char, int>('A'+i, i));

	char ch;
	cout << "Enter key: ";
	cin >> ch;

	map<char, int>::iterator p;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:



*/
