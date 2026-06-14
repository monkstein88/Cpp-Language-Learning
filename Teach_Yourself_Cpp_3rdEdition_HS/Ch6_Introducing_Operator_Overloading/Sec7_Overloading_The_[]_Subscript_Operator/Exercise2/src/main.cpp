
/*
	Exercise 2.: Modify your answer to Exercise 1 from Section 6.6 so that it uses '[]' to index the dynamic array. That is,
	replace 'get()' and 'put()' functions with the '[]' operator.
*/

// Overload the '-' and '\' realtive to 'coord' class
#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class dynarray{
	int* p; // array's pointer for indexing a single element
	int size; // depicting array's size - elements count
public:
	// Constructors
	dynarray();
	dynarray(int sz);
	// Destructor:
	~dynarray();
	// Overload functions:
	dynarray& operator=(dynarray& ob);
	int& operator[](int i); // return a referene to the element 'i' of the array.
};
// Constructors:
dynarray::dynarray(){

	p = nullptr;
	size = 0;
}
dynarray::dynarray(int sz){

	if(sz < 0){
		cout << "Error: Cannot create an array of negative size!\n";
		exit(EXIT_FAILURE);
	}
	p = new int [sz];
	if(!p){
		cout << "Error: Cannot create an array of desired size!\n";
		exit(EXIT_FAILURE);
	}
	size = sz;
}
// Destructor:
dynarray::~dynarray(){

	if(p){
		cout << "Freeing: 0x" << hex << (unsigned long long) p << '\n';
		delete [] p;
	}
}
// Overloads:
// Overload the '=' operator via a member function
dynarray& dynarray::operator=(dynarray& ob){

	if(size < ob.size){
		if(p){
			delete [] p;
		}
		p = new int [ob.size];
		if(!p){
			cout << "Error: Could not allocate requested memory for 'dynarray' assignment!\n";
			exit(EXIT_FAILURE);
		}
		size = ob.size;
	}
	memcpy(p, ob.p, ob.size * sizeof(ob.p[0]));

	return *this;
}
// Overload the '[]' operator via a member function
int& dynarray::operator[](int i){

	if(i<0 || i>size){
		cout << "Error: Index value of " << i << " is out of bounds!\n";
		exit(EXIT_FAILURE);
	}
	return p[i];
}

int main(){
	dynarray da1(10), da2;

	for(int i=0; i<10; i++){
		da1[i] = i*i;
		cout << "da1[" << i <<"] = " << i*i << '\n';
	}
	cout << '\n';

	for(int i=0; i<10; i++){
		cout << "da1.[" << i <<"] : " << da1[i] << '\n';
	}
	cout << "\n";

	// Utilize the object assign
	cout << "Assigning 'da1' to 'da2'...\n";
	da2 = da1;
	cout << '\n';

	for(int i=0; i<10; i++){
		cout << "da2[" << i <<"] : " << da2[i] << '\n';
	}
	cout << '\n';

	return EXIT_SUCCESS;
}

/*

*/
