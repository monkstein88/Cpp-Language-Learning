
/*
	Exercise 2.1: Given this class,

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

int p(int base, int exp);


class pwr
{
	int base;
	int exp;

public:
	pwr(int b, int e){ base = b; exp = e; }
	operator int() {return p(base, exp); };// create conversion to integer here

};

// Return the 'base' to the 'exp' power
int p(int base, int exp)
{
	int temp;

	temp = 1;
	if(exp>0){
		for(;exp;exp--)
			temp = base*temp;
	}else if(exp<0){
		for(;exp;exp++)
			temp = base*temp;
	 	temp = 1.0/temp;
	}

	return temp;
}

int main()
{
	pwr o1(2,3), o2(3,3), o3(0,0), o4(1,-3);
	int result;

	result = o1;
	cout << "o1: " << result << '\n';

	result = o2;
	cout << "o2: " << result << '\n';

	result = o3;
	cout << "o3: " << result << '\n';

	result = o4;
	cout << "o4: " << result << '\n';

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch13_Sec2_Exercise2_1.exe
	o1: 8
	o2: 27
	o3: 1
	o4: 1


*/
