
/*
	Example 3.: One very common use of a 'static' class variable is to coordinate access to a shared resource, such as a disk file, printer,
	or network server. As you probably know from your previous programming experience, coordinating access to a shared resource requires
	some means of sequencing events. To get an idea of how 'static' member variables can be used to control access to a shared resource,
	examine the following program. It creates a class called 'output', which maintains a common output buffer called 'outbuf' that is,
	itself, a 'static' character array. This buffer is used to receive output sent by the 'output()' member function. This function sends
	the contents of 'str' one character at a time. It does so by first acquiring access to the buffer and then sending all the characters in
	'str'. It locks out access to the buffer by other objects until it is done outputting. You should be able to follow its oepration by
	studying the code and reading the comments.
*/

// A shared resource example
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
			inuse = who; 	// get buffer
		if(inuse != who)	// in use by someone else
			return -1;
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

	$ ./Ch13_Sec3_Example3.exe
	This is a test of statics

*/
