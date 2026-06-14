
/*
	Exercise 2.: Convert the 'strtype' class from Section 2.2, Example 3, so that it uses automatic in-line
	functions.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype{
	char *p;
	int len;
public:
	strtype(char *ptr){
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
	~strtype(){
		cout << "Freeing p\n";
		free(p);
	}
	void show(){
		cout << p << " - lenght: " << len;
		cout <<"\n";
	}
};


int main(){
	strtype s1((char *)"This is a test."), s2((char *)"I like C++.");

	s1.show();
	s2.show();

	return EXIT_SUCCESS;
}