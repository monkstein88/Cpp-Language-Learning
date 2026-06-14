
/*
	Exercise 1.: Given the following skeleton, fill in the constructor function for 'myderived'. Have it pass along a pointer to an
	initializaiton string to 'mybase'. Also, have 'myderived()' initialize 'len' to the length of the string.
*/


#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class mybase{
	char str[80];
public:
	mybase(const char* s){ strcpy(str, s); }
	char* get(){ return str; }
};

class myderived : public mybase{
	int len;
public:
	myderived(const char* s) : mybase(s){
		len = strlen(s);
	}
	int getlen(){ return len; }
	void show(){ cout << get() << '\n'; }
};

int main(){
	myderived ob("hello");

	ob.show();

	cout << ob.getlen() << '\n';

return EXIT_SUCCESS;
}

/*

*/
