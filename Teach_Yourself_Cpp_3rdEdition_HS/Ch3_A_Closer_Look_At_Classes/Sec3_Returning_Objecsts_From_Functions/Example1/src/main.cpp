
/*
	Example 1.: Here is an example of a function that returns an object:
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE macros and exit() function
using namespace std;

class samp{
	char s[80];
public:
	void show(){ cout << s << "\n"; }
	void set(char *str){ strcpy(s, str); }
};

// Return an object of type samp
samp input(){
	char s[80];
	samp str;

	cout << "Enter a string: ";
	cin >> s;

	str.set(s);

	return str;
}

int main(){
	samp ob;

	// assign returned object to ob
	ob = input();
	ob.show();

	return EXIT_SUCCESS;
}

/*
	In this example, 'input()' creates a local object called str and then reads a string from the keyboard.
	This string is copied into 'str.s' and then 'str' is returned by the function. This object is then assigned
	to 'ob' inside 'main()' when it is returned by the call to 'input()'
*/
