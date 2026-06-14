
/*
	Exercise 1.: Given the following class declaration, fill in all the details that will create a dynamic array type. That is,
	allocate memory for the array, storing a pointer to this memory in 'p'. Store the size of the array, in bytes, in  'size'. Have
	'put()' return a reference to the specified element, and have 'get()' return the value of of a specified element. Don't allow
	the boundaries of the array to be overrun. Also, overload the assignment operator so that the allocated memory of each array is
	not accidentally destroyed when one array is assigned to another. (In the next section you will see a way to improve your
	solution to this exercise.)
*/

// Overload the '-' and '\' realtive to 'coord' class
#include <iostream>
#include <string>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class dynarray{
	int* p;
	int size;
public:
	// Constructors
	dynarray(); //
	dynarray(int s); // pass size of array in 's'
	// Utility (member) functions
	int& put(int i); // return a reference to element '[i]'
	int get(int i); // return value of element '[i]'
	int get_size();
	// Overloading (member) functions
	dynarray& operator=(dynarray& obj); // Overload the '=' operator , and use references for parameter and return values
};

// Constructor - for empty declaration w/o initialization
dynarray::dynarray(){

	p = NULL;
	size = 0;
}
// Constructor - for declaration with size initialization
dynarray::dynarray(int s){

	if(s < 0){
		cout << "Error: Cannot create an array of negative size!\n";
		exit(EXIT_FAILURE);
	}
	p  = new int [s];
	if(!p){
		cout << "Error: Cannot create an array of desired size!\n";
		exit(EXIT_FAILURE);
	}
	size = s;
}
// Store a value at element 'i'
int& dynarray::put(int i){

	if(size <= 0){
		cout << "Error: Array is empty and cannot put() anything!\n";
		exit(EXIT_FAILURE); // return some value that would indicate an error had occured. Or exit the program with FAILURE flag
	}if((i>=size) || (i<0)){
		cout << "Error: Specified element is out of array bounds!\n";
		exit(EXIT_FAILURE); // return some value that would indicate an error had occured. Or exit the program with FAILURE flag
	}

	return p[i];
}
// Get a value from element 'i'
int dynarray::get(int i){

	if(size <= 0){
		cout << "Error: Array is empty and cannot get() anything!\n";
		exit(EXIT_FAILURE); // return some value that would indicate an error had occured. Or exit the program with FAILURE flag
	}else if((i>=size) || (i<0)){
		cout << "Error: Desire element is out of array bounds!\n";
		exit(EXIT_FAILURE); // return some value that would indicate an error had occured. Or exit the program with FAILURE flag
	}

	return p[i];
}

int dynarray::get_size(){

	return size;
}

// Overload the '=' operator relative to 'dynarray' class
dynarray& dynarray::operator=(dynarray& obj){

	if(size < obj.size){
		delete [] p; // free the memory of the left operand
		p = new int [obj.size]; // allocate a new memory space
		if(!p){
			cout << "Error: Cannot allocate memory for 'dynarray' assignment!\n";
			exit(EXIT_FAILURE);
		}
	}
	size = obj.size;
	memcpy(p, obj.p, size*sizeof(p[0]));

	//return *((dynarray*) memcpy(p, obj.p, size*sizeof(p[0]))); // 'memcpy()' itself , returns the address of the destination that we copy. THIS MIGHT NOT BE CORRECT!!
	return *this;
}

int main(){
	dynarray da1(10), da2;

	cout << "da1 size : " << da1.get_size() << '\n';
	for(int i=0; i<10; i++){
		da1.put(i) = i*i;
		cout << "da1.put(" << i <<") = " << i*i << '\n';
	}

	for(int i=0; i<10; i++){
		cout << "da1.get(" << i <<") : " << da1.get(i) << '\n';
	}
	cout << "\n";

	// Utilize the object assign
	cout << "Assigning 'da1' to 'da2'...\n";
	da2 = da1;
	cout << '\n';

	cout << "da2 size : " << da2.get_size() << '\n';
	for(int i=0; i<10; i++){
		cout << "da2.get(" << i <<") : " << da2.get(i) << '\n';
	}

	return EXIT_SUCCESS;
}

/*

*/
