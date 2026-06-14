
/*
	Exercise 4.: What is an inserter? What is an extractor?
*/

/*
	My answer:
		- An inserter, is type of function, that is friend function linked to a user-defined class, which purpose is to overload
		the behaviour of the output operation (output stream), when output stream operation ('<<') is applied to that
		class. In short, the inserter function is meant to 'take over' when outputting of class take place, and it inserts its own
		(custom) output type stream to the original stream that we call it within.
		- An extractor, works similar fashion for the oposite type of scenario - input. It is also a friend function linked to a
		user-defined class, but this time its purpose is to overload the behaviour of the input operation (input stream), when
		stream operation ('>>') is applied to that class. The peculiar thing is that an extractor , takes (removes/extracts) the
		input data from the input stream, that is calling/refering to class, so that it is consumed by the class. 


	Official answer:
		- An inserter is an overloaded operator<<() function that outputs a class’s data to an
		output stream. An extractor is an overloaded operator>>() function that inputs a
		class’s data from an input stream.
*/
