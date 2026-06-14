
/*
	Exercise 1.: Create a class called 'prompt'. Pass its constructor function a prompting string of your
	own choosing. Have the constructor display the string and then input an integer. Have the constructor
	display the string and then input an integer. Store this value in a private variable called 'count'.
	When an object of type 'prompt' is destroyed, ring the bell on the terminal as amany times as the user
	entered.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class prompt{
	int count;
public:
	prompt(char* p_str){
		cout << p_str << " : ";
		cin >> count;
	}
	~prompt(){
		for(;count--;){
			cout << '\a';
			for(long long int time_cyc = 500000000; time_cyc--;); // delay to distinct between beeps destructor execution
		}
	}
};

int main(){
	prompt msg((char*)"Enter number of beeps");


	return EXIT_SUCCESS;
}
