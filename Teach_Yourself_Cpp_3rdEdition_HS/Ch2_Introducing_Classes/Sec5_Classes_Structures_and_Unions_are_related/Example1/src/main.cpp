
/*
	Example 1.: Here is a short program that uses struct to create a class:
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

// use struct to define a class type
struct st_type{
	st_type(double b, char *n);
	void show();
private:
	double balance;
	char name[40];
};

st_type::st_type(double b, char *n){
	balance = b;
	strcpy(name,n);
}

void st_type::show(){
	cout << "Name: " << name;
	cout << ": $" << balance;
	if(balance < 0.0)
		cout << "**";
	cout << "\n";
}

int main(){
	st_type acc1(100.12, (char *)"Johnson");
	st_type acc2(-12.34, (char *)"Hedricks");
	
	acc1.show();
	acc2.show();
	
	return EXIT_SUCCESS;
}

/*
	Notice that, as stated, the members of a structure are public by defaut. The private
	keyword must be used to declare private members.
	
	Also, notice one difference between C-like structures and C++-like structures. In C++,
	the structure tag-name also becomes a complete type name that can be used to declare 
	objects. In C, the tag-name requires that the keyword 'struct' preced it before it becomes
	a complete type.
	
	Here's the same program rewritten using a class:
	
	#include <iostream>
	#include <cstring>
	#include <cstdlib>
	using namespace std;
	
	class cl_type{
		double balance;
		char name[40];
	public:
		cl_type(double b, char *n);
		void show();
	};
	
	cl_type::cl_type(double b, char *n){
		balance = b;
		strcpy(name, n);
	}
	
	void cl_type::show(){
		cout << "Name: " << name;
		cout << " : $" << balance;
		if(balance < 0)
			cout << "**";
		cout << "\n";
	}
	
	int main(){
		cl_type acc1(100.12, "Johnson");
		cl_type acc2(-12.34, "Hedricks");
		
		acc1.show();
		acc2.show();
	}
*/