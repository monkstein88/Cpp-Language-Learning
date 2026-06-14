/*
	Intro 1.:
	In addition to console and file I/O, C++ supports a full set of functions that use character arrays as the input or output
	devices. Although C++'s array-based I/O parallels, in concept, the array-based I/O found in C (specifically, C's 'sscanf()' and
	'sprintf()' functions), C++'s array-based I/O is more flexible and useful because it allows user-defined types to be integrated into it.
	Although it is not possible to cover every aspect of array-based I/O here, the most important and commonly used features are examined.

	It is important to understand from the outset that array-base I/O still operates through streams. Everything you learned about C++ I/O
	in Chapter 8 and 9 is applicable to array-based I/O. In fact, you need to learn to use just a few new functions to take full advantage
	of array-based I/O. These functions link a stream to a region of memory. Once this is has been accomplished, all I/O takes place through
	the I/O functions you know already.

	Before you can use array-based I/O, you must be sure to include the header '<strstream>' in your file. In this header are defined the
	classes 'istrstream', 'ostrstream', and 'strstream'. These classes create array-based input, output, and input/output stream,
	respectively. These classes have as a base 'ios', so all the functions and manipulators included in 'istream', 'ostream', and 'iostream'
	are also available in 'istrstream', 'ostrstream' and 'strstream'.

	To use a character array for output, use this general form of the 'ostrstream' constructor:
*/
	ostrstream ostr(char *buf, streamsize size, openmode mode=ios::out);
/*
	Here 'ostr' will be the stream associated with the array 'buf'. The size of the array is specified by 'size'. Generally, 'mode' is
	simply defaulted to output, but you can use any output mode 'flag' defined by 'ios' if you like. (Refer to Chapter 9 for details.)

	Once an array has been opened for output, characters will be put into the array until it is full. The array will not be overrun. Any
	attempt to overfill the array will result in an I/O error.  To find out how many characters have been written to the array, use the
	'pcount()' member function, shown here:
*/
	streamsize pcount();
/*
	You must call this function in conjuction with a stream, and it will return the number of characters written to the array, including the
	null terminator.

	To open an array array for input, use this form of the 'istrstream' constructor:
*/
	istrstream istr(const char *buf);
/*
	Here 'buf' is a pointer to the array that will be used for input. The input stream will be called 'istr'. When input is being read from
	an array, 'eof()' will return true when the end of the array has been reached.

	To open an array for input/output operations an array for input/output operations, use this form of the 'strstream' constructor:
*/
	strstream iostr(char *buf, streamsize size, openmode mode=ios::in | ios::out);
/*
	Here 'iostr' will be an input output stream that uses the array pointed to by 'buf', which is 'size' characters long.

	The character-based streasm are also referred to as 'char *' streams in some C++ literature.

	It is important to remember that all I/O functions described earlier operate with array-based I/O, including the binary I/O functions
	and the random-access functions.

	Note: The character-based stream classes have been deprecated by Standard C++. This means that they are still valid, but future versions
	of the C++ language might not support them. They are included in this book because they are still widely used. However, for new code you
	will probably want to use ine of the containers described in Chapter 14.
*/

/*
	N.B! '<strstream>' is deprecated! Don't use it for actual programmming!

	NOTE: <strstream> is deprecated, use <sstream> instead
	The 'strstream' returned a 'char *'' that was very difficult to manage, as nowhere was it stated how it had been allocated. It was
	thus impossible to know if you should delete it or call free() on it or do something else entirely. About the only really satisfactory
	way to deallocate it was to hand it back to the strstream via the freeze() function. This was sufficiently non-obvious, that lots of
	people got it wrong. The stringstream returns a string object which manages itself, which is far less error prone.
	There was also the issue of having to use ends to terminate the string, but I believe the deallocation problem was the main reason for
	deprecation
*/
