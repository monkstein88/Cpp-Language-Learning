
/*
	Exercise 1.:  Add an extractor to the 'strtype' class from Exercise 1 in the preceeding section (Section 5).
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define MAX_STR_SZ (80)

class strtype{
	char* p;
	int len;
public:
	strtype(const char* ptr);
	~strtype(){ delete [] p;}
	friend ostream& operator<<(ostream& stream, strtype& ob);
	friend istream& operator>>(istream& stream, strtype& ob);
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

// Create 'operator>>' extractor function here.
istream& operator>>(istream& stream, strtype& ob){
	char temp[MAX_STR_SZ];

	stream.getline(temp,sizeof(temp)); // Read the entire line - thus reading an input string including whitespaces in it

	delete [] ob.p;
	ob.len = strlen(temp) + 1;
	ob.p = new char[ob.len];
	if(!ob.p){
		cout << "Allocation error\n";
		exit(EXIT_FAILURE);
	}
	strcpy(ob.p, temp);

	return stream;
}

int main(){
	strtype s1("This is a test."), s2("I like C++"), s3("");

	cout << s1 << '\n' << s2 << endl ;
	cout << "Enter a string: ";
	cin >> s3;
	cout << s3 << endl;
	return EXIT_SUCCESS;
}




/*
	This program displays the following when ran:

	This is a test.
	I like C++
	Enter a string: Me, too!
	Me, too!


*/
/*
	Official answer:

	#include <iostream>
	#include <cstring>
	#include <cstdlib>
	using namespace std;

	class strtype{
		char* p;
		int len;
	public:
		strtype(char* ptr);
		~strtype(){ delete [] p; }
		friend ostream& operator <<(ostream& stream, strtype& ob);
		friend istream& operator >>(istream& stream, strtype& ob);
	};

	strtype::strype(char* ptr){
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

		if(strlen(temp) >= ob.len){
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
*/
