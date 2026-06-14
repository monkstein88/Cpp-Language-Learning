
/*
	Exercise 3.: What are the two ways that 'new' might indicate an allocation failure ?
		My answers:
		 - upon fail, the call to 'new' will return a null pointer
		 - upon fail, the call will generate/throw an exception.

	 Official answers:
	   On failure, new will either return a null pointer or generate an exception. You must check
		 your compiler’s documentation to determine which approach is used. In Standard C++,
		 new generates an exception by default.
*/
