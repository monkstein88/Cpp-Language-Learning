
/*
	Exercise 1.: Write a program that displays the sentence "C++ is fun" in a 40-character-wide field using a colon (':') as the
	fill character
*/
#include <iostream>
#include <iomanip>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;



int main(){

	cout << setw(40) << setfill(':') << "C++ is fun" << endl;

   return EXIT_SUCCESS;
}
