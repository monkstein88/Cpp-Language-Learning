
/*
	Exercise 2.: Change Section 4.1 Example 3 so the two-dimensional array is accessed via a pointer.
	Hint: In C++, as in C, all arrays are stored contiguously, left to right, low to high.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int a;
public:
	samp(int n){ a = n; }
	int get_a(){ return a; }
};

int main(){
	samp ob[4][2] = { 1, 2,
										3, 4,
										5, 6,
										7, 8 };
	samp* p = (samp*) ob;

	for(;p <= (((samp*) ob)+(sizeof(ob)/sizeof(ob[0][0]))-1);p+=2){
		cout << (p+0)->get_a() << ' ';
		cout << (p+1)->get_a() << "\n";
	}

	cout << "\n";

	return EXIT_SUCCESS;
}
