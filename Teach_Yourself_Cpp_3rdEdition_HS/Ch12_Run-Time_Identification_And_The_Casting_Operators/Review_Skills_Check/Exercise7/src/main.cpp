
/*
	Exercise 7.: What puproses do 'terminate()' and 'unexpected()' serve?
*/

/*

	My answer:
		- 'terminated()' is a function, that gets called, when an exception within a 'try' block occurs for which there is no matching or
		corresponding 'catch' statement to take care of it. It can be redefined what function to take the place of 'terminated()', when it is
		supposed to get called - with 'set_terminated(func_name)';
		- 'unexpected()' is a function, that gets called, when a function tries to throw an exception, that is out of the specified list of
		(type) of exceptions we had allowed the function to throw. Outside the dynamic-exception-specifier list (i.e. in its throw specifier)
		where we have defined the types of exception arguments it can throw.

	Official answer:
		- terminate() is called when an exception is thrown for which there is no corresponding catch statement. unexpected() is called when
		an attempt is made to throw an exception out of a function that is not specified in the function’s throw clause.
*/
