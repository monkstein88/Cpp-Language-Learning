
/*
	Exercise 1.: Write a program that creates a two-by-three two-dimensional safe array of integers.
	Demonstrate that it works.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class safe_2d_int_array{
	int* p;
	int row, col;
public:
	safe_2d_int_array(const int i_col,const int j_row);
	~safe_2d_int_array();
	int& put(int i, int j);
	int get(int i, int j);
};

// 2D array's cosntructor
safe_2d_int_array::safe_2d_int_array(const int i,const int j){
	p = new int [i * j]; // 'i' depicts the desired row dimension , 'j' - depicts the desired column dimension
	if(!p){
		cout << "Allocation error!\n";
		exit(EXIT_FAILURE);
	}
	row = i;
	col = j;
}

// 2D array's deconstructor
safe_2d_int_array::~safe_2d_int_array(){
	delete [] p;
}

// put(row,column)
int& safe_2d_int_array::put(int i, int j){
	if( (i < 0 || i>= row) || (j < 0 || j >= col) ){
		cout << "Bounds error!\n";
		exit(EXIT_FAILURE);
	}
	return p[i*j + j];
}

// get(row, column)
int safe_2d_int_array::get(int i, int j){
	if( (i < 0 || i>= row) || (j < 0 || j >= col) ){
		cout << "Bounds error!\n";
		exit(EXIT_FAILURE);
	}
	return p[i*j + j];
}

int main(){
	safe_2d_int_array arr1(2,3);

	arr1.put(0,0) = 1;
	arr1.put(0,1) = 3;
	arr1.put(0,2) = 6;

	cout << arr1.get(0,0)  << " " << arr1.get(0,1) << " " << arr1.get(0,2) <<" ";
	cout << arr1.get(0,3);

	return EXIT_SUCCESS;
}
