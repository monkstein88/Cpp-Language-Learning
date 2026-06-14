
/*
	Exercise 2.: Given this class,

	class pwr
	{
		int base;
		int exp;

	public:
		pwr(int b, int e){ base = b; exp = e; }
		// create conversion to integer here
	};


	create a conversion function that converts an object of type 'pwr' to type integer. HAve the funtion return the result of 'base^(exp)'
*/


#include <iostream>
#include <cstring> // for 'strlen()' and 'strcpy()'
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class pwr
{
	int base;
	int exp;

public:
	pwr(int b, int e){ base = b; exp = e; }
	operator int();// create conversion to integer here

};

pwr:: operator int()
{
	int result;
	int e = exp;


	result = 1;
	if(e>0){
		for(;e;e--)
			result = base*result;
	}else if(e<0){
		for(;e;e++)
			result = base*result;
		result = 1.0/result;
	}

	return result;
}

int main()
{
	pwr exp1(3,3), exp2(1,-3), exp3(0,0);

	cout << "exp1: " << exp1 << ", exp2: " << exp2 << ", exp3: " << exp3 << endl ;

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch13_Sec2_Exercise2.exe
	exp1: 27, exp2: 1, exp3: 1


*/
