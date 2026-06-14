/*
	Exercise 1.: Explain the deifference between the behaviour of 'new' and 'new(nothrow)' when an allocation failure occurs.
*/


/*
	My answer:
		- When 'new' is used, the behaviour of the statement if it fails is that the program is going to throw an exception, thus there would
		have to be a corresponding 'try' and 'catch' statement for this case. On the other hand if 'new(nothrow)' statement is used and if it
		fails, no exception will be thrown, but rather only a null pointer will be returned and the program will proceed as normal.

	Official answer:
		-  By default, new throws an exception when an allocation error occurs. The nothrow version of new returns a null pointer if memory
		cannot be allocated.
*/
