
/*
	Example 1.: Here is an example of object pointer arithmetic:
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int a, b;
public:
	samp(int n, int m){ a = n; b = m; }
	int get_a(){ return a; }
	int get_b(){ return b; }
};

int main(){
	samp ob[4] = { samp(1, 2),
								 samp(3, 4),
								 samp(5, 6),
								 samp(7, 8)
							 };
  int i;
	samp *p;
	p = ob; // get starting address of array

	for(i=0; i<4; i++){
		cout << p->get_a() << ' ';
		cout << p->get_b() << "\n";
		p++; // advance to next object
	}

	cout << "\n";

	return EXIT_SUCCESS;
}

/*
	This program displays:
	"1 2
	 3 4
	 5 6
	 7 8"

	 As evidenced by the output, each time 'p' is incremented, it points to the next object in the array.
*/
