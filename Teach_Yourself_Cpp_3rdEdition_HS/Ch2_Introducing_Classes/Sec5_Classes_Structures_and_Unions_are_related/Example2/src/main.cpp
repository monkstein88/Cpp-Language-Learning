
/*
	Example 2.: Here is an example that used a union to display the binary bit pattern, byte by byte,
	contained within a double value.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

union bits{
	bits (double n); // union's constructor 
	void show_bits();
	double d;
	unsigned char c[sizeof(double)];
};

bits::bits(double n){
	d = n;
}

void bits::show_bits(){
	int i, j;
	
	for(j = sizeof(double)-1; j>=0; j--){
		cout << "Bit pattern in byte " << j << ": ";
		for(i = 128; i; i >>= 1)
			if( i & c[j])
				cout << "1" ;
			else
				cout << "0" ;
		cout << "\n";
	}
}

int main(){
	bits ob(1991.829);
	
	ob.show_bits();
	
	return EXIT_SUCCESS;
}

/*

*/