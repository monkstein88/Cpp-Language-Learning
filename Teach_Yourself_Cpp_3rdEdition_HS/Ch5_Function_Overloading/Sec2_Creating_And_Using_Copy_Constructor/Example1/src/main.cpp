
/*
	Example 1.: Here is an example that illustrates why an explicit copy constructor function is needed. This program creates a
	very limited "safe" integer array type that prevents array boundaries from being overrun. Storage for each array is allocated
	using 'new', and a pointer to the memory is maintained within each array object.
*/


/*
	This program creates a "safe" array class. Since space for the array is dynamically allocated, a copy constructor is provided
	to allocate memory when one array object is used to initialize another.
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class array{
	int *p;
	int size;
public:
	array(int sz){ // 'normal' constructor
		p = new int [sz];
		if(!p){
			cout << "Normal constructor - array allocation error!" << "\n";
			exit(EXIT_FAILURE);
		}
		size = sz;
		cout << "Using 'normal' constructor" << "\n";
	}
	~array(){ delete [] p;} // deconstructor
	// copy constructors
	array(const array &a); // 'copy' constructor

	void put(int i, int j){
		if(i>=0 && i<size)
			p[i] = j;
	}
	int get(int i){
		return p[i];
	}
};

/*
	Copy constructor

	In the following, memory is allocated specifically for the copy, and the address of this memory is assigned to 'p'. Therefore,
	'p' is not pointing to the same dynamically allocated memory as he original object.
	'&a' is a reference to the (main - R-value) object that is being used to initialize the other (L-value) object.
*/
array::array(const array &a){
	int i;

	size = a.size;
	p = new int[a.size]; //
	if(!p){
		cout << "Copy constructor - array allocation error!" << "\n";
		exit(EXIT_FAILURE);
	}
	for(i=0; i<a.size; i++)
		p[i]= a.p[i]; // copy contents
	cout << "Using 'copy' constructor" << "\n";
}

int main(){
	array num(10); // this calls the "normal" contructor
	int i;

	// put some values into the array
	for(i=0; i<10; i++)
		num.put(i,i);

	// display num
	for(i=9; i>=0; i--)
		cout << num.get(i);
	cout << "\n";

	// create another array and initializ with 'num'
	array x = num; // this invokes the 'copy' constructor

	// display 'x'
	for(i=0; i<10; i++)
		cout << x.get(i);
	cout << "\n";
	return EXIT_SUCCESS;
}

/*
	When 'num' is used to initialize 'x', the copy constructor is called, memory for the new array allocated and strored in 'x.p',
	and the contents of 'num' are copied to 'x's array. In this way, 'x' and 'num' have arrays that have the same values, but each
	array is separate and distingct. (That is, 'num.p' and 'x.p' do not point to the same piece of memory.) If the copy constructor
	had not been created, the bitwise initialization 'array x = num' would have resulted in 'x' and 'num' sharing the same memory
	for their arrays! (That is, 'num.p' and 'x.p' would have, indeed, pointed to the same location.)

	The copy constructor is called only for initializations. For example, the following sequence does not call the copy constructor
	defined in the preceding program:

	array a(10);
	array b(10);

	b = a; // does not call copy constructor

	In this case, 'b = a' performs the assignment operation.

*/
