
/*
	Exercise 10.: What is wrong with the following fragment?
*/

	void compute(double *num, int divisor = 1);
	void compute(double *num);
	// ...
	compute(&x);

/*
	My answer:
		- There is inherent ambiguity with the both function declarations overloading each other - the compiler will get confused
		during compilation not know which 'compute()' function to call because both functions 'overlap'/'cover' the case that the
		function call later on performs.

	Official answer:
		-  It is ambiguous because the compiler cannot know which version of compute() to call. Is it the first version, with
		divisor defaulting? Or is it the second version, which takes only one parameter?
*/
