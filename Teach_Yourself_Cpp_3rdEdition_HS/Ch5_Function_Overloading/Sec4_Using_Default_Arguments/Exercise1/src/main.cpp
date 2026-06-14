
/*
	Exercise 1.: In the C++ standard library is the function 'strtoi()', which has this prototype:

	long strtol(const char *start, const **end, int base);

	The function converts the numeric string pointed to by 'start' into a long integer. The number base of the numeric string is
	specified by 'base'. Upon return, 'end' points to the character in the string immediately following the end of th enumber. The
	long integer equivalent of the numeric string is returned. 'base' mus be in the range 2 to 38. However, most commonly, base 10
	is used.

	Create a function called 'mystrtol()' that works the same as 'strto;()' except that 'base' is given the default argument of 10.
	(Feel free to use strtol() to actually perform the conversion. It requires header <cstdlib>.) Demonstrate that your version
	works correctly.
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

long mystrtol(const char* start, char **end, int base=10){

		return strtol(start, end, base);
}

int main(){
	char* long1 = (char*)"21445";
	char* p1;
	char* long2 = (char*)"-45515";
	char* p2;
	char* long3 = (char*)"10000000"; // 128 decimal
	char* p3;

	cout << "Print long 1: " << mystrtol(long1,(char**) &p1) << '\n';
	cout << "Print long 2: " << mystrtol(long2,(char**) &p2,10) << '\n';
	cout << "Print long 3: " << mystrtol(long3,(char**) &p3,2) << '\n';

	return EXIT_SUCCESS;
}

/*

*/
