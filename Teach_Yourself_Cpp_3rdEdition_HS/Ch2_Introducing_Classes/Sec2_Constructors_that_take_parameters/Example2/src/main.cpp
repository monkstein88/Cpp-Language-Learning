
/*
	Example 2.: Here is a different way to implement the strtype class (developed)
	earlier) that uses a parameterized constructor function:
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype{
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype();
	void show();
};

strtype::strtype(char *ptr){
	len = strlen(ptr);
	if(!len){
		cout << "Empty string error!\n";
		exit(EXIT_FAILURE);
	}
	p = (char *)malloc(len+1);
	if(!p){
		cout << "Allocation error!\n";
		exit(EXIT_FAILURE);
	}
	strcpy(p,ptr);
}

strtype::~strtype(){
	cout << "Freeing p\n";
	free(p);
}

void strtype::show(){
	cout << p << " - lenght: " << len;
	cout <<"\n";
}


int main(){
	strtype s1((char *)"This is a test."), s2((char *)"I like C++.");

	s1.show();
	s2.show();

	return EXIT_SUCCESS;
}

/*
	In this version of 'strtype', a string is given an initial value using the
	function.
*/
