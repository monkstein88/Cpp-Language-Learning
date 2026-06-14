
/*
	Intro 1.: In addition to the form shown earlier, there are several different ways in which the 'get()' function is overloaded.
	The prototypes for the three most commonly used overloaded forms are shown here:
*/
	istream& get(char* buf, streamsize num);
	istream& get(char* buf, streamsize num, char delim);
	int get();
/*
	The first form reads characters into the array pointed to by 'buf' until either 'num-1' characters have been read, a newline
	is found, or the end of the file has been encountered. The array pointed to by 'buf' will be null terminated by 'get()'. If
	the newline character is encountered in the input stream, it is 'not' extracted. Instead, it remains in the stream until the
	next input operation.

	The second form reads characters into the array pointed to by 'buf' until either 'num-1' characters have been read, the
	character specified by 'delim' has been found, or the end of the file has been encountered. The array pointed to by 'buf' will
	be null terminated by 'get()'. If the delimiter character is encountered in the input stream, it is not extracted. Instead, it
	remains in the stream until the next input operation.

	The third overloaded form of 'get()' returns the next character from the stream. It returns EOF if the of the file is
	encountered. This form of 'get()' is similar to C's 'getc()' functions.

	Another function that performs input is 'getline()'. It is a member of each input stream class. Its prototype is shown here:
*/
	istream& getline(char* buf, streamsize num);
	istream& getline(char* buf, streamsize num, char delim);
/*
	The first form reads characters into the array pointed to by 'buf' until either 'num-1' characters have been read, a newline
	character has been found, or the end of the file has been encountered.
	The array pointed to by 'buf' will be null terminated by 'getline()', If the newline character is encountered in the input
	stream, it is extracted, but it is not put into 'buf'.

	The second form reads characters into the array pointed to by 'buf' until either 'num-1' characters have been read, the
	character specified by 'delim' has been found, or the end of the file has been encountered. The array pointed to by 'buf' will
	be null terminated by 'getline()'. If the delimeter character is encountered in the input stream, it is extracteed, but it is
	not put into 'buf'.

	As you can see, the two versions of 'getline()' are virtually identical to the 'get(buf, num)' and 'get(buf, num, delim)'
	versions of 'get()'. Both read characters from input and put them into the array pointed to by 'buf' until either 'num-1'
	characters have been read or until the delimiter character or the end of the file is encountered. The difference between
	'get()' and 'getline()' is that 'getline()' reads and removes the delimeter from the input stream; 'get()' does not.

	You can obtain the next character in the input stream without removing it from that stream by using 'peek()'. This function is
	a member of the input stream classes and has this prototype:
*/
	int peek();
/*
	It returns the next character in the stream; it returns EOF if the end of the file is encountered.

	You can return the last character read from a stream to that stream by using 'putback()', which is a member of the input
	stream classes. Its prototype is shown here:
*/
	istream& putback(char c);
/*
	where 'c' is the last character read.

	When output is performed, data is not immediately written to the physical device linked to the stream. Instead, information is
	stored in an internal buffer until the buffer is full. Only then are the contents of that buffer written to disk. However, you
	can force the information to be physically written to disk before the buffer is full by calling 'flush()'. 'flush()' is a
	member of the output stream classes and has this prototype:
*/
	ostream& flush();
/*
	Calls to 'flush()' might be warranted when a program is going to be used in adverse environments (in situations where power
	outages occur frequently, for example).
*/
