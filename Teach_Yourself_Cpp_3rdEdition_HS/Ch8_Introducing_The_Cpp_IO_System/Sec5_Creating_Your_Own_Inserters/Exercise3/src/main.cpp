
/*
	Exercise 3.: Explain why an inserter cannot be a member function.
*/


/*
	My answer:
		-	It cannot be a member function, because the call/invokation to the inserter (insertion operator function) is not done by
		the object of the certain class, that we have this operator ('<<') overloaded for. To be more specific the call is issued
		from the output stream operation itself. So, in order to overload the insertion operator ('<<') for a certain class, we've
		got to use a 'friend' function in that class that does that.

	Official answer:
		- An inserter cannot be a member function because the object that generates a call to the
		inserter is not an object of a user-defined class.
*/
