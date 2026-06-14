
/*
	Example 2.: This program uses 'put()' to write characters to a file until the user enters a dollar sign:
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

int main(int argc, char* argv[]){
	char ch;

	if(argc!=2){
		cout << "Usage: WRITE <filename>\n";
		exit(EXIT_FAILURE);
	}

	ofstream out(argv[1], ios::out | ios::binary);
	if(!out){
		cout << "Cannot open file.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Enter a $ to stop\n";
	do{
		cout << ": ";
		cin.get(ch);
		out.put(ch);
	}while(ch!='$');

	out.close();

	return EXIT_SUCCESS;
}

/*
	Notice that the program uses 'get()' to read characters from 'cin'. This prevents leading spaces from being discarded.

	This program displays the following when ran:

	$ ./Ch9_Sec3_Example2.exe writefile
	Enter a $ to stop
	: H
	: : e
	: : l
	: : l
	: : o
	: : !
	: : $


*/
