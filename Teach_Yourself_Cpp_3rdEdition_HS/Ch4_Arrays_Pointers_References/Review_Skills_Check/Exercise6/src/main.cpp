
/*
	Exercise 6.: In the preceding question, the function 'set_sum()' was not defined in line within the 'summmation'
	class declaration. Give a reason why this might be necessary for some compilers.

	My answer: Because there is a loop statement inside the function, and functions which contain loops are not
	optimized to be inline.

	Official answer: For some compilers, in-line functions cannot contain loops.
*/
