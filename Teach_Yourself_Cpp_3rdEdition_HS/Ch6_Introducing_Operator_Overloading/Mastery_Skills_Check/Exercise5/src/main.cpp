
/*
	Exercise 5.: Explain why you might need to overload the assignment operator.

	My answer:
		- You might need to overload the asignment operator when a simple binary (direct) copy of one object to the other is not really
		the desired way to get a value, and also when this might provoke undesired effects - i.e. when working with objects that
		contain dynamically allocated arrays with adjacent pointers to those. So in this case you will want to specify how to exactly
		one object is assigned to the other.

	Official answer:
		- You will need to overload the = operator when the default bitwise copy is insufficient. For example, you might have a
		situation in which you want only parts of the data in one object to be assigned to another object.

*/
