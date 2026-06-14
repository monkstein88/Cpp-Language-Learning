
/*
	Example 4.: This program uses 'read()' to read the file created by the program in Example 3:
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(){
	ifstream in("test", ios::in | ios::binary);

	if(!in){
		cout << "Cannot open input file.\n";
		exit(EXIT_FAILURE);
	}

	double num;
	char str[80];

	in.read((char*) &num, sizeof(double));
	in.read(str, 14);
	str[14] = '\0'; // null terminate 'str'

	cout << num << ' ' << str << endl;

	in.close();

	return EXIT_SUCCESS;
}

/*
	As is the case with the program in the preceding example, the type cast inside 'read()' is necessary because C++ will not
	automatically conver a pointer of one type to another.

	The program displays the following when ran:

	100.45 This is a test


*/
