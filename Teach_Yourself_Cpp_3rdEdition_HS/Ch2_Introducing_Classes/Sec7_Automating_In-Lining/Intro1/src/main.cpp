
/*
	Intro 1.: If a member function's definition is short enough, the difinition can be included inside the
	class declaration. Doing so causes the function to automatically become an in-line function, if possible.
	When a function is defined within a class declaration, the 'inline' keyword is no longer necessary. 
	(However, it is not an error to use it in this situation.) For example, the 'divisible()' function from
	the preceding section can be automatically in-lined as shown here:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class samp{
	int i, j;
public:	
	samp(int a, int b);
	/*
		divisible() is defined here and automatically in-lined.
	*/
	int divisible() { return !(i%j);}
};

samp::samp(int a, int b){
	i = a;
	j = b;
}

int main(){
	samp ob1(10, 2), ob2(10, 3);
	
	// this is true
	if(ob1.divisible())
		cout << "10 divisible by 2\n";
	
	// this is false
	if(ob2.divisible())
		cout << "10 divisible by 3\n";
	
	return EXIT_SUCCESS;
}

/*
	As you can see, the code associated with 'divisible()' occurs inside the declaration for the class 'samp'.
	Further notice that no other definition of 'divisible()' is need-or permitted. Defining 'divisible()' inside
	'samp' causes it to be made into an in-line function automatically. When a function defined inside a class 
	decalaration cannot be made into an in-line function (because a restriction has been violated), it is automatically
	made into a regular function.
	
	Notice how 'divisible()' is defined within 'samp', paying particular attention to the body. It occurs all one line.
	This format is very common in C++ programs when a function is declared within a class declaration. It allows the
	declaration to be more compact. However, the 'samp' class could have been written like this:
	
	class samp{
		int i, j;
	public:
		samp(int a, int b);
		// divisible() is defined here and automatically in-lined.
		int divisible(){
			return !(i%j);
		}	
	};
	
	
	In this version, the layout of 'divisible()' uses the more-or-less standard indentation style. From compilers' point of 
	view , there is no difference between the compact style and the single line one. The same restrictions apply to both styles.
	The same restrictions that apply to "normal" in-line functions apply to automatic in-line functions within a class 
	declarations.
*/