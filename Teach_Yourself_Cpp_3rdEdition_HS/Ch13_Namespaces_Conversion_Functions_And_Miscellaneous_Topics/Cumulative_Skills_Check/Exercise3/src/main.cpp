/*
	Exercise 3.: Tough question: Since the original C++ library was contained in the global namespace and all old C++ programs have
	already dealt with this fact, what is the advantage to moving the library into the 'std' namespace "after the fact," so to speak?

*/

/*
	My answer:
		- So that, there would not be name collision when newer expansions of the library are added and also it is easier to distinguish
		which version of the library is in use or is to be used.

	Official answer:
		-  New libraries can be contained within their own namespaces, thus preventing name conflicts with other code. This benefit applies
		even to old code that is being updated with new libraries.
*/
