
/*
	Example 2.: Here is an example that allocates an object dynamically.
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int i, j;
public:
	void set_i(int a, int b){ i = a; j = b; }
	int get_product(){ return i*j; }
};

int main(){
	samp *p;

	p = new samp; // allocate object
	if(!p){
		cout << "Allocation error\n";
		return EXIT_FAILURE;
	}

	p->set_i(4, 5);

	cout << "Product is: " << p->get_product() << "\n";

	return EXIT_SUCCESS;
}

/*

*/
