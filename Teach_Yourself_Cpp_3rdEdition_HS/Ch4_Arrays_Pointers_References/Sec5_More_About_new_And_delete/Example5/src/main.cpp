
/*
	Example 5.: The following version of the preceding program gives 'samp' a destructor, and now when 'p'
	is freed, each element's destructor is called:
*/

// Allocating dynamic objects
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int i, j;
public:
	void set_ij(int a, int b){ i = a; j = b; }
	~samp(){ cout << "Destroying...\n"; }
	int get_product(){ return i*j; }
};

int main(){
	samp *p;
	int i;

	p = new samp [10]; //allocate object array
	if(!p){
		cout << "Allocation error\n";
		return EXIT_FAILURE;
	}
	for(i=0; i<10; i++)
		p[i].set_ij(i, i);
	for(i=0; i<10; i++){
		cout << "Product [" << i << "] is: ";
		cout << p[i].get_product() << "\n";
	}
	delete [] p;

	return EXIT_SUCCESS;
}

/*
	This program displaysthe following:
	"Product [0] is: 0
	 Product [1] is: 1
	 Product [2] is: 4
	 Product [3] is: 9
	 Product [4] is: 16
	 Product [5] is: 25
	 Product [6] is: 36
	 Product [7] is: 49
	 Product [8] is: 64
	 Product [9] is: 81
	 Destroying...
	 Destroying...
	 Destroying...
	 Destroying...
	 Destroying...
	 Destroying...
	 Destroying...
	 Destroying...
	 Destroying...
	 Destroying...
 "
*/
