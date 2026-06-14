
/*
	Intro 1.: One of the more important forms of an overloaded constructor is the 'copy constructor'. As numerous examples
	from the preceding chapters have shown, problems can occur when an object is passed to or return from a function. As you
	will learn in this section, one way to avoid these problems is to define a copy constructors.

	To begin, let's restate the problem that a copy constructor is designed to solve. When an object is passed to a function,
	a bitwise (i.e. exact) copy of that object is made and given to the function parameter that receives the object. However,
	there are cases in which this identical copy is not desirable. For example, if the object contains a pointer to allocated
	memory, the copy will point to the 'same' memory as does the original object. Therefore, if the copy makes a change to the
	contents of this memory, it will be changed for the original object too! Also, when the function terminates, the copy will
	be destroyed, causing its destructor to be called. This might lead to undesired side effecs that further affect the original
	object.

	A similar situation occurs when an object returned by a function. The compiler will commonly generate a temporary object
	that holds copy of the value returned by the function. (This is done automatically and is beyond your control.) This
	temporary object goes out of scope once the value is returned to the calling routine, causing the temporary object's
	destructor  to be called. However, if the destructor destroys something needed by the calling routine (for example, if it
	frees dynamically allocated memory), trouble will follow. N.B! This paragraph is not true with modern compilers. (GCC 8.1.0)

	At the core of these problems is the fact that a bitwise copy of the object is being made. To prevent these problems, you,
	the programmer, need to define precisely what occurs when a copy of an object is made so that you can avoid undesired side
	effects. The way you accomplish this is by creating a copy constructor. By defining a copy constructor, you can fully
	specify exactly what occurs when a copy of an object is made.

	It is important for you to undestand that C++ defines two  distinct types of situations in which the value of one object is
	given to another. The first situation is assignment. The second situation is initialization which can occur in three ways:
		- when an object is used to initialize another in a declaration statement.
		- when an object is passed as a parameter to a function, and
		- when a temporary object is created for use as a return value of a function. N.B! This paragraph is not true with modern compilers. (GCC 8.1.0)

	The copy constructor only applies only to initializations. It does not apply to assignments. By default, when an
	initialization occurs, the compiler will automatically provide a bitwise copy. (That is, C++ automatically provides a
	default copy costructor that simply duplicates the object.) However, it is possible to specify precisely how one object
	will initialize another by defining a copy constructor. Once defined, the copy constructor is called whenever an object
	is used to initialize another.

	Remember: Copy constructors do not affect assignment operations.
	The most common form of copy constructor is shown here:

	classname(const classname &obj){
		// body of constructor
	}

	Here 'obj' is a reference to an object that is being used to initialize another object. For example, assuming a class called
	'myclass', and that 'y' is an object of type 'myclass', the following statements would invoke the 'myclass' copy constructor:

	myclass x = y; // 'y' explicitly initializing 'x'
	func1(y); 			 // 'y' passed as a parameter
	y = func2();  // 'y' receiving a returned object (N.B! this case is no longer valid with modern compilers)

	In the first two cases, a reference to 'y' would be passed to the copy constructor. In the third, a reference to the object
	returned by 'func2()' is passed to the copy constructor.

*/
