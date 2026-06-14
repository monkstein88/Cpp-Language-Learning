
/*
	Example 3.: Here is a program that uses 'write()' to write a 'double' and a string to a file called 'test':
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	ofstream out("test", ios::out | ios::binary);

	if(!out){
		cout << "Cannot open output file.\n";
		exit(EXIT_FAILURE);
	}
	double num = 100.45;
	char str[] = "This is a test";

	out.write((char*) &num, sizeof(double));
	out.write(str, strlen(str));

	out.close();

	return EXIT_SUCCESS;
}

/*
	Note: The type case to '(char*)' inside the call to 'write()' is necessary when outputting a buffer that is not defined as a
	character array. Because of C++'s strong type checking, a pointer of one type will not atuomatically be converted into a
	pointer of another type.


*/
