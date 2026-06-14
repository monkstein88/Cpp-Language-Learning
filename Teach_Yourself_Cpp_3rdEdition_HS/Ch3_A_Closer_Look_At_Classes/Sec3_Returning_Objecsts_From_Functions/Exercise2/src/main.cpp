
/*
	Exercise 2.: Other than incorrect freeing of dynamically allocated memory, think of a
	situation in which it would be imrpoper to return an objec from a function.

	 - Cases where the objects contain large amounts of data - multiples of very large arrays or variables
	 and in that case instantiating (twice) of all this data and copying it, might turn problematic for memory
	 limited applications/devices, also where execution speed would be hindered and performance impact.

	 - Another situation would  be if an object opens a disk filee whe it is created and closes that file when it
	 is destroyed. If that object is returned from a function, the file will be closed when the temporary object
	 is destroyed.


	 N.B! All this might not be an issue with modern compilers, as this behaviour of an object being 'destroyed'
	 twice (its destructor gets called twice) as a function which returns an object finishes, is NOT  happening with (GCC 8.1.0 x64 on Windows 10 x64 Pro)
*/
