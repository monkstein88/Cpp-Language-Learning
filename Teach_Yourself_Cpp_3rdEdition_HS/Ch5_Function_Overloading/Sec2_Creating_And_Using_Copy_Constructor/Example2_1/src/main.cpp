
/*
	Example 2.1: To see how the copy constructor helps prevent some of the problems associated with passing certain types of
	objects to functions, considder this (incorrect) example
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype{
	char* p;
public:
	strtype(char* s);
	~strtype(){ delete [] p; }
	char* get(){ return p; }
};

strtype::strtype(char *s){
	int l;

	l = strlen(s)+1;
	p = new char [l];
	if(!p){
		cout << "Allocation error\n";
		exit(EXIT_FAILURE);
	}
	strcpy(p, s);
}

void show(strtype x){
	char* s;

	s = x.get();
	cout << s << "\n";
}


int main(){
	strtype a((char*)"Hello"), b((char*)"There");

	show(a);
	show(b);

	return EXIT_SUCCESS;
}


/*
	In this program, when a 'strtype' object is passed to 'show()', a bitwise copy is made (since no copy constructor has been
	defined) and put into parameter 'x'. Thus, when the function returns, 'x' goes out of scope and is destroyed. This, of course,
	caues 'x's destructor to be called, which frees 'x.p'. However, the memory being freed is the same memory that is still being
	used by the object used to call the function.

	The solution to the preceding problem is to define a copy constructor for the 'strtype' class that allocates memory for the
	copy when the copy is created. This approach is used by the following, corrected, program:

*/
