
/*
	Exercise 3.: Explain why 'const_cast' should normally be reserved for special cases.

*/

/*
	My answer:
		- It is to be reserved, because utilizing this type of casting, we remove 'const' attribute of a given object, which implies that the
    object itself upon which we "apply" it, is supposed to be a constant and should not be changed/altered. But by doing this cast, we try
    to override this behaviour, and this has a potential to cause troubles.

	Official answer:
	 - Since 'const_cast' overrides the const specifier, it allows unexpected modifications to objects.

*/
