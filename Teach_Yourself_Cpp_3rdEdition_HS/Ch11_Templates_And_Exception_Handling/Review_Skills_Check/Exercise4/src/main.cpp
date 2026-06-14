
/*
	Exercise 4.: If, in a class hierarchy, a derived class neglects to override a (non-pure) virtual function, what happens when an object of
  that derived class calls that function?
*/

/*

	My answer:
		- it is going to call the associated (virtual) function from the class, that it has inherited it from. That will most probably be, the
    base's class virtual function.

	Official answer:
	 	- If a derived class does not override a non-pure virtual function, the derived class will use the base class’s version of the virtual
    function.

*/
