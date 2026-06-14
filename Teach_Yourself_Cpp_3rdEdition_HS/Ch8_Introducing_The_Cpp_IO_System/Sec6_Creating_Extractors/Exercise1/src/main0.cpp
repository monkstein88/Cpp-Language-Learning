
/*
	Exercise 1.:  Add an extractor to the 'strtype' class from Exercise 1 in the preceeding section (Section 5).
*/
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype{
	char* p;
	int len;
public:
	strtype(const char* ptr);
	~strtype(){ delete [] p; }
	friend ostream& operator <<(ostream& stream, strtype& ob);
	friend istream& operator >>(istream& stream, strtype& ob);
};

strtype::strtype(const char* ptr){
	len = strlen(ptr)+1;
	p = new char(len);
	if(!p){
		cout << "Allocation error\n";
		exit(EXIT_FAILURE);
	}
	strcpy(p, ptr);
}

ostream& operator <<(ostream& stream, strtype& ob){

	stream << ob.p;

	return stream;
}

istream& operator >>(istream& stream, strtype& ob){
	char temp[255];

	stream >> temp;

	if( ((int)strlen(temp)) >= ob.len){
		delete [] ob.p;
		ob.len = strlen(temp)+1;
		ob.p = new char (ob.len);
		if(!ob.p){
			cout << "Allocation error\n";
			exit(1);
		}
	}
	strcpy(ob.p, temp);

	return stream;
}


int main(){
	strtype s1("This is a test."), s2("I like C++.");

	cout << s1 << '\n' << s2 << '\n';
	cout << "Enter a string: ";
	cin >> s1;
	cout << s1;

	return 0;
}
