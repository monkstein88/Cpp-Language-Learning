/*
	Exercise 2.: In Chapter 1,overloaded versions of the 'abs()' function were created. As a better solution, crate a generic 'abs()'
	function on your own that will return the absolute value of any numeric object.
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

template <typename obj_T>  obj_T abs(obj_T& val){

	if(val<0)
		return (-val);
	else
		return (val);
}

int main(){

	unsigned char u_ch = 234;
	signed char s_ch = -123;
	unsigned int u_int = 0;
	signed int s_int = 32000;

	cout << "u_ch: " << (int)u_ch <<  ", abs(u_ch): " << (int)abs(u_ch) << '\n';
	cout << "s_ch: " << (int)s_ch <<  ", abs(s_ch): " << (int)abs(s_ch) << '\n';
	cout << "u_int: " << u_int <<  ", abs(u_int): " << abs(u_int) << '\n';
	cout << "s_int: " << s_int <<  ", abs(s_int): " << abs(s_int) << '\n';

	return EXIT_SUCCESS;
}


/*
	This program displays the following when ran:

	$ ./Ch11_Cumulative_Skills_Check_Exercise2.exe
	u_ch: 234, abs(u_ch): 234
	s_ch: -123, abs(s_ch): 123
	u_int: 0, abs(u_int): 0
	s_int: 32000, abs(s_int): 32000



*/
