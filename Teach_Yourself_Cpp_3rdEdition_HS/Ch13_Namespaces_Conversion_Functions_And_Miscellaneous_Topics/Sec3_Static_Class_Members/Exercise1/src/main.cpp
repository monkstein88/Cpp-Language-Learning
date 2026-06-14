
/*
	Exercise 1.: Rework Example 3 so that it displays which object is currently outputting characters and which one or ones are blocked from
	outputting a character because the buffer is already in use by another.

*/


#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class output
{
	static char outbuf[255]; // this is the shared resource
	static int inuse; // better avaiable if 0;
	static int oindex ; // index of 'outbuf'
	char str[80];
	int i; // index of next char in 'str'
	int who; // identifies the object, must be > 0
public:
	output(int w, const char *s) { strcpy(str, s); i = 0; who = w; }

	/*
		This function returns -1 if waiting for buffer, it returns 0 if it is done outputting, and it returns 'who' if it is still using the
		buffer
	*/
	int putbuf()
	{
		if(!str[i]) // done outputting
		{
			inuse = 0; // release buffer
			return 0;  // signal termination
		}
		if(!inuse)
		{
			inuse = who; 	// get buffer
			cout << "object #" << who << " is outputting." << '\n';
		}
		if(inuse != who)	// in use by someone else
		{
			cout << "object #" << who << " is blocked." << '\n';
			return -1;
		}
		if(str[i]) // still chars to output
		{
			outbuf[oindex] = str[i];
			i++;
			oindex++;
			outbuf[oindex] = '\0'; // always keep null-terminated
			return 1;
		}
		return 0;
	}
	void show() { cout << outbuf << '\n'; }
};

char output::outbuf[255]; // this is the shared resource
int  output::inuse = 0; // buffer available if 0
int  output::oindex = 0; // index of 'outbuf'

int main(){
	output o1(1, "This is a test"), o2(2, " of statics");

	while(o1.putbuf() | o2.putbuf()); // output chars

	o1.show();

	return EXIT_SUCCESS;
}

/*
	This program displays the following when ran:

	$ ./Ch13_Sec3_Exercise1.exe
	object #1 is outputting.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is blocked.
	object #2 is outputting.
	object #2 is outputting.
	object #2 is outputting.
	object #2 is outputting.
	object #2 is outputting.
	object #2 is outputting.
	object #2 is outputting.
	object #2 is outputting.
	object #2 is outputting.
	object #2 is outputting.
	object #2 is outputting.
	This is a test of statics

*/
