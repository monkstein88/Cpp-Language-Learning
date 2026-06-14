
/*
	Exercise 4.: In Chapter 9, Section 9.7, Example 1, a 'coord' class that holds integer coordinates was created and demonstrated in a
	program. Create a generic version of the 'coord' class that can hold coordinates of any type. Demonstrate your solution in a program.
	(Chapter 9, Section 7, Example 1)
*/
#include <iostream>
#include <fstream> // For 'ofstream', 'ifstream' , 'ofstream'
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

template <class c_T>
class coord{
	c_T x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(c_T i, c_T j){ x = i; y = j; }
	friend ostream& operator <<(ostream& stream, coord ob){
		stream << ob.x << ' ' << ob.y << '\n';

		return stream;
	}
	friend istream& operator >>(istream& stream, coord& ob){
		stream >> ob.x >> ob.y;

		return stream;
	}
};



int main(){
	coord<int> o1(1, 2);
	coord<double> o2(3.012, 4.022);

	ofstream out("test");
	if(!out){
		cout << "Cannot open output file.\n";
		return EXIT_FAILURE;
	}

	out << o1 << o2;

	out.close();

	ifstream in("test");
	if(!in){
		cout << "Cannot open input file.\n";
		return EXIT_FAILURE;
	}

	coord<int> o3;
	coord<double> o4;

	in >> o3 >> o4;

	cout << o3 << o4;

	in.close();

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch12_Review_Skills_Check_Exercise4.exe
	1 2
	3.012 4.022




*/
