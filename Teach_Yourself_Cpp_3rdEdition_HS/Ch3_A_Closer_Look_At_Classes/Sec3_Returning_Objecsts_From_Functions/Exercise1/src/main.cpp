
/*
	Exercise 1.: To illustrate exactly when an object is constructed an destructed when returned from a
	function, create a class called 'who'. Have 'who's constructor take one character argument that will
	be ised tp odemtofu am pbkect/ Have the constructor display a message similar to this when constructing
	an object:
	"Constructing who #x"
	where 'x' is the identifying character associated with each object. When an object is destroyed, have a
	message similar to this displayed:
	"Destroying who #x"
	where, again  'x' is the identifying character. Finally, create a function called 'make_who()' that returns
	a 'who' object. Give each object a unique name. Note the output displayed by the program.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE macros and exit() function
using namespace std;

class who{
	char id;
public:
	who(char ch){ id = ch; cout << "Constructing who #" << id << "\n";}
	~who(){ cout << "Destroying who #" << id << "\n";}
};

who make_who(){
	who ob('b');

	return ob;
}

int main(){
	who oa('a');

  make_who(); // Call the function and observe constructor and destructor actions when they happen

	return EXIT_SUCCESS;
}

/*
	The actual output of the program when running it is:
	"Constructing who #a
 	 Constructing who #b
   Destroying who #b
 	 Destroying who #a"

	 N.B! THE EXPECTED CALLING/OCCURING OF THE DESTRUCTOR OF THE OBJECT IN 'make_who()' function as it
	 finishes in 'main()' to get executed twice - is NOT  happening with (GCC 8.1.0 x64 on Windows 10 x64 Pro)
*/
