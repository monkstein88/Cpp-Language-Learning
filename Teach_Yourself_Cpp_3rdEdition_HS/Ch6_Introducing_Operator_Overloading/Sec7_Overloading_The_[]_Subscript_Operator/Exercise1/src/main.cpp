
/*
	Exercise 1.: Modify Example 1 in Section 6.6 so that 'strtype' overloads the '[]' operator. Have this operator return the
	character at the specified index. Also, allow the '[]' to used on the left side of the assignment statement. Demonstrate its
	use.
*/

// Overload the '-' and '\' realtive to 'coord' class
#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype{
	char* p; // pointer to the beggining of the string
	int len; // this depicts the length of the string + the NULL terminating character
public:
	// Constructors:
	strtype();
	strtype(char* s);
	// Destructor
	~strtype();
	// Utility functions
	char* get();
	int length();
	// Overloading functions
	strtype& operator=(strtype& ob);
	char& operator[](int i);
};
// Constructors:
strtype::strtype(){

	p = nullptr;
	len = 0;
}
strtype::strtype(char* s){
	int l = strlen(s)+1;

	p = new char [l];
	if(!p){
		cout << "Error: Cannot create string allocated memory!\n";
		exit(EXIT_FAILURE);
	}
	strcpy(p, s);
	len = l-1;
}
// Destructor:
strtype::~strtype(){
	if(p != nullptr){
		cout << "Freeing 0x" << hex << (unsigned long long) p << '\n';
		delete [] p;
	}
}
// Utility functions
char* strtype::get(){

		return p;
}
int strtype::length(){

	return len;
}
// Overloading (member) functions
strtype& strtype::operator=(strtype& ob){

	if(len < ob.len){
		if(p){
			delete [] p;
		}
		p = new char [ob.len];
		if(!p){
			cout << "Error: 'strtype' assignment allocation error!\n";
			exit(EXIT_FAILURE);
		}
	}
	strcpy(p, ob.p);
	len = ob.len;

	return *this;
}
char& strtype::operator[](int i){

		if( (i < 0) || (i >= len) ){
				cout << "Error: index value of " << i << " out of bounds!\n";
				exit(EXIT_FAILURE);
		}
		return p[i];
}

int main(){
	strtype a((char*)"Hello"), b((char*)"There");
	int i;

	cout << a.get() << ' ';
	cout << b.get() << '\n';
	cout << '\n';


	for(i=0; i < a.length();i++)
		cout << "a[" << i <<"]: " << a[i] << '\n';
	cout <<'\n';
	for(i=0; i < b.length();i++)
		cout << "b[" << i <<"]: " << b[i] << '\n';
	cout << '\n';

	cout <<"b = a;" << '\n';
	b = a;

	for(i=0; i < b.length();i++)
		cout << "b[" << i <<"]: " << b[i] << '\n';
	cout << b[0] << b[1] << b[2] << b[3] << b[4] << '\n';
	cout << '\n';

	cout << "b[0] = 'M'; b[1] = 'o'; b[2] = 'n'; b[3] = 'k'; b[4] = '\\0';" << '\n';
	b[0] = 'M';
	b[1] = 'o';
	b[2] = 'n';
	b[3] = 'k';
	b[4] = '\0';

	for(i=0; i < b.length()-1;i++)
		cout << "b[" << i <<"]: " << b[i] << '\n';
	cout << '\n';

	return EXIT_SUCCESS;
}

/*

*/
