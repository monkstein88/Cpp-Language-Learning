
/*
	Example 2.2: The solution to the preceding problem is to define a copy constructor for the 'strtype' class that allocates memory for the
	copy when the copy is created. This approach is used by the following, corrected, program:
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype{
	char* p;
public:
	strtype(char* s); // 'normal' parameter based constructor
	strtype(const strtype &o); // 'copy' constructror
	~strtype(){ delete [] p; }
	char* get(){ return p; }
};

// "Copy" constructor
strtype::strtype(const strtype &o){ //
	int l;

	l=strlen(o.p)+1;
	p = new char [l]; // allocate memory for the new copy
	if(!p){
		cout << "'Copy' constructor - allocation error\n";
		exit(EXIT_FAILURE);
	}
	strcpy(p,o.p); // copy string into copy
}

// Normal constructor
strtype::strtype(char *s){
	int l;

	l = strlen(s)+1;
	p = new char [l];
	if(!p){
		cout << "'Normal' constructor - allocation error\n";
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
	Now when 'show()' terminates and 'x' goes out of scope, the memory, pointed by 'x.p' (which will be freed) is not the same
	as the memory still in use by the object passed to the function.
*/
