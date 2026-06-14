
/*
	Intro 1.: The C++ I/O system maintains status information about the outcome of each I/O operation. The current status of an
	I/O stream is described in an object of type 'iostate', which is an enumaration defined by 'ios' that includes these members:

	----------------------------------------------------
	||  Name     |   Meaning                          ||
	----------------------------------------------------
	||  goodbit  | No errors occurred.                ||
	||  eofbit   | End-of-file has been encountered.  ||
	||  failbit  | A nonfatal I/O error has occurred. ||
	||  badbit   | A fatal I/O error has occurred.    ||
	----------------------------------------------------

	For older compilers, the I/O status flags are held in an 'int' rather than an object of type 'iostate'. There are two ways in
	which you can obtain I/O status information. First, you can call the 'rdstate()' function, which is a member of 'ios'. It has
	this prototype:
*/
	iostate rdstate();
/*
	It returns the current status of the error flags. As you can probably guess from looking at the preceding list of flags,
	'rdstate()' returns 'goodbit' when no error has occurred. Otherwise, an error flag is returned.

	The other way you can determine whether an error has occurred is by using one or more of these 'ios' member functions:
*/
	bool bad();
	bool eof();
	bool fail();
	bool good();
/*
	The 'eof()' function was discussed earlier. The 'bad()' function returns true if 'badbit' is set. The 'fail()' function
	returns true if 'failbit' is set. The 'good()' function returns true if there are errors. Otherwise they return false.

	Once an error has occured, it might need to be cleared before your program continues. To do this, use the 'ios' member
	function 'clear()' whose prototype is shown here:
*/
	void clear(iostate flags=ios::goodbit);
/*
	If 'flags' is 'goodbit' (as it is by default), all error flags are cleared. Otherwise, set 'flags' to the settings you desire.
*/
