
/*
	Intro 1.: As mentioned at the start of this chapter, it is possible to overload an operator relative to class by using a friend
	As you know, a friend function does not have a 'this' pointer. In the case of a binary operator, this means that a friend operator
	function is passed both operands explicitly. For unary operators, the single operand is passed. All other things being equal,
	there is no reason to use a friend rather than a member operator function, with one important exception, which is discussed in
	the examples.

	Remember: You cannot use a friend to overload the assignment operator. The assignment operator can be overloaded only by a
	member function.
*/
