
/*
	Exercise 3.: On your own, think about why there may be cases in which a call to 'flush()' is appropriate.
*/


/*
	My answer:
		-	Using 'flush()' is supposed to force the buffered data, that has not	been written/displayed (to some output stream -
		which could be display, or file (disk)). So force is to be either read or written (effectively 'unclogging' it) from the
		buffer. It makes sense to use it in applications which needs to use/function upon momentary response, a single keyboard
		stroke (for input stream example) , or need to display/write information to some device/file at the immediate moment some
		event occurs.
		Waiting till a buffer gets filled, so for the data to be processed is not always an appropriate or applicable case.

	Official answer:
		- Calls to 'flush()' might be warranted when a program is going to be used in adverse environments (in situations where power
		outages occur frequently, for example).

*/
