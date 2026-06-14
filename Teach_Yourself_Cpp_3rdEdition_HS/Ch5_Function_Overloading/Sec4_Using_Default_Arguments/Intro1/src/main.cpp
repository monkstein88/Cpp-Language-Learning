
/*
	Intro 1.: There is a feature of C++ that is related to function overloading. This feature is calle the 'default argument',
	and it allows you to give a parameter a default value when no corresponding argument is specified when the function is
	called. As you will see, using default arguments is essentially a shorthand form of function overloading.

	To give a parameter a default argument, simply follow that parameter with an equal sign and the value you want it to default
	when no correspoding argument is specified when the function is called. As you will see, using default arguments is
	essentially a shorthand form of function overloading.

	To give a parameter a default arugment, simply follow that parameter with an equal sign and the value you want it to default
	to if no corresponding argument is present when the function is called. For example, this function gives its two parameters
	values of 0:

	void f(int a=0, int b=0);

	Notice that this syntax is similar to variable initialization. This function can now be called three different ways.
		-	It can be called with both arguments specified.
		- It can be called with only the first argument specified. In this case, 'b' will default to 0.
		- It can be called with no arguments - 'f()' - causing both 'a' and 'b' to default to 0.

	That is the following invocations of 'f()' are all valid:
	 	f(); // a and b default to 0
		f(10); // a is 10, b defaults to 0
		f(10, 99); // a is 10, b is 99

	In this example, it should be clear that there is no way to default 'a' and specify 'b'.
	When you create a function that has one or more default arguments, those arguments must be specified only once: either in
	the function's prototype or in its definition if the definition precedes the functions's first use. The defaults cannot be
	specified in both the prototype and the definition. This rule applies even if you simply duplicate the same defaults.

	N.B! As you can probably guess, all default parameters must be to the right of any parameters that don't have defaults.
	Further, once you begin to define default parameters, you cannot specify any parameters that have no defaults.

	N.B! One other point about default arguments: they must be constants or global variables. They cannot be local variables or
	other parameters.
*/
