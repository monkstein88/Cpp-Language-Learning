
/*
	Exercise 2.: Write a program that writes the following table of information to a file called 'phone':
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){

	ofstream fout("phone");
	if(!fout){
		cout << "Cannot open output file - " << "phone" << endl;
		exit(EXIT_FAILURE);
	}

	fout << "Isaac Newton" << ", " << "415 555-3423" << '\n';
	fout << "Robert Goddard" << ", " << "213 555-2312" << '\n';
	fout << "Enrico Fermi" << ", " << "202 555-1111" << '\n';
	fout.close();

	return EXIT_SUCCESS;
}

/*

*/
