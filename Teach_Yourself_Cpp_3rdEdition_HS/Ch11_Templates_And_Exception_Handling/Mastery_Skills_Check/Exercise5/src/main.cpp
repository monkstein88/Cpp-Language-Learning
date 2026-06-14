/*
	Exercise 5.: Show the general forms of 'try', 'catch', and 'throw'. In your own words, describe their operation.
*/


/*
	My answer:
*/
	// 'try' is the wrapper used to enclose a section of code within which we're checking for exceptions
	try{
		// ... block of code (including calls to functions) to be tested here
		if(some_condition)
			throw(arg); // 'throw' - is the mechanism through which a user can explicitly 'throw'/invoke an exception, by also allowing for
							// passing a type of value to the later 'handler' for that exception
	}

	// 'catch' - is the piece of code that is immediately called to 'handle' the encountered exception , and it is used to 'catch' the
	// specific exception in question. Note that we have to use the specifi argument type that matches that one of of the 'throw' statment.
	catch(type arg){
		// ... the contintengcy code that gets called (the program switches its execution to), the moment
	}

/*
	Official answer:

	The general forms of try, catch, and throw are shown here:
*/
	try
	{
		// try block
		throw exp;
	}
	catch(type arg)
	{
		// ...
	}
