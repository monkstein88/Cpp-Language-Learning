
/*
	Exercise 2.: When a base class is inherited as public by the derived class, what happens to its public members? What happens to
	its private members? If the base is inherited as private by the derived class, what happens to its public and private members ?
*/

/*
	My answer:
		- When a base class is inherited as public by a derived class, its public members remain public in the derived class. Also,
		the	private members of the base class, remain accessible only to the base class, and the derived class has no access to those
		members all - this will not change no matter how the base class was inherited. If a base class is inherited as private by a
		derived class, its (base's) public members will become private in the derived class, and again, its (base's) private members
		will remain private and accessible only (within) to the base class.

	Official answer:
		-  When a base class is inherited as public, the public members of the base become public
		members of the derived class, and the base’s private members remain private to the base.
		If the base is inherited as private, all members of the base become private members of the
		derived class
*/
