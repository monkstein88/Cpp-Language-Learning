
/*
	Intro 1.: Although formatted text files such as those produced by the preceding examples are useful in a variaty of situations,
	they do not have the same binary representation of the data as that used internally by your program rather than the human-
	readable text that data is translated into by the '<<' and '>>' operators. Thus, unformatted functions give you detailed
	control over how files are written and read.

	The lowest-level unformatted I/O functions are 'get()' and 'put()'. You can read a byte by using 'get()' and write a byte by
	using 'put()'. These functions are members of all input and output stream classes, respectively. Their prototypes are shown
	here:
*/
	istream& get(char& ch);
	ostream& put(char& ch);
/*
	The 'get()' function reads a single character from the associated stream and puts that value in 'ch'. It returns a reference
	to the stream. If a read is attempted at the end-of-file, on return the invoking stream will evaluate to false when used in a
	expression. The 'put()' function writes 'ch' to the stream and returns a reference to the stream.

	To read and write blocks of data, use the 'read()' and 'write()' functions, which are also members of the input and output
	stream classes, respectively. Their prototypes are shown here:
*/
	istream& read(char* buf, streamsize num);
	ostream& write(const char* buf, streamsize num);
/*
	The 'read()' function reads 'num' bytes from the invoking stream and puts them in the buffer pointed to by 'buf'. The 'write'
	function writes 'num' bytes to the associated stream from the buffer pointed to by 'buf'. The 'streamsize' type is some form
	of integer. An object of type 'streamsize' is capable of holding the largest number of bytes that will be transferred in any
	one I/O operation.

	If the end of the file is reached before 'num' characters have been read, 'read()' simply storps, and the buffer contains as
	many characters as were available. You can find out how many characters have been read using the member function 'gcount()',
	which has this prototype:
*/
	streamsize gcount();
/*
	It returns the number of characters read by the last unformatted input operations.

	When you are using the unformatted file functions, most often you will open a file for binary rather than text operations. The
	reason for this is easy to understand: specifying 'ios::binary' prevents any character translations from occurring. This is
	important when the binary representations of data such as integers, float, and pointers are stored in the file. However, it is
	perfectly acceptable to use the unformatted functions on a file opened in text mode - as long as that file actually contains
	only text. But remember, some character translations may occur.
*/
