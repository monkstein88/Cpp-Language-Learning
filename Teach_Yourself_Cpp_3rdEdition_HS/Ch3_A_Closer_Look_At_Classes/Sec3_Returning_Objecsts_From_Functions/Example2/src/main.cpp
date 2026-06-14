
/*
	Example 2.: You must be careful about returning objects from functions if those objects contain destructor
	functions because the returned object goes out of scope as asoon as the value is returned to the calling
	routine. For example, if the object returned by the function has a destructor that frees dynamically
	allocated memory, that memory will be freed even thogh the object that is assigned the return value is
	still using it. For example, consider this incorrect version of the preceding program:
*/

#include <iostream>
#include <cstring>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE macros and exit() function
using namespace std;

class samp{
	char *s;
public:
	samp(){ s = NULL; }
	~samp(){ if(s) free(s); cout << "Freeing 's'\n"; }
	void show(){cout << s << "\n";}
	void set(char* str);
};

// Load a string.
void samp::set(char *str){
		s = (char *) malloc(strlen(str)+1);
		if(!s){
			cout << "Allocation error\n";
			exit(EXIT_FAILURE);
		}
		strcpy(s, str);
}

samp input(){
	char s[80];
	samp str;

	cout << "Enter a string: ";
	cin >> s;

	str.set(s);

	return str;
}

int main(){
	samp ob;

	// assign returned object to ob
	ob = input(); // This causes an error!!!
	ob.show();

	return EXIT_SUCCESS;
}

/*
	The (expected) output from this program is shown here:
 "Enter a string: Hello
	Freeing s
	Freeing s
	Hello
	Freeing s
	Null pointer assignment"

N.B!	But, what we actually get running the applicatioen (compiled with GCC 8.1.0 x64 on Windows) in CMD is shown here:
 "Enter a string: Hello
	Freeing 's'
	Ас
	"

	Notice that 'samp's  destructor function is called three times. First, it is called when the local object 'str' goes
	out out of scope when 'input()' returns. The second time '~samp()' is called is when the temporary object returned by
	'input()' is destroyed. Remember, when an object is returned from a function, an invisible (to you) temporary object is
	automatically created generated which holds the return value. In this case, this object is simply a copy of 'str', which
	is the return value of the function. Therefore, destructor is executed. Finally, the destructor for object 'ob', inside
	'main()', is called when the program terminates.

	The trouble is that in this situation, the first time the destructor executes, the memory allocated to hold the string
	input by 'input()' is freed. Thus, not only do the other two calls to 'samp's destructor try to free an already released
	piece of dynamic memory, but they destroy the dynamic allocation system in the process, as evidenced by the run-time message
	"Null pointer assignment" (Depending upon your compiler, the memory model used for compilation, and the like, you may or may
	notsee this message if you try this program.)

	The key point to be understood from this example is that when object is returned from a function, the temporary object used
	to effect the return wil have its destructor funciton called. Thus, you should avoid returning objects in which this situation
	is harmful. (As you will learn Chapter 5, it is possible to use a copy constructor to manage this situation.)
*/
