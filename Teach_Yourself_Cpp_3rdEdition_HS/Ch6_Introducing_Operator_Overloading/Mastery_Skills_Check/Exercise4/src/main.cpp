
/*
	Exercise 4.: How do friend operator functions differ from member operator functions?

	My answer:
		- friend operator functions cannot overload the assignment '=' and subscript '[]' operators. Those can be only overloaded by
		a member type function.
		- a member operator function, is passed the 'this' pointer, when it gets invoked. The 'this' pointer holds the address of the
		object that called (left-side operand) the overloaded operator (that is on the left side of the operator).
		- a friend operator function can overload an operator, that that is called with a built-in type of operand, on the left side
		of the operator it is supposed to overload - i.e. 'int + obj'. A member function cannot resolve this case.

	Official answer:
	 	 - A binary member operator function is passed the left operand implicitly via this pointer. A binary friend operator function
		 is passed both operands explicitly. Unary member operator functions have no explicit parameters. A friend unary operator
		 function has one parameter.

*/
