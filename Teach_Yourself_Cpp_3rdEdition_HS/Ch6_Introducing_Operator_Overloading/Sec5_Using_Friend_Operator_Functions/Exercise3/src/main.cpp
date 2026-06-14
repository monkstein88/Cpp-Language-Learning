
/*
	Exercise 3.: Explain why the solution to Exercise 2 requires the use of a friend operator funcitons.
*/

/*
	My answer:
		The solution required the use of friend function for operator overloading, because it is the only method that allows to resolve
		the situation where we want to overload an operator with having a built-in type (operand) on the left side of the operator
		being utilized - ' int * ob ' case specific. A member function doing the overloading cannot solve this case, because it will
		not be called , as the object on the left side of the operand, must be the class for which the item that calls the overloading function.

	Official answer:
		By using friend functions, you make it possible to have a built-in type as the left operand.
		When member functions are used, the left operand must be an object of the class for which the operator is defined.
*/
