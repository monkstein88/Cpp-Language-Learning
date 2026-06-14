
/*
	Exercise 1.: Rewrite Example 1 so it displays the contents of the 'ob' array in reverse order.
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
	samp ob[4] = {	samp(1, 2),
									samp(3, 4),
									samp(5, 6),
									samp(7, 8)
								};
  samp *p;

	p = ob;
	p += (sizeof(ob)/sizeof(ob[0]))-1;

	for(;p >= ob ;p--){
		cout << p->get_a() << ' ';
		cout << p->get_b() << "\n";
	}

	cout << "\n";

	return EXIT_SUCCESS;
}
