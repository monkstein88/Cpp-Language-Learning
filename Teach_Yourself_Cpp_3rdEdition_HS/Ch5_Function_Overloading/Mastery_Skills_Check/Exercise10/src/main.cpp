
/*
	Exercise 10.: Explain some ways that ambiguity can be introduced when you're overloading functions.
*/

/*
	My answer:
		- Ambguity can occurr when the compiler cannot figure out which f trying to overload functions that have default parameters

		- With there are two similar functions, where one accept reference to the variables and the other just takes the variables
		passed by value - the compiler cannot distinguish which one you're trying to call
		- with type conversions for the same number and order of arguments which type only differs amongst the overloaded functions.

	Official answer:
		- Ambiguity can be introduced by default type conversions, reference parameters, and default arguments.
*/
