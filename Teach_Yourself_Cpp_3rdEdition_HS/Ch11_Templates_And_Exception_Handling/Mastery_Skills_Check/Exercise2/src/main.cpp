/*
	Exercise 2.: Create a generic function that returns the summation of any array of values.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

#define COUNTOF(x) (sizeof(x)/sizeof(x[0]))

template <typename val_t>
val_t sum(val_t array[], int size){
	val_t sum=0;

	for(int i=0 ; i< size; i++)
		sum += array[i];

	return sum;
}

int main(){

	int arr1[] = {0,1,2,4,5,5,4,4,5,6,6,-1,2,0,-3,5,4,5};

	cout << "Sum of arr1 is: " << sum(arr1,COUNTOF(arr1)) << endl;

  return EXIT_SUCCESS;
}
