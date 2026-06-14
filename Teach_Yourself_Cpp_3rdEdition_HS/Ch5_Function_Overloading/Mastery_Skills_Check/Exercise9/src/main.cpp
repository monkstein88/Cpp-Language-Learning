
/*
	Exercise 9.: What is wrong with the following prototype?
*/
	char *wordwrap(char *str, int size = 0, char ch);
/*
	My answer:
		- The default parameter statement ('int size = 0') is not on the rightmost side of the parameter list. Or this could be
		interpeted also that the 'char ch' parameter does not have a default value.

	Official answer:
		- All parameters receiving default arguments must appear to the right of those that do not.
*/
