
/*
	Exercise 2.: Create a class called 'stopwatch' that emulates a stopwatch that
	keeps track of elapsed time. Use a constructor to initially se the elapsed time
	to 0. Provide two member functions called 'start()' and 'stop()' that turn on
	and off the timer, respectively. Include a member function called 'show()' that
	displays the elapsed time. Also, have the destructor function automatically
	display elapsed time when a 'stopwatch' object is destroyed. (To simplify, report
	the time in seconds.)

*/

#include <iostream>
#include <cstdlib> // contains definitions for 'EXIT_SUCCESS' and 'EXIT_FAILURE'
#include <ctime> // contains a compiler own '#define CLOCKS_PER_SEC' which tell us this
using namespace std;

class stopwatch{
	clock_t start_t, end_t;
public:
	stopwatch(); // Constructor - to get the start timestamp
	~stopwatch();// Destructor - to get the end timestamp
	void start();
	void stop();
	void show();
};

stopwatch::stopwatch(){
	start_t = end_t = 0;
}

stopwatch::~stopwatch(){
	cout << "Stopwatch object is being destroyed...";
	show(); // you can call the function directly, without preceding it with a '<name_of_object>.'
}

void stopwatch::start(){
 start_t = clock();
}

void stopwatch::stop(){
	end_t = clock();
}

void stopwatch::show(){
	cout << "Elapsed time: " << (float)(end_t - start_t) / CLOCKS_PER_SEC << " [sec]" << "\n";
}

int main(){
	stopwatch timer1;
	long i;
	timer1.start(); // Start counting the time here
	for(i = 0 ; i < 1000000000 ; i++);
	timer1.stop(); // Stop counting the time here
	timer1.show(); // Display the elapsed time

	return EXIT_SUCCESS;
}
