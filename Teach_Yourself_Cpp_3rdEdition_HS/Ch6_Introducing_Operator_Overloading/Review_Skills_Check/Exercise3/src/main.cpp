
/*
Exercise 3.: What is wrong with these two overloaded functions?
*/

void f(int a);
void f(int& a);

/*
	My answer:
		- The two overloaded functions are inherently ambiguous, because the syntax of calling both of them is exactly the same.
		The syntax of calling a function that takes a reference, is identical to the syntax of calling a function that takes a
		value (passed-by-value) parameter.

	Official answer:
		- A function cannot be overloaded when the only difference is that one version takes a value parameter and the other takes
		a reference parameter. (The compiler cannot tell them apart.)
*/
