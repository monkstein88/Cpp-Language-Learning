
/*
	Example 2.: The following program passes initial values to a dynamically allocated object:
*/

// Allocating dynamic objects
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class samp{
	int i, j;
public:
	samp(int a, int b){ i=a; j=b; }
	int get_product(){ return i*j; }
};

int main(){
	samp* p;

	p = new samp(6, 5); // allocate object with initialization
	if(!p){
		cout << "Aloocation error\n";
		return EXIT_FAILURE;
	}
	cout << "Product is: " << p->get_product() << "\n";
	delete p;

	return EXIT_SUCCESS;
}

/*
	When the 'samp' object is allowed, its constructor is automatically called and is passed the values
	6 and 5.
*/
