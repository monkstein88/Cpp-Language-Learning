
/*
	Exercise 2.: Explain why a virtual base class might be necessary.

	My answer:
		- a virtual base class is necessary when a derived class is about to inherit other derived classes that themselves feature
		(inherit) the same base class on their own. Thus It is a keyword that is placed in front of the access specifier, at the
		moment when a derived class is about inherit the base class, and feature it in its own structure.
		It imperative to avoid duplication and ambiguity in the inheretence, otherwise the program will not compile and give out
		errors when you try to compile it. You can't have class inheriting another class twice (including/having two copies of base
		class in itself)

	Official answer:
		-	A virtual base class is needed when a derived class inherits two (or more) classes, both of
			which are derived from the same base class. Without virtual base classes, two (or more)
			copies of the common base class would exist in the final derived class, However, if the
			original base is virtual, only one copy is present in the final derived class.
*/
