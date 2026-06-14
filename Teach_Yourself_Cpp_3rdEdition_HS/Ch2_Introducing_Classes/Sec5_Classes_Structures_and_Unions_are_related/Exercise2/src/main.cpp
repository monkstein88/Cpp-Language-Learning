
/*
	Exercise 2.: Use a 'union' class to swap the low- and high- order bytes of an integer (assume that 2-bytes
	type of integer is to be used - 'short int')
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

union short_u{
	short_u(short int val);
	void swap();
	short int value;
	char val_byte[sizeof(value)]; // this is assumed to be equal 2 elements 
};


short_u::short_u(short int val){
	value = val;
}

void short_u::swap(){
	char temp;
	
	temp = val_byte[0];
	val_byte[0] = val_byte[1];
	val_byte[1] = temp;
}



int main(){
	short_u si1(-20), si2(300), si3(0);
	
	cout << "Original s1: " << si1.value << "\n";
	cout << "Original s2: " << si2.value << "\n";
	cout << "Original s3: " << si3.value << "\n";
	
	si1.swap();
	si2.swap();
	si3.swap();
	
	cout << "Swapped s1: " << si1.value << "\n";
	cout << "Swapped s2: " << si2.value << "\n";
	cout << "Swapped s3: " << si3.value << "\n";
	
	return EXIT_SUCCESS;
}
