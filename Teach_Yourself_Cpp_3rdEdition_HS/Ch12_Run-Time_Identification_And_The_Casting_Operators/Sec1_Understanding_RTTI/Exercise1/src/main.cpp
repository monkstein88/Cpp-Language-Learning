
/*
	Exercise 1.: Why is RTTI a necessary feature of C++?
*/


/*
	My answer:
		- It is necessary and useful, because of the inherent polymorphic nature of the C++ language, which means, that in some applications,
	 	where polymorphism feature is used (such as in class hierarchies, virtual functions, inheritances, base class pointers) it is possible,
	 	to have a sections of code that can take different turns so speak, and a certain function call or pointer assignemnt can happen
	 	differently, than the last time (when the program proceeded through that section). Which on its own end might cause different types of
	 	objects to be invoked/instantiated. And this uncertainty, might bring the need to have a run-time capability to determine what type of
	 	data is being passed/send around. It is not always possible to know at compile time.

	Official answer:
		- RTTI is necessary to C++ because it is not always possible to know at compile time what type of object is being pointed to by a
		base class pointer of referenced by a base class reference.

*/
