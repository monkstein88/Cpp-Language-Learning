/*
	Exercise 3.: Create a generic bubble sort (or use any other sorting algorithm you like).
*/

#include <iostream>
#include <cstdlib>
using namespace std;

#define COUNTOF(x) (sizeof(x)/sizeof(x[0]))

template <typename val_t>
void bubble_sort(val_t array[], int size){
	val_t temp;

	for(int i=0 ; i< size; i++){
		for(int j=i+1; j<size; j++){
			if(array[j]<array[i]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

}

int main(){
	int arr1[] = {0,1,2,4,5,5,4,4,5,6,6,-1,2,0,-3,5,4,5};

	cout << "Array before being sorted: ";
	for(unsigned int i=0; i< COUNTOF(arr1); i++)
		cout << arr1[i] << ' ';
	cout << endl;

	bubble_sort(arr1, COUNTOF(arr1));

	cout << "Array after being sorted: ";
	for(unsigned int i=0; i< COUNTOF(arr1); i++)
		cout << arr1[i] << ' ';
	cout << endl;


  return EXIT_SUCCESS;
}
