
/*
	Exercise 3.: Write a generic function called 'gexp()' that returns the value of one of its arguments raised to the power of the other.
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

template <typename val_t> val_t gexp(val_t base, val_t exp){
	val_t temp=1;

	if(exp<0 && base==0){
		cerr << "Error: Divide by zero!" << endl;
		exit(EXIT_FAILURE);
	}
	if(exp==0){
		return 1;
	}
	if(exp<0){
		while(exp++){
			 temp *= base;
		}
		return 1.0/temp;
	}else{
		while(exp--){
			temp *= base;
		}
		return temp;
	}

}


int main(){
	int i1_base=2, i1_exp = 3;
	int i2_base=0, i2_exp = 0;
	double d1_base=12, d1_exp = -3;
	double d2_base=12, d2_exp = 0;

	cout << i1_base << "^" << i1_exp << " = " << gexp(i1_base,i1_exp) << endl;
	cout << d1_base << "^" << d1_exp << " = " << gexp(d1_base,d1_exp) << endl;
	cout << i2_base << "^" << i2_exp << " = " << gexp(i2_base,i2_exp) << endl;
	cout << d2_base << "^" << d2_exp << " = " << gexp(d2_base,d2_exp) << endl;


	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch12_Review_Skills_Check_Exercise3.exe
	2^3 = 8
	12^-3 = 0.000578704
	0^0 = 1
	12^0 = 1

*/
