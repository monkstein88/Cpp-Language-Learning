
/*
	Exercise 3.: Explain why using a default argument is related to function overloading.
*/

/*
	My answer:
		- It is in a way an function overloading, because it covers/creates an alternative function behaviour by assigning a
		predetermined value, for those paramaters that have been assigned default ones, and are not explictly passed values
		when the function is called.

	Official answer:
		- A default argument is essentially a shorthand approach to function overloading because the net result is the same.

		For example,

		int f(int a, int b = 0);

		is functionally equivalent to these two overloaded functions:

		int f(int a);
		int f(int a, int b);
*/
