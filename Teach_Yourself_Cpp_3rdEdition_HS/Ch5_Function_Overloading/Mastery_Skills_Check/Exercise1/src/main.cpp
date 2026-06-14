
/*
	Exercise 1.: Overload the 'date()' constructor from Section 5.1, Example 3, so  that it accepts a parameter of type 'time_t'.
	(Remember, 'time_t' is a type defined by the standard time and date functions found in your C++ compiler's library.)
*/

#include <iostream>
#include <iomanip> // To be able to use manipulators that take arguments (like setprecision and setw) you need.
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <ctime>
using namespace std;

class date{
	int day, month, year;
public:
	date(char *str);
	date(int m, int d, int y){
		day = d;
		month = m;
		year = y;
	}
	date(time_t ct){
		struct tm* curr_time;

		 // Get the current time - in format Www Mmm dd hh:mm:ss yyyy
		 curr_time = localtime(&ct);
		 day = curr_time->tm_mday;
		 month = curr_time->tm_mon + 1; // because enumeration starts from 0
		 year = curr_time->tm_year - 100; // enumeration starts from year 1900, but that won't work right for us right, as we want
		 																	// everything past 2000s to be shown as just two figure values ,i.e. year '/2019' as '/19'	}
	}
	void show(){
		cout << setw(2) << month << '/' << setw(2) << day << '/' ;
		cout << setw(2) << year << '\n';
	}
};

date::date(char *str){
	sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

int main(){
	// construct 'date' object using string
	date sdate((char*)"12/31/99");

	// construct 'date' object using integers
	date idate(12, 31, 99);

	// construct 'date' object by using 'time_t' parameter
	date tdate(time(NULL));

	sdate.show();
	idate.show();
	tdate.show();

	return EXIT_SUCCESS;
}
