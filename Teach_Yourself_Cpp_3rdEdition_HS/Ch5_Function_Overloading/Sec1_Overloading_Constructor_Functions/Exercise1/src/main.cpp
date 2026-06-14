
/*
	Exercise 1.: Given this partially defined class

	class strtype{
		char *p;
		int len;
	public:
		char *gestring {return p; }
		int getlength() { return len; }
	};

	add two constructor functions. Have the first one take no parameters. Have this one allocate 255 bytes memory (using
	'new'), initialize that memory as a null string, and give 'len' a value of 255. Have the other constructor take two
	parameters. The first is the string to use for initialization and the other is the number of bytes to allocate. Have
	this verson allocate the specified amount of memory and copy the string to that memory. Perform all necessary boundary
	checks and demonstrate that your constructors work by including a short program.
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype{
	char* p;
	int len;
public:
	strtype();
	strtype(char* str, int str_len);
	char* getstring() {return p; }
	int getlength() { return len; }
};

strtype::strtype(){
	len = 0;
	int size = 255;
	p = new char [size];
	if(!p){
		cout << "Allocation error!" << '\n';
		exit(EXIT_FAILURE);
	}
	for(int i=0; i<size; i++) 	p[i] = '\0';
}

strtype::strtype(char* str, int str_len){
	p = new char [str_len+1];
	if(!p){
		cout << "Allocation error!" << '\n';
		exit(EXIT_FAILURE);
	}
	len = str_len+1;
	strcpy(p, str);
}

int main(){
	strtype s1; // declare an object without initialization
	strtype s2((char*)"Hello, this is C.", strlen("Hello, this is C."));

	cout << "String s1: " << s1.getstring() << " - length: " << s1.getlength() << '\n';
	cout << "String s2: " << s2.getstring() << " - length: " << s2.getlength() << '\n';

	return EXIT_SUCCESS;
}
