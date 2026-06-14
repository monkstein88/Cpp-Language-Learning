
/*
	Exercise 2.: In Chapter 1 you created a program that converted feet to inches. Now create a class that
	does the same thing. Have the class store the number of feet and its equivalent number of inches. Pass
	to the class's constructor the number of feet and have the constructor display the number of inches.
	
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

	
	
	
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class feet_to_inch{
	double feet;
	double inches;
public:
	feet_to_inch(double f){
		 feet = f;
		 inches = f*12;
		 cout << feet << " feet equals " << inches << " inches.";
		 cout << "\n";
	}
};

int main(){
	feet_to_inch a(6.1), b(0.8);
	
	return EXIT_SUCCESS;
}
