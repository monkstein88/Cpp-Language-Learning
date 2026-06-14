
/*
	Exercise 2.: Write a program that contains a class called 'watch'. Using the standard time functions, have this class's
	constructor read the system time and store it. Create an iserter that displays the time.
*/

#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class watch{
	time_t rawtime;
	struct tm* timeinfo;
	char date_time_str[80];
public:
	// Constructors:
	watch(){
		time(&rawtime); // Get the current time - when the object gets created;
		timeinfo = localtime(&rawtime);
		strcpy(date_time_str, asctime(timeinfo));
	}
	// Overloading operators - via friend functions:
	friend ostream& operator<<(ostream& stream, watch& ob){

		cout << ob.date_time_str;

		return stream;
	}
};

int main(){
	watch w1;

	cout << "Object 'w1' of type 'watch' created on: " << w1 << endl;

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	Object 'w1' of type 'watch' created on: Thu Dec 26 19:40:30 2019


*/
