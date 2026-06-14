/*
	Example 1.: Here is another version of the 'strtype' class that you have seen in various forms in the preceding example chapters.
	Howerver, this version overloads the '=' operator so that the pointer 'p' is not overwritten by an assignment operation.
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype{
	char* p; // pointer to the beggining of the string
	int len; // this depicts the length of the string + the NULL terminating character
public:
	strtype(char* s);
	~strtype(){
		cout << "Freeing " << (unsigned long long) p << '\n';
		delete [] p;
	}
	char* get(){ return p; }
	strtype& operator=(strtype& ob);
};

strtype::strtype(char* s){
	int l;

	l = strlen(s) + 1; // 'strlen()' does not include the NULL terminating character when coutning

	p = new char [l];
	if(!p){
		cout << "Allocation error\n";
		exit(EXIT_FAILURE);
	}
	len = l;
	strcpy(p, s);
}

// Assign an object.
strtype& strtype::operator=(strtype& ob){

	if(len < ob.len){  // 'len' refers to the left-side operand of the '=' operator, while 'ob.len' reflects the right-side operand to '='
		delete [] p;
		p = new char [ob.len];
		if(!p){
			cout << "'strtype' assignment - Allocation error\n";
			exit(EXIT_FAILURE);
		}
	}
	len = ob.len;
	strcpy(p, ob.p);

	return *this;
}


int main(){
	strtype a((char*)"Hello"), b((char*)"There");

	cout << a.get() << '\n';
	cout << b.get() << '\n';

	a = b; // now 'p' is not overwritten

	cout << a.get() << '\n';
	cout << b.get() << '\n';

	return EXIT_SUCCESS;
}

/*
	As you can see, the overloaded assignment operator prevents 'p' from being overwritten. It first checks to see if the object on
	the left has allocated enough memory to hold the string that is being assigned to it. If it hasn't, that memory is freed and
	another portion is allocated. Then the string is copied to that memory and the length is copied into 'len'.

	Notice two other important features about the 'operator=()' function. First, it takes a reference parameter. This prevents a
	copy of the object on the right side of the assignment being made. As you know from previous chapters, when a copy of an object
	is made  when passed to a function, that copy is destroyed when the function terminates. In this case, destroying the copy would
	the destructor function, which would free 'p'. However, this is the same 'p' still needed by the object used as an argument.
	Using a reference parameter prevents this problem.

	The second important feature of the 'operator=()' function is that it returns a reference, not an object. The reason for this is
	the same as the reason it uses a reference parameter. When a function returns an object, a temporary object is created that is
	destroyed after the return is complete. However, this means that the temporary object's destructor will be called, causing 'p'
	to be freed, but 'p' (and the memory it points to) is still need by the object being assigned a value. Therefore, by returning a
	reference, you prevent a temporary object from being created.

	Note: As you learned in Chapter 5, creating a copy constructor is another way to prevent both of the problems described in the
	preceding two paragraphs. But the copy constructor might not be as efficient a solution as using a reference parameter and a
	return reference type. This is because using a reference prevents the overhead associated with copying an object in either
	circuimstances. As you can seem there a re often several ways to accomplish the same end in C+++. LEarning to choose between
	them is part of becoming an excellent C++ programmer.
*/
