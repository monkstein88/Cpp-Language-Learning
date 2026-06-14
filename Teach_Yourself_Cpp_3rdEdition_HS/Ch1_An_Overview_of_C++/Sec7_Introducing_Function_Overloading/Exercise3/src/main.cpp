
/*
	Create a function called called min() that returns the smaller of the two
	numeric arguments used to call the function. Overload min() so it accepts
	characters, integers, and double as arguments.
*/

#include <iostream>
#include <cmath>
using namespace std;

char min(char a, char b);
int min(int a, int b);
double min(double a, double b);

int main(){
	cout << "Smaller value between \'A\' and \'a\': " << min('a' ,'A') << "\n\n";
	cout << "Smaller value between -5 and 5: " << min(-5,5) << "\n\n";
	cout << "Smaller value between 0.3 and 0.1: " << min(0.3 , 0.1) << "\n\n";

	return 0;
}


// min() for characters
char min(char a, char b){
	cout << "In char min()\n";
	return a < b ? a : b;
}

// min() for integers
int min(int a, int b){
	cout << "In int min()\n";
	return a < b ? a : b;
}

// min() for doubles
double min(double a, double b){
	cout<< "In double min()\n";
	return a < b ? a : b;
}
