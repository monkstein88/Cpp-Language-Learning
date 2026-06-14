
/*
	Exercise 4_1.: In Chapter 9, Section 9.7, Example 1, a 'coord' class that holds integer coordinates was created and demonstrated in a
	program. Create a generic version of the 'coord' class that can hold coordinates of any type. Demonstrate your solution in a program.
	(Chapter 9, Section 7, Example 1)

	Official answer:
*/
#include <iostream>
#include <fstream> // For 'ofstream', 'ifstream' , 'ofstream'
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

template <class CoordType > class coord
{
	CoordType x, y;
public:
	coord(CoordType i, CoordType j) { x = i; y = j; }
	void show() { cout << x << ", " << y << endl; }
};



int main(){

	coord <int>o1(1, 2), o2(3, 4);
	o1.show();
	o2.show();
	coord <double > o3(0.0, 0.23), o4(10.19, 3.098);
	o3.show();
	o4.show();

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch12_Review_Skills_Check_Exercise4_1.exe
	1, 2
	3, 4
	0, 0.23
	10.19, 3.098


*/
