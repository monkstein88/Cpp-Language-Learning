
/*
	Example 1.: This program illustrates how public, private, and protected members of a class can be accessed:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	// private by default
	int a;
protected: // still private relative to 'samp'
	int b;
public:
	int c;

	samp(int n, int m){ a = n; b = m; }
	int geta(){ return a; }
	int getb(){ return b; }
};

int main(){
	samp ob(10, 10);

	// ob.b = 99; Error! 'b' is protected and thus private
	ob.c = 30;

	cout << ob.geta() << ' ';
	cout << ob.getb() << ' ' << ob.c << '\n';
	
	return EXIT_SUCCESS;
}

/*

*/
