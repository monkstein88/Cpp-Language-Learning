
/*
	Exercise 6.: Using the class nad support functions from Exercise 4, overload the '++' operator by using a member function and
	overload the '--' operator by using a friend. (Overload only the prefix forms of '++' and '--')
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
	friend array operator+(array& ob1, array& ob2);
	friend array operator-(array& ob1, array& ob2);
	friend int operator==(array& ob1, array& ob2);
	array& operator++(); // prefix form of '++' - using member function to overload it
	friend array& operator--(array& ob1); // prefix form of '--' - using friend function to overload it
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
		cout << nums[i] << '\t';
	cout << '\n';
}
// Fill in the operator functions
array operator+(array& ob1, array& ob2){
	array temp;

	for(int i=0; i<10; i++)
		temp.nums[i] = ob1.nums[i] + ob2.nums[i];

	return temp;
}
array operator-(array& ob1, array& ob2){
	array temp;

	for(int i=0; i<10; i++)
		temp.nums[i] = ob1.nums[i] - ob2.nums[i];

	return temp;
}
int operator==(array& ob1, array& ob2){
 //
	for(int i=0; i<10; i++)
		if(ob1.nums[i]!=ob2.nums[i]) return false;
 //
	return true;
}
array& array::operator++(){

	for(int i=0; i<10; i++)
		nums[i] += 1;

	return *this;
}

array& operator--(array& ob1){

	for(int i=0; i<10; i++)
		ob1.nums[i] -= 1;

	return ob1;
}


int main(){
	array o1, o2, o3;
	int a=1,c;

	int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	o1.set(i);
	cout << "(o1): " ; o1.show();
	o2.set(i);
	cout << "(o2): " ; o2.show();

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

	cout << "(o1):\t" ; o1.show();
	o3 = ++o1;
	cout << "(++o1):\t"; o3.show();
	o3 = --o1;
	cout << "(--o1):\t"; o3.show();


	return EXIT_SUCCESS;
}
