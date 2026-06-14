
/*
	Exercise 9.: Explain the main reason for overloading the '[]' operator.

	My answer:
		- It makes sense to overload the '[]' operator when the object it is being tied to, its main type of data (what it holds)
		is of an array type. And we want an easy we to get access to certain array element in that object , for both reading or writing
		to it - make it so that it can be used both as an lvalue or rvalue.
		- Also it is useful, for using safe self-checking array - when accessing a certain element you can check wheter the index of
		the element you desire is valid.

	Official answer:
		- The '[]' is usually overloaded to allow an array encapsulated within a class to be indexed with the normal array indexing
		syntax.

*/
