
/*
	Exercise 2.: Using the 'strtype' class shown in Section 3.1, Example 3, add a friend function that
	takes as an argument a pointer to an object of type 'strtype' and returns a pointer to the string
	pointed to by that object. (That is, have the function return p.) Call thus function 'get_string()'.

*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
#include <cstring>
using namespace std;

class strtype{
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype();
	void show();
	friend char* get_string(strtype* str_ob);
};

strtype::strtype(char *ptr){
	len = strlen(ptr);
	p = (char *) malloc(len+1);
	if(!p){
		cout << "Allocation error\n";
		exit(EXIT_FAILURE);
	}
	strcpy(p, ptr);
}

strtype::~strtype(){
	cout << "Freeing p\n";
	free(p);
}

void strtype::show(){
	cout << p << " - length: " << len;
	cout << "\n";
}


char* get_string(strtype* str_ob){
	return str_ob->p;
}

int main(){
	char *s;
	strtype s1((char *)"This is a test."), s2((char *)"I like C++.");
	s1.show();
	s2.show();

	s = get_string(&s1);
	cout << "s1 string: " << s << "\n";
	s = get_string(&s2);
	cout << "s2 string: " << s << "\n";


	return EXIT_SUCCESS;
}
