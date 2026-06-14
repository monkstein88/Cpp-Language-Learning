
/*
	Exercise 2.: Write a program which accepts the number of hours, which a worker spends, and pay rate. After which it outputs the total
	pay, which the worker recieves
*/
#include <iostream>
using namespace std;

int main(){
	float feet;
	//float inches;

	cout << "Convert [feet] -> [inches]\n";
	do{
		cout << "Enter [feet]: ";
		cin >> feet;
		cout << " equals " << feet*12 << " [inches]" << "\n";

	}while(feet != 0);


	return 0;
}
