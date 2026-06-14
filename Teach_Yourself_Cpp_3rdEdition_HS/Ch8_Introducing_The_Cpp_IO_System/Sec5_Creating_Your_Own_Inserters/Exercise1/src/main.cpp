
/*
	Exercise 1.:  Given the following 'strtype' class and partial program, crea na inserter that displays a string:

	#inlcude <iostream>
	#include <cstring>
	#include <cstdlib>

	class strtype{
		char* p;
		int len;
	public:
		strtype(char* ptr);
		~strtype(){ delete [] p;}
		friend ostream& operator<<(ostream& stream, strtype& ob);
	};

	strtype::strtype(char* ptr){

		len = strlen(ptr)+1;
		p = new char [len];
		if(!p){
			cout << "Allocation error\n";
			exit(1);
		}
		strcpy(p,ptr);
	}

	// Create 'operator<<' inserter function here.

	int main(){
		strtype s1("This is a test."), s2("I like C++");

		cout << s1 << '\n' << s2 ;

		return 0;
	}

*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype{
	char* p;
	int len;
public:
	strtype(const char* ptr);
	~strtype(){ delete [] p;}
	friend ostream& operator<<(ostream& stream, strtype& ob);
};

strtype::strtype(const char* ptr){

	len = strlen(ptr)+1;
	p = new char [len];
	if(!p){
		cout << "Allocation error\n";
		exit(1);
	}
	strcpy(p,ptr);
}

// Create 'operator<<' inserter function here.
ostream& operator<<(ostream& stream, strtype& ob){

	if((ob.p != nullptr) && (*ob.p != '\0'))
		stream << ob.p;
	else
		stream << '\0';

	return stream;
}

int main(){
	strtype s1("This is a test."), s2("I like C++"), s3("");

	cout << s1 << '\n' << s2 << '\n' << s3 << endl ;

	return EXIT_SUCCESS;
}




/*

*/
