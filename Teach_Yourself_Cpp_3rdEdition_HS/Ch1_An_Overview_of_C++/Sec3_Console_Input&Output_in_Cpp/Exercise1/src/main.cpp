
/*
	Exercise 1.: Write a program which accepts the number of hours that a emlployee works and the employee's wage. Then display the
	employee's gross pay.
*/

#include <iostream>
using namespace std;

int main(){
	int hours_spent;
	float rate_per_hour;

	cout << "Please, enter your number of work hours and pay rate, separated by [space]:.\n";
	cin >> hours_spent >> rate_per_hour;
	cout << "Your total pay is: " << hours_spent*rate_per_hour << "\n";
	return 0;
}
