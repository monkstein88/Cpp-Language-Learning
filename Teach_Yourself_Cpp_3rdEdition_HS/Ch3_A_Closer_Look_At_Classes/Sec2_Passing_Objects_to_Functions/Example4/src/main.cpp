
/*
	Example 4.: When a copy of an object is made when being passed to a function, it means that a
	new object comes into existence. Also, when the function that the object was passed to terminates,
	the copy of the argument is destroyed. This raises two questions. First, is the object's constructor
	called when the copy is made? Second, is the object's destructor called when the copy is destroyed?
	The answer may, at first, seem surprising.

	When a copy of an object is made to be used in a function call, the constructor function is not called.
	The reason for this is simple to understand if you think about it. Since a constructor function is
	generally used to initialize some aspect of an object, it must not be called when making a copy of an
	already existing object passed to a function. Doing so would alter the contents of the object. When
	passing an object to a function, you want the current stat of the object, not its initial state.

	However, when the function terminates and the copy is destroyed, the destructor function is called.
	This is because the object might perform some operation that must be undone when it goes out of scope.
	For example, the copy may allocate memory that must be released.

	To summarize, when a copy of an object is created because it is used as an argument to a function,
	the constructor function is not called. However, when the copy is destroyed (usually by going out
	when the function return), the destructor function is called.

	The following program illustrates the preceding discussion:
*/

/*
	Now that the address of an object is passed to sqr_it(), the function can modify the value of the argument
	whose address is used in the call.
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

class samp{
	int i;
public:
	samp(int n){
		i = n;
		cout << "Constructing\n";
	}
	~samp() {cout << "Destructing\n"; }
	int get_i() { return i; }
};

// Return square of o.i.
int sqr_it(samp o){

	return (o.get_i() * o.get_i());
}

int main(){
	samp a(10);

	cout << sqr_it(a) << "\n";

	return EXIT_SUCCESS;
}

/*
	This function displays the following: (N.B! THIS IS NOT WHAT OCCURS WHEN TESTED!)
	"Constructing
	 Destructing
	 100
	 Destructing"

	 What actually gets printed on the console when running the program is:
	 "Constructing
	 100
 	 Destructing
 	 Destructing"
*/

/*
	Anyway, two calls to the destructor are made. One is for the copy created when 'a' is passed
	'sqr_it()'. The other is for 'a' itself.

	The fact that the destructor for the object that is the copy of the argument is executed after the function terminates
	can be a source of problems. For example, if the object used as the argument allocates dynamic memory and frees that
	memory when destroyed, its copy will free the same memory when its desructor is called. This will leave the original
	object damaged and effectivelt uselels. It is important to guard agains this type of error and to make sure that
	the destructor function of the copy of an object used in an argument does not cayse side effects that alter the original
	argument.

	One way around this is to use pointers to objects (pass the address of the object as an argument to the function). When
	an address (or pointer) is passed  no new object is created, thus no destructor is called when the function returns.
	However, an even better solution exists - ref. to "copy-constructor". A copy-constructor lets you define precisely
	how copies of objects are made. (Copy constructors are discussed in Chapter 5.)
*/
