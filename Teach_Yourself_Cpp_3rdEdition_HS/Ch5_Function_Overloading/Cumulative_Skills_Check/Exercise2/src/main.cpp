
/*
	Exercise 2.: Why are the following two overloaded functions inherently ambiguous?
*/

int f(int a);
int f(int& a);

/*
	My answer:
		- They are inherently ambiguous, because they are both preset to accept the exact same type (passing statement) as an argument when the
		function is called. They are both predisposed to be used with the same type of an argument.
			int x=10;
			f(x);

	Official answer:
		- The syntax for calling a function that takes a reference parameter is identical to the syntax
		for calling a function that takes a value parameter.
*/
