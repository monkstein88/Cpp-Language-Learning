
/*
	Example 3.: Here is an interesting way to use an object's constructor and
	destructor. This program uses an object of the 'timer' class to time the interval
	between when an object of type 'timer' is created and when it is destroyed.
	When the object's destructor is called, the elapsed time is displayed. You could
	use an object like this to time the duration of a program or the length of time
	a function spends within a block. Just make sure that the object goes out of
	scope at the point at which you want the timing interval to end.
*/

#include <iostream>
#include <ctime>
using namespace std;

class timer{
	clock_t start;
public:
	timer(); // constructor
	~timer(); // destructor
};

timer::timer(){
	start = clock();
}

timer::~timer(){
	clock_t end;

	end = clock();
	cout << "Elapsed time: " << (float)(end-start) / CLOCKS_PER_SEC << " [sec]" <<"\n";
}

int main(){
	timer ob;
	char c;

	// delay...
	cout << "Press a key followed by ENTER: ";
	cin >> c;

	return 0;
}

/*
	The program uses the standard library function 'clock()', which returns the
	number of clock cycles that have taken place since the program started running.
	Dividing this value by 'CLOCKS_PER_SEC' (defined in <ctime> library) converts
	the value to seconds.
*/
