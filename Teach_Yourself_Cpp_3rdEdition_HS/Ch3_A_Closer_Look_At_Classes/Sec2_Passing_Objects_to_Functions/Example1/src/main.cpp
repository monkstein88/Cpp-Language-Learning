
/*
	Example 1.: Here is a short example that passes an object to  a function:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class samp{
	int i;
public:
	samp(int n) { i = n; }
	int get_i() { return i; }
};

// Return square of o.i.
int sqr_it(samp o){
	return o.get_i() * o.get_i();
}

int main(){
	samp a(10), b(2);

	cout << sqr_it(a) << "\n";
	cout << sqr_it(b) << "\n";

	return EXIT_SUCCESS;
}

/*
	This program creates a class called 'samp' that contains one ingeger variable called 'i'. The
	function sqr_it() takes an argument of type 'samp' amd returns the square of that object's 'i'
	value. The output from this program is 100 followed by 4.
*/
