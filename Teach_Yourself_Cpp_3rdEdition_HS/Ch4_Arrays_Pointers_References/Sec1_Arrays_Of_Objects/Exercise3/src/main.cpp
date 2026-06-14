
/*
	Exercise 3.: Change the initialization in Exercise 1 so it uses the long form. (That is, invoke 'letters'
	constructor explicitly in the initialization list.)
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
	letters alphabet[] = { letters('A'),
												 letters('B'),
												 letters('C'),
												 letters('D'),
												 letters('E'),
												 letters('F'),
												 letters('G'),
												 letters('H'),
												 letters('I'),
												 letters('J')};
	int i;

	cout << "Alphabet A-J (in capital letters): ";
	for(i=0; i<=('J'-'A'); i++)
		cout << alphabet[i].get_ch() << ' ';

	cout << "\n";

	return EXIT_SUCCESS;
}
