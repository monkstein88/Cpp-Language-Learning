
/*
	Intro 1.: Although Chapter 4 discussed C++ pointers at some length, one special aspect was deferred until now because it
	relates specifically to virtual functions. The feature is this: A pointer declared as a pointer to a base class can also be
	used to point to any class derived from that base. For example, assume two classes called 'base' and 'derived', where 'derived'
	inherits 'base'. Given this situation, the following statements are correct:
*/
	base *p; // base class pointer

	base base_ob; // object of type 'base'
	derived derived_ob; // object of type 'derived'

	// 'p' can, of course, point to the base objects
	p = &base_ob; // 'p' points to base object

	// 'p' can also point to derived objects without error
	p = &derived_ob; // 'p' points to derived object
/*
	As the comments suggest, a base pointer can point to an object of any class derived from that base without generating a type
	mismatch error.

	Although you can use a base pointer to point to a derived object, you can access only those members of the derived object that
	were inherited from the base. This is because the base pointer has knowledge only of the base class. It knows nothing about
	the members added by the derived class.

	While it is permissible for a base pointer to point to a derived object, the reverse is not true. A pointer of the derived
	type cannot be used to access an object of the base class. (A type cast can be used to overcome this restriction, but its use
	is not  recommended practices.)

	One final point: Remember that pointer arithmetic is relative to the data type the pointer is declared as pointing to. Thus,
	if you point a base pointer to a derived object and then increment that pointer, it will not be pointing to the next derived
	object. It will be pointing to (what thinks is) the next base object. Be careful about this.
*/
