/*
	Exercise 1.: Since a constructor that requires only one argument provides an automatic conversion of the type of that argument to its
	class type, is there a situation in which this feature eliminates the need to create an overloaded assignment operator?

*/

/*
	My answer:
		- Yes, there is a situation where this feature eliminates the need to create an overloading assignment operator, it is when we declare
		and define (assign) the value of the object, in a single statement. Where the value is of the same type as that defined for the
		costructor's parameter. Like for example:

		obj_class_name ob = val;

		And also when we further want to directly modify or assign a new values (of the same type as the constructor's parameter) to the
		object, like for example:

		ob = val;

	Official answer:
		-  Yes. In cases in which the implicit conversion performs the same action that would be performed by an overloaded assignment
		operator for the type of the constructor’s parameter, there is no need to overload the assignment operator.
*/
