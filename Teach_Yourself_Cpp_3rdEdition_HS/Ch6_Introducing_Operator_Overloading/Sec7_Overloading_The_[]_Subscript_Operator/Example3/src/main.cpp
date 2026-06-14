/*
	Example 3.: One advantage of being able to overload the '[]' operator is that it allows a better means of implementing safe
	array indexing. Earlier in this book you saw a simplified way to implement a safe array that relied upon functions such as
	'get()' and 'put()' to access the elements of the array. Here you will see a better way to create a safe array that utilizes an
	overloaded '[]' operator. Recall that a safe array is an array that is encapsulated within a class that performs bounds checking.
	This approach prevents the array boundaries from being overrun. By overloading the '[]' operator for such an array, you allow it
	to be accessed just like a regular array.

	To create a safe array, simply add bounds checking to the 'operator[]()' function. The 'operator[]()' must also return a
	reference to the elemen being indexed. For example, this program adds a range check to the previous array program and proves
	that it works by generating a boundary error:
*/

// A safe array example.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

const int SIZE = 5;

class arraytype{
	int a[SIZE];
public:
	arraytype(){ // This initialization is happening here just to save us time writing
		int i;
		for(i=0;i<SIZE;i++)
			a[i] = i;
	}
	int& operator[](int i);
};

// Provide range checking for arraytype
int& arraytype::operator[](int i){

	if(i<0 || i>SIZE){
		cout << "Error: index value of " << i << " is out of bounds!\n";
		exit(EXIT_FAILURE);
	}

	return a[i];
}

int main(){
	arraytype ob;
	int i;

	cout << "ob size:" << SIZE << '\n';
	for(i=0; i<SIZE; i++) // this is OK
		cout << "ob[" << i << "]: " << ob[i] << '\n';

	/*
		this generates a run-time error because SIZE+100 is out of range
	*/
	ob[SIZE+100] = 99; // error

	return EXIT_SUCCESS;
}

/*
	In this program, when the statement

	ob[SIZE+100] = 99;

	executes, the boundary error is intercepted by 'operator[]()' and the program is terminated before any damage can be done.

	Because the oerloading of the '[]' operator allows you to create safe arrays that look and act just like regular arrays, they
	can be seamlessly integrated into your programming environment. But be careful. A safe array adds overhead that might not be
	acceptable in all situations. In fact, the added overhead is why C++ does not perform boundary checking on array in the first
	place. However, in applications in which you want to be sure that a boundary error does not take place, a safe array will be
	worth the effort.
*/
