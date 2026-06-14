
/*
	Exercise 2.: What is wrong with the following function prototype?
*/

char* f(char* p, int x = 0, char* q);


/*
	My answer:
		The wrong part is that the function parameter taking a default value, is not placed on right-side of the parameters list.
		The parameters, that have default values assigned to them , have to be placed to the rightmost side of the list.

	Official answer:
		All parameters taking default arguments must appear to the right of those that do not. That is, once you begin giving
		parameters defaults, all subsequent parameters must also have defaults. In the question, 'q' is not given a default.
*/
