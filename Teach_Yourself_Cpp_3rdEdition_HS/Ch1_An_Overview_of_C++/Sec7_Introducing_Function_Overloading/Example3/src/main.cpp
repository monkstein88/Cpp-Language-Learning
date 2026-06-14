
/*
	So far, we've seen overloaded functions that differ in the data types of their
	arguments. However, overloaded functions can also  differ in the number of
	arguments, as this example illustrates:
*/

#include <iostream>
using namespace std;

void f1(int a);
void f1(int a, int b);

int main(){
	f1(10);
	f1(10,20);

	return 0;
}

void f1(int a){
	cout << "In f1(int a):"<< " a = " << a <<"\n";
}

void f1(int a, int b){
	cout << "In f1(int a, int b):"<< " a = " << a << ", b = " << b <<"\n";
}
