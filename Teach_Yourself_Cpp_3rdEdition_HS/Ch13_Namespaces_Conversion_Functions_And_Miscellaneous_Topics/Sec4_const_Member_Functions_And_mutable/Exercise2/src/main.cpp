
/*
	Exercise 2.: Can a 'const' member function call a non-const function? Why not?

*/


/*

	My answer:
		- A 'const' defined member function cannot call 'non'-const object/function of the object they belong. The reason is because a 'const'
		specified member function is not allowed change/alter any objects/items of its class, unless they are declared as 'mutable' or 'const'
		themselves. It cannot modify the object that invokes it.

	Official answer:
		- No. If it were possible for a 'const' member function to call a non-'const' member function, the non-'const' function could be used
		to modify the invoking object.
*/
