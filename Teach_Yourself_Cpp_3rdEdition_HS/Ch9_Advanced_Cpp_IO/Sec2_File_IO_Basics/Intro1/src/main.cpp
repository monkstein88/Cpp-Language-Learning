
/*
	Intro 1.: It is now time to turn our attention to file I/O. As mentioned in the preceding chapter, file I/O and console I/O
	are closely related. In fact, the same class hierarchy that supports console I/O also supports file I/O. Thus, most of what
	you have already learned about I/O applies to files as well. Of course, file handling makes use of several new features.

	To perform file I/O, you must include the header '<fstream>' in your program. It defines several classes, including 'ifstream',
	'ofstream' and 'fstream' also have access to all operations defined by 'ios' (discussed in the preceding chapter).
*/
	#include <fstream>
/*
	In C++, a file is opened by linking it to a stream. There are three types of streams: input, output, and input/output. Before
	you can open a file, you must first obtain a stream. To create an input stream, declare an object of type 'ifstream'. To
	create an output stream, declare an object of type 'ofstream'. Streams that will be performing both input and output operations
	must be declared as objects of type 'fstream'. For example, this fragment creates one input stream, one output stream, and one
	stream capable of both input and output:
*/
	ifstream in; // input
	ofstream out; // output
	fstream io; // input and output
/*
	Once you have created a stream, one way to associate it with a file is by using the function 'open()'. This function is a
	member of each of the three file stream classes. The prototype for each is shown here:
*/
	void ifstream::open(const char* filename, openmode mode=ios::in); // Open a file for reading (the program is going to read from it)
	void ofstream::open(const char* filename, openmode mode=ios::out); // Open file for writing (the program is going to write to it)
	void fstream::open(const char* filename, openmode mode=ios::in | ios::out); // Open a file for both reading & writing
/*
	Here 'filename' is the name of the file, which can include a path specifier. The value of 'mode' determines how the file is
	opened. It must be a value of type 'openmode', which is an enumeration defined by 'ios' that contains the following values:
*/
	ios::app
	ios::ate
	ios::binary
	ios::in
	ios::out
	ios::trunc
/*
	You can combine two or more of these values by ORing them together. Let's see what each of these values means.

	Including 'ios::app' causes all output to that file to be appended to the end. This value can be used only with files capable
	of output. Including 'ios::ate' causes a seek to the end of the file to occur when the file is opened. Although 'ios::ate'
	causes a seek ot the end-of-file, I/O operations can still occur anywhere within the file.

	The 'ios::in' value specifies that the file is capable of input. The 'ios::out' value specifies that the file is capable of
	output.

	The 'ios::binary' values causes a file to be opened in binary mode. By default, all files are opened in text mode. In text
	mode, various character translations might take place, such as carriage return/linefeed sequences being converted into
	newlines. However, when a file is opened in binary mode, no such character translations will occur. Keep in mind that any file,
	whether it contains formatted text or raw data, can be opened in either binary or text mode. The only difference is whether
	character translations take place.

	The 'ios::trunc' value causes the contents of a preexisting file by the same name to be destroyed and the file to be truncated
	to zero length. When you create an output stream using 'ostream', any preexisting file with the same name is automatically
	truncated.

	The following fragment opens an output file called 'test':
*/
	ofstream mystream;
	mystream.open("test");
/*
	Since the 'mode' parameter to 'open()' defaults to a value appropriate to the type of stream being opened, there is no need to
	specify its value in the preceding example.

	If 'open()' fails, the stream will evaluate to false when used in a Boolean expression. You can make use of this fact to
	confirm that the open operation succeeded by using a statement like this:
*/
	if(!mystream){
		cout << "Cannot open file.\n";
		// handle error
	}
/*
	In general, you should always check the result of a call to 'open()' before attempting to access the file.

	You can also check to see if you have sucessfully opened a file by using the 'is_open()' function, which is a member of
	'fstream', 'ifstream', 'ofstream'. It has this prototype.
*/
	bool is_open();
/*
	It returns true if the stream is linked to an open file and false otherwise. For example, the following checks if 'mystream'
	is currently open:
*/
	if(!mystream.is_open()){
		cout << "File is not open.\n";
		// ...
	}
/*
	Although it is entirely proper to open a file by using the 'open()' function, most of the time you will not do so because the
	'ifstream', 'ofstream' and 'fstream' classes have constructor functions that atuomatically open the file. The constructor
	functions have the same parameters and defaults as the 'open()' function. Therefore, the most common way you will see a file
	opened is shown in this example:
*/
	ifstream mystream("myfile"); // open file for input
/*
	As stated, if for some reason the file cannot be opened, the stream variable will evaluate as false when used in a conditional
	statement. Therefore, whether you use a constructor function to open the file or an explicit call to 'open()', you will want
	to confirm that the file has actually been opened by testing the value of the stream.

	To close a file, use the member function 'close()'. For example ,to close the file linked to a astream called 'mystream', use
	this statement:
*/
	mystream.close();
/*
	The 'close()' function takes no parameters and returns no value.
	You can detect when the end of an input file has been reached by using the 'eof()' member function of 'ios'. It has this
	prototype:
*/
bool eof();
/*
	It returns true when the end of file has been encountered and fasle otherwise.

	Once a file has been opened, it is very easy to read textual data from it or write formatted, textual data to it. Simply use
	'<<' and '>>' operators the same way you do when performing console I/O, except that instead of using 'cin' and 'cout',
	substitute a stream that is liked to a file. In a way, reading and writing files by using '>>' and '<<' is like using C's
	'fprintf()' and 'fscanf()' functions. All information is stored in the file in the same format it would be in if displayed on
	the screen. Therefore, a file produced by using '<<' is formatted text file. Typically, files that contain formatted text that
	you operate on using the '>>' and '<<' operators should be opened for text rather than binary mode. Binary mode is best used
	on unformatted files, which are described later in this chapter.
*/
