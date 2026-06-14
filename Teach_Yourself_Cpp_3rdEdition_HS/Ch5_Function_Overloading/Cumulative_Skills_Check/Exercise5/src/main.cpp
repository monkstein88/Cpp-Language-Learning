
/*
	Exercise 5.: Briefly explain why copy constructors are needed.
*/

/*
	My answer:
		- They are needed with objects that during their initialization/creation dynamically allocate memory inside of
		themselves, and later on, when they get 'destroyed', their 'destructor' releases this memory. The problem is that when such
		objects are passed to functions or just directly copied, there is binary copy being performed, and any pointer values
		(that hold the associated addresses of allocated memory) are also copied in content. And when the function is passed an
		object by value (and if not a copy constructor had been set), inside the function a object copy that will have the same
		exact values for its parameter (including the values for any pointers, and in this way will have direct access to the memory
		of the 'original' object, that was passed to the function. This is a possible cause of error.
		But also when the function exits (returns) it will invoke the destructor of its copied object, and if that destructor
		is associated with freeing any memory. As a result , the released memory will be

	Official answer:
		- Copy constructors are needed when you, the programmer, must control precisely how a
			copy of an object is made. This is important only when the default bitwise copy creates
			undesired side effects.


			Important: WIth the copy constructor - you can control precisely how a copy of an object is made!!!
*/
