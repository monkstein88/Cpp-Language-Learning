
/*
	Exercise 4.: When one class inherits another, when are the classes' constructros called? When are their destructors called?
*/

/*
	My answer:
		- The classes' constructors are called in the order of inheritance hierarchy, starting from the most base class (at the
		bottom) towards and ending with the last derived class (at the top). So the base's constructor is called first, and then the
		derived's class constuctor - when a derived object is declared (instantiated). The destructors are called in the reverse
		order of the inheritance hierarchy - starting from the last derived class and going towards the root base class (at the
		bottom). So the derived's class destuctor is called first, and then the one of the base's class.

	Official answer:
		- Constructors are called in order of derivation. Destructors are called in reverse order.
*/
