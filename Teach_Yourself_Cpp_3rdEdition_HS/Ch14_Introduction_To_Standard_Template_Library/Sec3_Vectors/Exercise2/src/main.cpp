
/*
	Exercise 2.: In Example 4, both a default (i.e., parameterless) and a parameterized constructor were defined for 'Demo'.Can you explain
	why it is important?
*/



/*
	My answer:
		- First, to cover both cases where a object of type 'Demo' needs to be declared with initialization/definition, or, just declared
		without further defining/initializing it to some value.
		- Second, because if you want to be able to make arrays out of some programmer defined object/class types, where you would also like
		to assign values to the separate elements of that object array, as you declare it (at the same statement) - you would need to have
		this object have a parameterized & parameterless(default) constructor. 

	Official answer:
		- Any object stored in a vector must provide a default constructor.
*/
