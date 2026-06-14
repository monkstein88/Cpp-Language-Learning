
/*
	Exercise 1.: Using the following class declaration. Create a ten-element array and initialize the 'ch'
	element with the values A through J. Demonstrate that the array does, indeed, contain these values.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class letters{
	char ch;
public:
	letters(char c){ ch = c; }
	char get_ch(){ return ch; }
};

int main(){
	letters alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	int i;

	cout << "Alphabet A-J (in capital letters): ";
	for(i=0; i<=('J'-'A'); i++)
		cout << alphabet[i].get_ch() << ' ';

	cout << "\n";

	return EXIT_SUCCESS;
}
