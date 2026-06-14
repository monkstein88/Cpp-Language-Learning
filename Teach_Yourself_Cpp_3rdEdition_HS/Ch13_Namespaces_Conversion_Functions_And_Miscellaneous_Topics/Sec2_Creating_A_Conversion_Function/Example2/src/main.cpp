
/*
	Example 2.: Following is another example of a conversion function. This one converts a string of type 'strtype' into a character pointer
	to 'str'.
*/


#include <iostream>
#include <cstring> // for 'strlen()' and 'strcpy()'
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class strtype
{
	char str[80];
	int len;
public:
	strtype(const char* s){ strcpy(str, s); len = strlen(s); }
	operator char *(){ return str; } // convert to 'char *'
};


int main()
{
	strtype s("This is a test");
	char *p, s2[80];

	p = s; // convert to 'char *'
	cout << "Here is a string: " << p << '\n';

	// convert to 'char *' in function call
	strcpy(s2, s);
	cout << "Here is copy of string: " << s2 << '\n';

	return EXIT_SUCCESS;
}

/*

	This program displays the following when ran:

	$ ./Ch13_Sec2_Example2.exe
	Here is a string: This is a test
	Here is copy of string: This is a test


	As you can see, not only is the conversion function invoked when object 's' is assigned to 'p' (which is of type 'char *'), but it is
	also called when 's' is used as a parameter to 'strcpy()'. Remember, 'strcpy()' has the following prototype:
*/
	char *strcpy(char *s1, const char *s2);
/*
	Because the prototype specifies that 's2' is of type 'char *', the conversion function to 'char *' is automatically called. This
	illustrates how a conversion function can also help you to seamlessly integrate your classes into C++'s standard library functions.
*/
