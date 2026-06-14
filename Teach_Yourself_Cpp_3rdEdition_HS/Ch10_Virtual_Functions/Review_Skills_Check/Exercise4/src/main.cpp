
/*
	Exercise 4.: Show the statement that sets the put pointer to the 234th byte in a file linked to a stream called out.
*/
	out.seekp(234);
// or
	out.seekp(234, ios::beg);
