
/*
	Exercise 3.: How does a virtual function help achieve run-time polymorhism? Be specific.
*/


/*
	My answer:

		- Run-time polymorhism can be achived by declaring a pointer of the base type class, assign the address of whatever derived
		class that you want to handle (depending on the situation), then call the different methods of the different classes
		derived from that base, using the pointer for the function call. In that situation depending on the address assigned to the
		pointer, the 'correct' method is going to be picked up depending on the situation.

	Official answer:

		-  A virtual function supports run-time polymorphism through the use of base class pointers. When a base class pointer
		points to an object of a derived class containing a virtual function, the specific function called is determined by the
		type of object being pointed to.

*/
