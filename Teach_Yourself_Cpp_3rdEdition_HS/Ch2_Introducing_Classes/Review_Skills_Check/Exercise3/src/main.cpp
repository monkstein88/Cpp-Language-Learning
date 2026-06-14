
/*
	Ex 3.: Create a class that holds name and address information. Store all the
	information character strings that are private members of the class. Inlclude
	a public funtion that stores the name and address. Also include public function
	that displays the name and address. (Call these functions 'store()' and 'display()')
*/
#include <iostream>
#include <cstring>
using namespace std;

#define MAX_STR_SIZE 80

short rotate(short);
long rotate(long);

int main(){
	short sh_val1 = (short) 0x7FFF; // 16-bit word:  MSb is 0, LSb and all the rest is 1
	// short sh_val2 = (short) 0x7FFE; // 16-bit word:  MSb is 0, LSb is 0, all the rest is 1
	// short sh_val3 = (short) 0x8001; // 16-bit word:  MSb is 1, LSb is 1,  and all the rest is 0
	// short sh_val4 = (short) 0x8000; // 16-bit word:  MSb is 1, LSb is 0,  and all the rest is 0

	// long lo_val1 = 0x7FFFFFFF; // 32-bit word:  MSb is 0, LSb and all the rest is 1
	// long lo_val2 = 0x7FFFFFFE; // 32-bit word:  MSb is 0, LSb is 0, all the rest is 1
	long lo_val3 = 0x80000001; // 32-bit word:  MSb is 1, LSb is 1,  and all the rest is 0
	// long lo_val4 = 0x80000000; // 32-bit word:  MSb is 1, LSb is 0,  and all the rest is 0

	cout << "short val1: " << sh_val1 << " short val1 (rotate left): " << rotate(sh_val1) << "\n";
	cout << "long val3: " << lo_val3 << " long val3 (rotate left): " << rotate(lo_val3) << "\n";


	return 0;
}

short rotate(short val){
	// short in C++ is 16bit long = 2 x bytes
	val = ( val & (0x80 << ((sizeof(val)-1)*8)) ) ?  (val << 1) + 1 :  (val << 1) + 0;
	return val;
}
long rotate(long val){
	// long in C++ is also 32bit = 4 x bytes
	val = ( val & (0x80 << ((sizeof(val)-1)*8)) ) ?  (val << 1) + 1 :  (val << 1) + 0;
	return val;
}
