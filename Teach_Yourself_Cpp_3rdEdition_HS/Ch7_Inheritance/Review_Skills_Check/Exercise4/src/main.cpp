
/*
	Exercise 4.: Given the following partially completed program, fill in the needed operator functions:
*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class array{
	int nums[10];
public:
	array();
	void set(int n[10]);
	void show();
	array operator+(array ob2);
	array operator-(array ob2);
	int operator==(array ob2);
};
//
array::array(){
	int i;

	for(i=0; i<10; i++)
		nums[i] = 0;
}
//
void array::set(int* n){
	int i;

	for(i=0; i<10; i++)
		nums[i] = n[i];
}
void array::show(){
	int i;

	for(i=0; i<10; i++)
		cout << nums[i] << ' ';
	cout << '\n';
}
// Fill in the operator functions
array array::operator+(array ob2){
	array temp;

	for(int i=0; i<10; i++)
		temp.nums[i] = nums[i] + ob2.nums[i];

	return temp;
}
array array::operator-(array ob2){
	array temp;

	for(int i=0; i<10; i++)
		temp.nums[i] = nums[i] - ob2.nums[i];

	return temp;
}
int array::operator==(array ob2){
 //
	for(int i=0; i<10; i++)
		if(nums[i]!=ob2.nums[i]) return false;
 //
	return true;

}

int main(){
	array o1, o2, o3;

	int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	o1.set(i);
	o2.set(i);

	o3 = o1 + o2;
	o3.show();

	o3 = o1 - o3;
	o3.show();

	if(o1 == o2)
		cout << "o1 equals o2\n";
	else
		cout << "o1 does not equal o2\n";

	if(o1 == o3)
		cout << "o1 equals o3\n";
	else
		cout << "o1 does not equal o3\n";

	return EXIT_SUCCESS;
}

/*
	Have the overloaded '+' add each element of each operand. Have the overloaded '-' subtract each element of the right operand
	from the left. Have the overloaded '==' return true if each element of each operand is the same nad return otherwise.
 */
