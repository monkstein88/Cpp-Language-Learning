
/*
	Ex 4.: By default, objects are passed to functions by value, which means that what occurs to
	the copy inside the function is not supposed to affect the argument used in the call. Can
	there be a violation of this principle? If so, give an example.

	- Also if pointer variables and dynamically allocated memory, are used for storing data and handling it
	 (in conjuction with the pointers) , in the objects. This is a possible source of trouble,
	 because the object copy generated when function is called, inside the function, is going to
	 have the actuall source address, and any manipulation/altering of those address is going to
	 reflect the state of the object that (implicitly)

	Official: The violation of the separation between an argument and its copy when passed to a
	parameter can be caused by several destructor, that memory will also be lost to the argument.
	In general, if the destructor function destroys anything that the original argument requires,
	damage to the argument will occur.
*/
