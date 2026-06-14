
/*
	Example 3.: Both structures and unions can have constructors and destructors. The following example
	shows the 'strtype' class reworked as a structure. It contains both a constructor and a destructor
	functions.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
#include <cstring> 
using namespace std;

struct strtype{
	strtype(char *ptr);
	~strtype();
	void show();
private:
	char *p;
	int len;
};

strtype::strtype(char *ptr){
	len = strlen(ptr);
	p = (char*) malloc(len+1); // "+1" is for the '\0' character.
	if(!p){
		cout << "Allocation error\n";
		exit(1);
	}
	strcpy(p, ptr);
 }
 
 strtype::~strtype(){
	 cout << "Freeing p\n";
	 free(p);
 }

void strtype::show(){
	cout << p << " - length: " << len << " characters";
	cout << "\n";
}


int main(){
	strtype s1((char*)"This is a test."), s2((char*)"I like C++");
	
	s1.show();
	s2.show();
	
	return EXIT_SUCCESS;
}

/*

*/