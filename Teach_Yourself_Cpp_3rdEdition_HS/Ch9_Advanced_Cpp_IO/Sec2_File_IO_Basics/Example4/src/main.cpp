
/*
	Example 4.: There are a few differences between C++'s original I/O library and the modern Standard C++ library that you should
	be aware of, especially if you are converting older code. First, in the original I/O library, 'open()' allowed a third
	parameter, which specified the file's protection mode. This parameter defaulted to a normal file. The modern I/O libary does
	not support this parameter.

	Second, when your are using the old library to open a stream for input and output using 'fstream', you must explicitly specify
	both the 'ios::in' and the 'ios::out' 'mode' values. No default value for 'mode' is supplied. This applies to both the
	'fstream' constructor and to its 'open()' function. For example, using the old I/O library you must use a call to 'open()' as
	shown here to open a file for input and output:
*/
	fstream mystream;
	mystream.open("test", ios::in | ios::out);
/*
	In the modern I/O library, an object of type 'fstream' automatically opens files for input and output when the 'mode'
	parameter is not supplied.

	Finally, in the old I/O library, the 'mode' parameter could also include either 'ios::nocreate()', which causes the 'open()'
	function to fail if the file does not already exist, or 'ios::noreplace', which causes the 'open()' function to fail if the
	file does not already exist. Thes values are not supported by Standard C++.
*/
