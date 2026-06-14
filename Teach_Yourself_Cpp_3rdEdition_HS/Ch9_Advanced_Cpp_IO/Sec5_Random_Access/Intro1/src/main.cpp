
/*
	Intro 1.: In C++'s I/O system, you perform random access by using the 'seekg()' and 'seekp()' functions which are amembers of
	the input and output stream classes, respectively. Their most common forms are shown here:
*/
	istream& seekg(off_type offset, seekdir origin);
	ostream& seekp(off_type offset, seekdir origin);
/*
	Here 'off_type' is an integer type defined by 'ios' that is capable of containing the largest valid value that 'offset' can
	have. 'seekdir' is an enumeration defined by 'ios' that has these values:

	--------------------------------------------
	||  Values   |   Meaning                  ||
	--------------------------------------------
	||  ios::beg | Seek from beginning        ||
	||  ios::cur | Seek from current location ||
	||  ios::end | Seek from end              ||
	--------------------------------------------

	The C++ I/O system manages two pointers associated with a file. One is the 'get pointer', which specifies where in the file
	the next input operation will occur. The other is the 'put pointer', which specifies where in the file the next output
	operation will occur. Each time an input or output operation takes place, the appropriate pointer is automatically
	sequentually advanced. However by using the 'seekg()' and 'seekp()' functions, it is possible to access the file in a non-
	sequential fashion.

	The 'seekg()' function moves the associated file's current get pointer 'offset' number of bytes from the specified 'origin'.
	The 'seekp()' function moves the asscoiated file's current put pointer 'offset' number of bytes from the specified 'origin'.

	In general, files that will be accessed via 'seekg()' and 'seekp()' should be opened for binary file operations. This prevents
	character translations from occurring which may affect the apparent position of an item within a file.

	You can determine the current position of each file pointer by using these member functions:
*/
	pos_type tellg();
	pos_type tellp();
/*
	Here 'pos_type' is an integer type defined by 'ios' that is capable of holding the largest value that defines a file position.

	There are overloaded versions of 'seekg()' and 'seekp()' that move the file pointers to the location specified by return
	values of 'tellg()' and 'tellp()'. Their prototypes are shown here:
*/
	istream& seekg(pos_type position);
	ostream& seekp(pos_type position);
