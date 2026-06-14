
/*
	Exercise 5: Given the following class, create a function called 'make_sum()' that returns an object out
	of type 'sumation'. Have this function prompt the user for a number and then construct an object having
	this value and return it to the calling procedure. Demonstrate that the function works.

	class summation{
		int num;
		long sum; // summation of num
	public:
		void set_sum(int n);
		void show_sum(){
			cout << " summed is " << sum << "\n";
		}
	};

	void summation::set_sum(int n){
			int i;
			num = n;

			sum = 0;
			for(i=1; i<=n; i++)
				sum += i;
	}


*/

#include <iostream>
#include <cstdlib>  // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and definition for exit()
using namespace std;


class summation{
	int num;
	long sum; // summation of num
public:
	void set_sum(int n);
	void show_sum(){
		cout << num << " summed is " << sum << "\n";
	}
};

void summation::set_sum(int n){
		int i;
		num = n;

		sum = 0;
		for(i=1; i<=n; i++)
			sum += i;
}

summation make_sum(){
	summation temp_summation;
	int temp_num;

	cout << "Please, enter an integer number: ";
	cin >> temp_num;
	temp_summation.set_sum(temp_num);

	return  temp_summation;
}

int main(){
	summation s1;

	s1 = make_sum();
	s1.show_sum();

	return EXIT_SUCCESS;
}
