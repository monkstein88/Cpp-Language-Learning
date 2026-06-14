/*
	Intro 1.: In addition to defining generic functions, you can also define generic classes. When you do this, you create a class that
	defines all algorithms used by that class, but the actual type of the data being manipulated will be specified as a parameter when
	objects of that class are created.

	Generic classes are useful when a class contains generalizable logic. For example, the same algorithm that maintains a queue of integers
	will also work for a queue of characters. Also, the same mechanism that maintains a linked list of mailing addresses will also maintain
	a linked list of auto part information. By using a generic class, you can create a class that will maintain a queue, a linked list, and
	so on for any type of data. The compiler will automatically generate the correct type of object based upon the type you specify when the
	object is created.

	The general form of a generic class declaration is shown here:
*/
	template <class Ttype> class class_name{
		// ...
		// ...
		// ...
	};

/*
	Here 'Ttype' is the placeholder type name that will be specified when a class is instantiated. If necessary, you can define more than
	one generic data type by using a comma-separated list.

	Once you have created a generic class, you create a specific instance of that class by using the following general form:
*/
	class_name <type> ob;
/*
	Here 'type' is the name of the data that the class will be operating upon.

	Member functions of a generic class are, themselves, automatically generic. They need not be explicitly specified as such using
	'template'.

	As you will see in Chapter 14, C++ provides a library that is built upon template classes. This library is usually referred to as the
	Standard Template Libraty, or STL for short. STL provides generic versions of the most commonly used algorithms and data structures. If
	you want to use the STL effectively, you'll need a solid understanding of template classes and their syntax.
*/
