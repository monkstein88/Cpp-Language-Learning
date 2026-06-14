
/*
	Exercise 1.: Create a 'strtype' class that allows the following types of operators:
		- string concatenation using the '+' operator
		- string assignment using the '=' operator
		- string comparisons using '<', '>' and '=='

	Feel free to use fixed-length strings. This is a challenging assignment, but with some thought (and experimentation), you should
	be bable to accomplish it.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype{
	char* p;
	int len;
public:
	// Constructors:
	strtype(){ p = nullptr; len = 0; }
	strtype(const char* s){ // a reference to a pointer of type char
		int l = strlen(s);
		p = new char [l+1];
		if(!p){
			cout << "Error: Cannot allocate memory for 'strtype' string initialization!\n";
			exit(EXIT_FAILURE);
		}
		strcpy(p,s);
		len = l;
	}
	strtype(const strtype& obj){ // This is a 'copy-constructor'
		 p = new char[obj.len+1];
		 if(!p){
			 cout << "Error: Cannot allocate memory for 'strtype' copy constructor string!\n";
			 exit(EXIT_FAILURE);
		 }
		 len = obj.len;
		 strcpy(p, obj.p);
	}
	// Destructor:
	~strtype(){
		if(p){
			cout << "Freeing allocated memory for 'strtype' string at: 0x" << hex << (unsigned long long) p << '\n';
			delete [] p;
			len = 0;
		}
	}
	// Overloading:
	strtype operator+(const strtype& obj){
		strtype temp; int l;

		l = strlen(p) + strlen(obj.p);
	 	temp.p = new char [l+1];
		if(!temp.p){
			cout << "Error: Cannot allocate memory for 'strtype' concatenation using '+' operator!\n";
			exit(EXIT_FAILURE);
		}
		strcpy(temp.p, p);
		strcat(temp.p, obj.p);
		temp.len = l;

		return temp;
	}
	strtype& operator=(const strtype& obj){

		if(len < obj.len){
			if(p){
				delete [] p;
			}
		}
		p = new char [obj.len+1];
		if(!p){
			cout << "Error: Cannot allocate memory for 'strtype' assignment using '=' operator!\n";
			exit(EXIT_FAILURE);
		}
		strcpy(p, obj.p);
		len = obj.len;

		return *this;
	}
	int operator<(strtype& obj){
		return (strcmp(p,obj.p) < 0);
	}
	int operator>(strtype& obj){
		return (strcmp(p, obj.p) > 0);
	}
	int operator==(strtype& obj){
		return (strcmp(p, obj.p)==0);
	}
	// Utility functions:
	char* get(){ return p; }
};

int main(){
	strtype s1("Hello, "), s2("Monk! "), s3("How are you doing? "), s4("Is all OK? "), s5, s6;

	cout << "(s1): " << s1.get() << '\n';
	cout << "(s2): " << s2.get() << '\n';
	cout << "(s3): " << s3.get() << '\n';
	cout << "(s4): " << s4.get() << '\n';
	s5 = s1 + s2 ;
	cout << "(s1 + s2): " << s5.get() << '\n';
	s6 = s1 + s2 + s3 + s4 ;
	cout << "(s1 + s2 + s3 + s4): " << s6.get() << '\n';
	cout << '\n';

	if(s1 > s2)
		cout << "(s1 > s2): true\n";
	else
		cout << "(s1 > s2): false\n";

	if(s1 < s2)
		cout << "(s1 < s2): true\n";
	else
		cout << "(s1 < s2): false\n";

	if(s1 == s2)
		cout << "(s1 == s2): true\n";
	else
		cout << "(s1 == s2): false\n";

	return EXIT_SUCCESS;
}
