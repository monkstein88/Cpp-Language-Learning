
/*
	Exercise 4.: What is wrong with the following prototype, which uses a default argument?

	int f(int count, int max = count);

	My answers:
		The error is that, the argument playing the role a default value 'count' for the parameter 'max' that will have a default
		value, cannot be local variable. So 'count' has to  be either a constant or a global variable type.

	Official answer:
		A default argument cannot be another parameter or a local variable.

*/
