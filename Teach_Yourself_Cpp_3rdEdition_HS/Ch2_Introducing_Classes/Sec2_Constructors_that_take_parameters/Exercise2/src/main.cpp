
/*
	Exercise 2.: Create a class called 't_and_d' that is passed the current system
	time and date as a parameter to its constructor when it is created. Have the
	class include a member function that displays this time and date on the screen.
	(Hint: Use the standard time and date functions found in the standard library
	to find and displaye the time and date.)
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class t_and_d{
	time_t date_time;
public:
	t_and_d(time_t dt); // constructor
	void display();
};

t_and_d::t_and_d(time_t dt){
	date_time = dt;
}

void t_and_d::display(){
	cout << "Object created on: " << asctime(localtime(&date_time));
}

int main(){
	// Pass the current time
	t_and_d ob1(time(nullptr));
	// Display the cyrr
	ob1.display();

	return EXIT_SUCCESS;
}
