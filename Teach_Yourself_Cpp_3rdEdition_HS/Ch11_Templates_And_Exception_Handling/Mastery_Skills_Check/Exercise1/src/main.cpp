/*
	Exercise 1.: Create a generic function that returns the mode of an array of values. (The mode of a set is the value that occurs most
	often.)
*/

#include <iostream>
#include <cstdlib>
using namespace std;

#define COUNTOF(x) (sizeof(x)/sizeof(x[0]))

template <typename val_t>
val_t mode(val_t array[], int size){
	val_t temp;
	int cnt=0;
	int val_cnt=0;
	int val_index=0;

	for(int i=0 ; i< size; i++){
		temp = array[i];
		for(int j=i ; j< size; j++){
			if(temp == array[j]) cnt++;
		}
		if(cnt>val_cnt){
			val_index = i;
			val_cnt = cnt;
		}
		cnt=0;
	}

	return array[val_index];
}

int main(){

	int arr1[] = {0,1,2,4,5,5,4,4,5,6,6,-1,2,0,-3,5,4,5};

	cout << "Mode of arr1 is: " << mode(arr1,COUNTOF(arr1)) << endl;

  return EXIT_SUCCESS;
}
