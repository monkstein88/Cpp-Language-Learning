
/*
	Example 2.:  You must be careful when returning a reference that the object you refer to does not go out out
	of scope. For example, consider this slight reworking of function 'f()':
*/

// Return  an int reference.
int &f(){
	int x; // x is now a local variable
	return x; // returns a reference to x
}

/*
	In this case 'x' is now local to 'f()' and will go out of scope when 'f()' returns. This effectively means
	that the reference returned by 'f()' is useless.

	NOTE: Some C++ compilers will not allow you to return a reference to a local variable. However, this type of
	problem can manifest itself in other ways, such as when objects are allocated dynamically.

*/
