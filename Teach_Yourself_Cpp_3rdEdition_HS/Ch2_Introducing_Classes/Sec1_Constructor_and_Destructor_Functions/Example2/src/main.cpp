
/*
	Example 2.: An example that show the need for both a constructor and a
	destructor  function. It creates a simple string class, called 'strtype', that
	contains a string and its length. When a 'strtype' object is created, memory
	is allocated to hold the string and its initial length is set to 0. When 'strtype'
	is destroyed, that memory is released.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define SIZE 25

class strtype{
	char *p;
	int len;
public:
	strtype(); // constructor
	~strtype(); // destructor
	void set(char *ptr);
	void show();
};

// Initialize a string object
strtype::strtype(){
	p = (char*) malloc(SIZE); // allocate consecutive memory spaces
	if(!p){
		cout << "Allocating error!\n";
		exit(1);
	}
	*p = '\0';
	len = 0;
}

// Free memory when destroying string object.
strtype::~strtype(){
	cout << "Freeing p\n";
	free(p);
}

void strtype::set(char *ptr){
	if(strlen(ptr) >= SIZE){
		cout << "String too big!\n";
		return;
	}
	strcpy(p,ptr);
	len = strlen(p);
}

void strtype::show(){
	if(strlen(p) == 0){
		cout << "String is empty";
		return;
	}
	cout << p << " - length: " << len;
	cout << "\n";
}

int main(){
	strtype s1, s2;

	s1.set((char *)"This is a test.");
	s2.set((char *)"I like C++.");

	s1.show();
	s2.show();

	return 0;
}

/*
	The program uses 'malloc()' and 'free()' to allocate and free memory. While this
	is perfectly valid, C++ does provide another way to dynamically mmanage memory,
	as you will see late in this book.
*/
