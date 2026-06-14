
/*
	Intro 1.: Now that you know how to use a virtual function to achieve run-time polymorphism, it is time to consider how and why
	to use it. As has been stated many times in this book, polymorphism is the process by which a common interface is applied to
	two or more similar (but technically different) situations, thus implementing the "one interface, multiple methods" philosophy.
	Polymorphism is important because it can greatly simplyfy complex systems. A single, well-defined interface is used to access
	a number of different but related actions, and artificial complexity is removed. In essence, polymorphism allows the logical
	relationship of similar actions to become apparent; thus the program is easier to understand and maintain. When related
	actions are accessed through a common interface, you hace less to remember.

	There are two terms that are often linked to OOP in general and to C++ specifically. They are 'early binding' and 'late
	binding'. It is important that you know what they mean.

	Early binding essentially refers to those events that can be known at compile time. Specifically, it refers to those function
	calls that can be resolved during compilation. Early bound entities include "normal" functions, overloaded functions, and
	non-virtual member and friend functions. When these types of functions are compiled, all address information necessary to call
	them is known at compile time. The main advantage of early binding (and the reason that it is so widely used) is that it is
	very efficient. Calls to functions bound at compile time are the fastest types of function calls. The main disadvantage is the
	lack of flexibility.

	Late binding refers to events that must occur at run time. A late bound function call is one in which the address of the
	function to be called is not known until the program runs. In C++, a virtual function is a late bound object. When a virtual
	function is accessed via a base class pointer, the program must determine at run time what type of object is being pointed to
	and then select which version of the overridden function to execute. The main advantage of late binding is flexibility at run-
	time. Your program is free to respond to random events without having to contain large amounts of  "contingency code". Its
	primary disadvantage is that there is more overhead associated with a function call. This generally makes such calls slower
	than those that occur with early binding.

	Because of the potential efficiency trade-offs, you must decide when it is appropriate to use early binding and when to use
	late binding.
*/
