
/*
	Intro 1.: It is possible to pass arguments to a constructor function. To allow
	this, simply add the appropriate parameters to the constructor function's
	declaration and definition. Then, when you declare an object, specify the
	arguments. To see how this is accomplished, let's begin with the short example
	shown here:
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class myclass{
	int a;
public:
	myclass(int x); // constructor function - declaration
	void show();
};

myclass::myclass(int x){ // constructor function - definition
	cout << "In constructor\n";
	a = x;
}

void myclass::show(){
	cout << a << "\n";
}

int main(){
	myclass ob(4); // Declaring an object, with specifying an argument

	ob.show();

	return EXIT_SUCCESS;
}

/*
	Here the constructor for myclass takes one parameter. The value passed to
	'myclass()' is used to initilize 'a'. Pay special attention to how 'ob' is
	declared in 'main()'. The value 4, specified in the parentheses following 'ob',
	is the argument that is passed to 'myclass()'s paramete 'x'

	Actually, the syntax for passing an argument to a parameterized constructor is
	shorthand for this longer form:
	myclass ob = myclass(4);

	Technically, there is a difference between the two forms:
	"myclass ob = myclass(4);"
	and
	"myclass ob(4);"
	that relates to copy constructors, which is discussed later

	NOTE: Unlike constructor functions, destructor functions cannot have parameters
	- there is no mechanism by which to pass arguments to an object that is being
	destroyed.


*/
