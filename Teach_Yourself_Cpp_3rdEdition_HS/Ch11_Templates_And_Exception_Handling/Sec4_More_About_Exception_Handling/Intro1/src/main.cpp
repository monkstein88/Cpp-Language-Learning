
/*
	Intro 1.: There are several additional features and nuances to C++ exception handling tha can make it easier and more convenient to use.

	In some circuimstances you will want an exception handler to catch all exceptions instead of just a certain type. This is easy to
	accomplish. Simply use this for of 'catch':
*/
	catch(...){ // This is an exception handler
		// process all exceptions
	}
/*
	Here the ellipsis matches any type of data.

	You can restrict the type of exceptions that a function can throw back to its caller. Put differently, you can control what type of
	exceptions a function can throw outside of itself. In fact, you can also prevent a function from throwing any exceptions whatsoever. To
	apply these restrictions, you must add a 'throw' clause to the function definition. The general form of this is shown here:
*/
	ret_type func_name(arg_list) throw(type_list){
		// ...
	}
/*
	Here only those data types contained in the comma-separated 'type-list' may be thrown by the function. Throwing any other type of
	expression will cause abnormal program termination. If you don't want a function to be able to throw 'any' exceptions, use an empty list.

 	If your compiler complies with Standard C++, when a function attempts to throw a disallowedd exception the standard library function
	'unexpected()' is called. By default, this causes the 'terminate()' function to be called, which causes abnormal program termination.
	However, you can specify your own termination handler, if you like. You will need to refer to your compiler's documentation for
	directions on how this can be accomplished.

	If you wish to rethrow an expression from within an exception handler, you can do so by simply calling 'throw', by itself with no
	exception. This causes the current exception to be passed on to an outer 'try/catch' sequence.
*/
