
/*
	Example 1.: Here is an example of an array of objects:
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int a;
public:
	void set_a(int n){ a = n; }
	int get_a(){ return a; }
};

int main(){
	samp ob[4];
	int i;

	for(i=0; i<4; i++)
		ob[i].set_a(i);

	for(i=0; i<4; i++)
		cout << ob[i].get_a();

	cout << "\n";

	return EXIT_SUCCESS;
}

/*
	This program creates a four-element array of objects of type 'samp' and hen loads each
	element's 'a' with a value between 0 and 3. Notice how memeber functions are called relative
	to each array elements. The array name, in this case 'ob', is indexed;  then the member access
	operator is applied, followed by the name of the member function to be called.
*/
