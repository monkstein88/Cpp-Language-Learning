
/*
	Example 3.: This program creates the 'getpass()' input manipulator, which rings the bell and then prompts for a password:
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// A simple input manipulator
istream& getpass(istream& stream){

	cout << '\a' ; // sound bell
	cout << "Enter password: ";

	return stream;
}

int main(){
	char pw[80];

	do{
		cin >> getpass >> pw;
	}while(strcmp(pw, "password"));

	cout << "Login complete\n";

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	Enter password: PAss1
	Enter password: TrustNo1
	Enter password: password
	Login complete


*/
