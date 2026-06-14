
/*
	Exercise 1.: Explain the rationale for 'const_cast', 'reinterpret_cast' and 'static_cast'.
*/

/*
	My answer:
		- For 'const_cast', the idea is to convert/cast one type of variable which has an 'const' or 'volatile' attribute to it, into the same
		general type , but with the 'const'-ness and/or 'volatile'-ness feature stripped from it. In short, it is mostly used to remove
		'const'-ness.

		- For 'reinterpret_cast' , it is used when we need to convert/cast two fundamentally different types of pointers - one towards the other,
		or when we need to cast a pointer to other type variable, for example. The idea being that the objects being cast against, are
		fundamentally different.

		- For 'static_cast' , it basically does the same stuff a normal C-style casting would do, but when using this operator, we make this
		cast more explictly (it is more directly visible in the code).

	Official answer:

	 - The new casting operators provide safer, more explicit ways to perform casts.

*/
