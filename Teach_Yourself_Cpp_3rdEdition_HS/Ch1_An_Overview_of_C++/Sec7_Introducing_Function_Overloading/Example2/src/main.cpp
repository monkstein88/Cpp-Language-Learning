
/*
 Here's anothe example of function overloading. In this case, the function date()
 is overloaded to accept the date either as a string or as three inthegers. In
 both cases, the function displays the data passed to it.
*/

#include <iostream>
using namespace std;

void date(char* date); // date as a string
void date(int month, int day, int year); // date as numbers

int main(){
	date((char*) "8/23/99"); // the '(char*)' casting is needed because of ISO C++17
	date(8, 23, 99);

	return 0;
}

// Date as string.
void date(char *date){
	cout << "Date: " << date << "\n";
}

// Date as integers.
void date(int month, int day, int year){
	cout << "Date: " << month << "/";
	cout << day << "/" << year << "\n";
}

/*
	This example illustrates how function overloading can provide the most natural
	to a function. Since it is very common for the date to be represented as either
	a string or as three integers containing the month, day, and year, you are free

*/
