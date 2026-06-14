
/*
	Exercise 2.: In Exercise 2 of Chapter 2, Section 2.1, you created a stopwatch emulation. Expand your solution so that the
	'stopwatch' class provides both a parameterless constructor (as it does already) and an overloaded version that accepts the
	system time in the form returned by the standard function 'clock()'.  Demonstrate that your improvement works.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
#include <ctime> // contains a compiler own '#define CLOCKS_PER_SEC' which tell us this
using namespace std;

class stopwatch{
	clock_t start_t, end_t;
public:
	stopwatch(); // Constructor (paramterless) - to get the start timestamp
	stopwatch(clock_t start_clock);
	~stopwatch();// Destructor - to get the end timestamp
	void start();
	void stop();
	void show();
};

stopwatch::stopwatch(){
	start_t = end_t = 0;
}

stopwatch::stopwatch(clock_t start_clock){
	start_t = start_clock;
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

	stopwatch timer2(clock());
	for(i = 0 ; i < 500000000 ; i++);
	timer2.stop(); // Stop counting the time here
	timer2.show(); // Display the elapsed time

	return EXIT_SUCCESS;
}


/*

*/
