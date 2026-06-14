
/*
	Exercise 5.: What type of operations will cause the copy constructor to be invoked?

  My answer:
		- Initialization of an object while it is being declared at the same time (in the same state) operations, will cause the copy
		constructor to be invoked.
	  - Passing a an object (containing a copy constructor) to function as a parameter value. Calling the function, which takes
		an (entire) object as an argument.
		- (N.B! This is not true with modern compilers - like MinGW-w64 GCC 8.1.0) When a function returns an object, when it
		finishes

		Assignments operations (by itself) will not invoke provoke an copy constructor.

  Official answer:
		A copy constructor is called when an initialization takes place-specifically, when one object
		is explicitly used to initialize another, when an object is passed as a parameter to a
		function, and when a temporary object is created when an object is returned by a function.
*/
