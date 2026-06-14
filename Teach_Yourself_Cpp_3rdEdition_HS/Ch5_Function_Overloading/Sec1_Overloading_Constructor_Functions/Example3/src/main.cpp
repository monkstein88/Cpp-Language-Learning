
/*
	Example 3.: Another reason for overloading constructor functions is to allow the programmer to select the most convenient
	method of initializing an object. To see how, first examine the next example, which creates a class that holds a calendar
	date. It overloads the 'date()' constructor two ways. One form accepts the date as a character string. In the other form,
	the date is passed as three integers
*/


#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
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
	void show(){
		cout << month << '/' << day << '/' ;
		cout << year << '\n';
	}
};

date::date(char *str){
	sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

int main(){
	// construct date object using string
	date sdate((char*)"12/31/99");

	// construct date object using integers
	date idate(12, 31, 99);

	sdate.show();
	idate.show();

	return EXIT_SUCCESS;
}

/*
	The advantage of overloading the 'date()' constructor, as shown in this program, is that you are free to use whichever
	version most conveniently fits the situation in which it is being used. For example, if a 'date' object is being created
	from user input, the string version is the easiest to use. However, if the 'date' object is being constructed through
	some sort of internal computation, the three-integer parameter version probably makes sense.

	Although it is possible to overload a constructor as many times as you want, doing so excessively has a destructing effect
	on the class. From a stylistic point o view, it is best to overload a constructor to acoomodate only those situations that
	are likely to occur frequently. For example, overloading 'date()' a third time so the date can be entered in terms of
	milliseconds makes little sense. However, overloading it to accept an object of type 'time_t' (a type that stores the
	system date and time) could be very valuable. (See the Mastery Skills Check exercises at the end of this chapter for an
	example that does just this.)
*/
