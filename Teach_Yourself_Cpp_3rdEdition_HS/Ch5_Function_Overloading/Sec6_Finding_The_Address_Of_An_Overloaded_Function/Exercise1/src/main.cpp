
/*
	Exercise 1.: Following are two overloaded functions Show how to obtain the address of each.

	int dif(int a, int b){
		return a-b;
	}

	int dif(float a, float b){
		return a-b;
	}

*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int dif(int a, int b){
	return a-b;
}

float dif(float a, float b){
	return a-b;
}


int main(){
	int (*fp1)(int,int); // Function pointer, to be associated with 'dif(int, int)'
	float (*fp2)(float,float); // Function pointer, to be associated with 'dif(float,float)'

	fp1 = dif; // get the address of 'dif(int, int)'

	fp2 = dif; // get the address fo 'dif(float, float)'

	cout << "Calling fp1(), result:" << fp1(10,20) << '\n';

	cout << "Calling fp2(), result: " << fp2(24.5,-0.3) << '\n'; 

	return EXIT_SUCCESS;
}
