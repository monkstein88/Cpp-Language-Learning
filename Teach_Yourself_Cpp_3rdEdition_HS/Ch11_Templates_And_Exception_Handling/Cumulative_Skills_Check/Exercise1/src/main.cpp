/*
	Exercise 1.: In Chapter 6, Section 6.7, Example 3, a safe array class was shown. On your own, convert it into a generic safe array.
	(Chapter 6, Ssection 7, Example 3)

	From Chapter 6, Section 7, Example3: One advantage of being able to overload the '[]' operator is that it allows a better means of
	implementing safe array indexing. Earlier in this book you saw a simplified way to implement a safe array that relied upon functions
	such as 'get()' and 'put()' to access the elements of the array. Here you will see a better way to create a safe array that utilizes an
	overloaded '[]' operator. Recall that a safe array is an array that is encapsulated within a class that performs bounds checking.
	This approach prevents the array boundaries from being overrun. By overloading the '[]' operator for such an array, you allow it
	to be accessed just like a regular array.

	To create a safe array, simply add bounds checking to the 'operator[]()' function. The 'operator[]()' must also return a
	reference to the elemen being indexed. For example, this program adds a range check to the previous array program and proves
	that it works by generating a boundary error

*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

#define SIZE (10)

template <class obj_t>
class safe_arr{
	obj_t array[SIZE];
public:
	safe_arr(){ // Constructor - this initialization is happening here just to save us time writing
		for(int i; i<SIZE;i++)
			array[i] = i;
	}
	int& operator[](int i);
};

// Provide range self-checking for 'safer_arr' type
template <class obj_t>
int& safe_arr<obj_t>::operator[](int i){

	if( (i>=0) && (i<= SIZE-1) )
		return array[i];
	else{
		cerr << "Error: index value of " << i << " is out of bounds!\n";
		exit(EXIT_FAILURE);
	}
}


int main(){
	safe_arr<int> ob;

	cout << "ob size:" << SIZE << '\n';
	for(int i=0; i<SIZE; i++) // this is OK
		cout << "ob[" << i << "]: " << ob[i] << '\n';

	/*
		this generates a run-time error because SIZE+100 is out of range
	*/
	ob[SIZE+100] = 99; // error

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch11_Cumulative_Skills_Check_Exercise1.exe
	ob size:10
	ob[0]: 0
	ob[1]: 1
	ob[2]: 2
	ob[3]: 3
	ob[4]: 4
	ob[5]: 5
	ob[6]: 6
	ob[7]: 7
	ob[8]: 8
	ob[9]: 9
	Error: index value of 110 is out of bounds!


*/
