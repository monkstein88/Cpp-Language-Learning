
/*
	Exercise 2.: Using the following class declaration, create a ten-element array, initilize 'num' to the
	values 1 through 10, and initialize 'sqr' to 'num's square.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class squares{
	int num, sqr;
public:
	squares(int a, int b){ num = a; sqr = b; }
	void show(){ cout << num << ' ' << sqr << "\n"; }
};

int main(){
	squares vals[] = { squares(1, 1*1),
										 squares(2, 2*2),
										 squares(3, 3*3),
										 squares(4, 4*4),
										 squares(5, 5*5),
								 		 squares(6, 6*6),
										 squares(7, 7*7),
										 squares(8, 8*8),
										 squares(9, 9*9),
										 squares(10, 10*10)};
	int i;

	cout << "Numbers & Squares: " << "\n";
	for(i=0; i < (int)(sizeof(vals) / sizeof(vals[0])); i++) // the (int) casting is needed due to the pedantic error reporting being set: : error: comparison between signed (i) and unsigned integer (sizof() expressions) expressions [-Werror=sign-compare]
		vals[i].show();

	return EXIT_SUCCESS;
}
