
/*
	Exercise 1.: Create an output manipulator that displays the current system time and data. Call this manipulator 'td()'.
*/

#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// This is an output type manipulator
ostream& td(ostream& stream){
	time_t rawtime;
	time(&rawtime);
	char local_time[80];
	strcpy(local_time,ctime(&rawtime));
	local_time[strlen(local_time)-1] = '\0'; // Remove the new-line character at the end of the string and just put a '\0' instead

	stream << "[" << local_time << "]";

	return stream;
}

// A simple input manipulator
istream& getpass(istream& stream){

	cout << '\a' ; // sound bell
	cout << "Enter login password: ";

	return stream;
}

int main(){
	char pw[80];

	do{
		cin >> getpass >> pw;
	}while(strcmp(pw,"password"));

	cout << td << "Login successful!" << endl;
	cout << td << "root# " << endl;

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:




*/
