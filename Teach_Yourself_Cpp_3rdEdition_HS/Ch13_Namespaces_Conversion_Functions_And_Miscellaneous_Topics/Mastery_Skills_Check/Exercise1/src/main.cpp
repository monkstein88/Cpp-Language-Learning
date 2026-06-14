/*
	Exercise 1.: What makes a 'static' member variable different from other member variables?
*/

/*
	My answer:
		- a 'static' member variable is shared variable, which is the same single entity shared amongst objects that have been instantiated
		of the same or derived classes for that type. It is a mechanism that allows all generated object of a class type or derived from it,
		to have a single shared resource amongst themselves. So, a 'static variable is not individual to the class object for each particular
		instance of that class.
		Also, 'static' members of a class, can only access other 'static' members of the same class.

	Official answer:

	 -  Unlike a normal member variable, for which each object has its own copy, only one copy of a 'static' member variable exists, and it
	 is shared by all objects of that class.

*/
