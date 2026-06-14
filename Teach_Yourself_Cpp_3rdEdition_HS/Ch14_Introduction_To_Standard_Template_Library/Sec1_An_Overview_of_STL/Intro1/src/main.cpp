
/*
	Intro 1.: Although the Standard Template Library (STL) is large and its syntax is, at times, rather intimidating, it is constructed and
	what elements it employs (maybe it meant - "it is restricted in what elements it employs"). Therefore, before looking at any code
	examples, an overview of the STL is warranted.

	At the core of the Standard Template Library are three foundational items: containers, algorithms, and iterators. These items work in
	conjuction with one another to provide off-the-shelf solutions to a variety of programming problems.

	- 'Containers' are objects that hold other objects. There are several different type of containers. For example, the 'vector' class
	defines a dynamic array, 'queue' creates a queue, and 'list' provides a linear list. In addition to the basic containers, the STL also
	defines 'associative containers', which allow efficient retrieval of values based on keys. For example, the 'map' class defines a map
	that provides access to values with unique keys. Thus, a map stores a key/value pair and allows a value to be retrieved when its key is
	given.

	Each container class defines a set of functions that can be applied to the container. For example, a list container includes functions
	that insert. delete, and merge elemnts. A stack includes functions that push and pop values.

	- 'Algorithms' act on containers. Some of the services that algorithms perform are initializing, sorting, searching and transforming the
	contents of containers. Many algorithms operate on a 'sequence', which is a linear list of elements within a container.

	- 'Iterators' are objects that are, more or less, pointers. They give you the ability to cycle through the contents of a container in
	much the same way that you would use a pointer to cycle through an array. The five types of iterators are described in the following
	table.

	-----------------------------------------------------------------------------------------------
	||		Iterator 		|		Access Allowed								                           	||
	===============================================================================================
	||		Random access	|		Stores and retrieves values. Elements can be accessed randomly.	||
	||		Bidirectional	|		Stores and retrieves values. Forward and backward moving.			||
	||		Forward			|		Stores and retrieves values. Forward moving only.						||
	||		Input				|		Retrieves but does not store values. Forward moving only.			||
	||		Output			|		Stores but does not retrieve values. Forward moving only.			||
	-----------------------------------------------------------------------------------------------

	In general, an iterator that has greater access capabilities can be used in place of one that has lesser capabilities. For example, a
	forward iterator can be used in place of an input iterator. Iterators are handled just like pointers. You can increment and decrement
	them. You can apply the '*' operator to them. Iterators are declared usign the 'iterator' type defined by the various containers.

	The STL also supports 'reverse iterators'. Reverse iterators are either bidirectional or random access iterators that move trhough a
	sequence in reverse direction. Thus, if a reverse iterator points to the end of a sequence, incrementing that iterator will cause it to
	point to one element before the end.

	When referring to the various iterator types in template descriptions, this book will use the terms listed in the following table:

	-----------------------------------------------
	||		Term 		|		Iterator Type				||
	===============================================
	||		BiIter	|		Bidirectional iterator	||
	||		ForIter	|		Forward iterators			||
	||		InIter	|		Input iterator				||
	||		OutIter	|		Output iterator			||
	||		RandIter	|		Random-access iterator	||
	-----------------------------------------------

	In addition to containers, algorithms, and iterators, the STL relies upon several other standard components for support. Chief among
	these are allocators, predicates, and comparison functions.

	Each container has an 'allocator' defined for it. Allocators manage memory allocation for containers. The default allocator is an object
	of class 'allocator', but you can define your own allocators if you need them for specialized applications. For most uses, the default
	allocator is sufficient.

	Several of the algorithms and containers use a special type of function called a 'predicate'. There are two variations of predicates:
	unary and binary. A unary prediicate takes one argument, and a binary predicate has two arguments. These functions return true or false;
	the precise conditions that make them return true or false are defined by the programmer. In this chapter, when a unary predicate
	function is used, it will be notated with the type 'UnPred'. When a binary predicate is used, it will be of type 'BinPred'. In a binary
	predicate, the arguments are always in the order of 'first', 'second'. For both unary and binary predicates, the arguments will contain
	values of the same type as the objects being stored by the container.

	Some algorithm and classes use a special type of binary predicate that compares two elements. Called a 'comparison function', this type
	of predicate returns true if its first argument is less than its second. Comparison functions will be notated by the type 'Comp'.

	In addition to the headers required by the various STL classes, the C++ standard library includes the '<utility>' and '<functional>'
	headers, which provide support for the STL. For example, '<utility>' contains the definition of the template class 'pair', which can
	hold a pair of values. We will make use of 'pair' later in this chapter.

	The templates in '<functional>' help you construct objects that define 'operator()'. These are called 'function objects', and they can
	be used in place of function pointer in many places. There are several predefined function objects declared within '<funcitona>'. Some
	are shown in the following table.

	----------------------------------------------------------------------
	|	plus			minus			multiplies		divides		modulus			|
	|	negate		equal_to		not_equal_to	greater		greater_equal	|
	|	less 			less_equal	logical_and		logical_or	logical_not		|
	----------------------------------------------------------------------

	Perhaps the most widely used function object is 'less', which determines whether the value of one object is less than the value of
	another. Function objects can be used in place of actual function pointers in the STL algorithms descibed later. Using function objects
	rather than function pointers allows the STL to generate more efficient code. However, for the puproses of this chapter, function
	objects are not needed and we won't be using them directly. Although function objects are not difficutl, a detailed discussion of
	function objects is quite lengthy and is beyond the scope of this book. They are something that you will need, however, to get maximum
	efficiency from the STL.
*/
