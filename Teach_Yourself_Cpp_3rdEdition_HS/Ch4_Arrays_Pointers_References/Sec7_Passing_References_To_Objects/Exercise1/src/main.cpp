
/*
	Exercise 1.: What is wrong with the following program? Show how it can be fixed by using a reference
	parameter.

	#include <iostream>
	#include <cstring>
	#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
	using namespace std;

	class strtype{
		char *p;
	public:
		strtype(char *s);
		~strtype(){ delete [] p; }
		char* get() { return p; }
	};

	strtype::strtype(char* s){
		int l;

		l = strlen(s)+1;
		p = new char [l];
		if(!p){
			cout << "Allocation error\n";
			exit(EXIT_FAILURE);
		}
		strcpy(p, s);
	}

	void show(strtype x){ // This is a problem , it creates a copy of a dynamically allocated object's pointer, which is
	// is going to be freed twice -once when the 'show()' function terminates. and a second time when the program exits - 'main()'
		char *s;

		s = x.get();
		cout << s << "\n";
	}

	int main(){
		strtype a((char*)"Hello"), b((char*)"There");

		show(a);
		show(b);

		return EXIT_SUCCESS;
	}
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype{
	char *p;
public:
	strtype(char *s);
	~strtype(){ delete [] p; }
	char* get() { return p; }
};

strtype::strtype(char* s){
	int l;

	l = strlen(s)+1;
	p = new char [l];
	if(!p){
		cout << "Allocation error\n";
		exit(EXIT_FAILURE);
	}
	strcpy(p, s);
}

void show(strtype &x){ // This is the fix - using a reference parameter, this will avoid the destructor being called.
	char *s;

	s = x.get();
	cout << s << "\n";
}

int main(){
	strtype a((char*)"Hello"), b((char*)"There");

	show(a);
	show(b);

	return EXIT_SUCCESS;
}
