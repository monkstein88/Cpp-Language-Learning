/*
	Exercise 2.: How do virtual functions differ from overloaded functions?
*/


/*
	My answer:

		- A virtual function is supposed to override (take over the place) the behaviour of a function declared in a base class. But in order
			for that to work, the overriding method has follow and have the exact same 'image' - type, number, set of parameters and exact return
			type and name of the function it is about to 'replace'. But most
			here is that. But the version of the function that gets called, is referenced/determined based on the class (class object pointer)
			that function is called/invoked from. It does not depend on the dependend on the type of parameters being passed to that function.

		- With overloaded functions, the specific method that is called is dependant/determined based on what type, order, number of parameters
			that method is invoked with. Not based on the class that is called from.

	Official answer:

		- Virtual functions differ from overloaded functions in that overloaded functions must differ
		  from the number of parameters or the type of parameters. An overridden virtual function
			must have exactly the same prototype (that is, the same return type and the same type
      and number of parameters) as the original function.

*/
