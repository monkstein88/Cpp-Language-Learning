
/*
	Create a function called sleep() that pauses the computer for the number of
	seconds specified by its single argument. OVerload sleep() so it can be called
	with either an integer or a string represention of an integer.
*/

#include <iostream>
#include <cmath>
using namespace std;

void sleep(int dly_sec);
void sleep(char* dly_sec);

int main(){
	sleep(10);
	sleep((char*)"10");

	return 0;
}


// sleep() for integers
void sleep(int dly_sec){
	cout << "This is an integer represented delay" <<"\n";
	for(int i = dly_sec * 100000000; i > 0 ; i--);
}

// sleep() for strings
void sleep(char* dly_sec){
	cout << "This is a string represented delay" <<"\n";
	for(int i = atoi(dly_sec)* 100000000; i > 0 ; i--);
}
