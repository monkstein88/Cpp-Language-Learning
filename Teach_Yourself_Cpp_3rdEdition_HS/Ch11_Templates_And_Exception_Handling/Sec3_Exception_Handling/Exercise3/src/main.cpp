/*
	Exercise 3.: What is wrong with this fragment?

	try{
		// ...
		throw 'a'
		// ...
	}
	catch(char* ){
		// ...
	}
*/

/*
	My answer:
		- the argument type for the 'catch' block statement - 'char', is not of the proper type to properly reflect the exception thrown by
		the 'throw' statement (char*)

	Official answer:
		-  A character exception is thrown, but the catch statement will handle only a character pointer. (That is, there is no corresponding
		catch statement to handle the character exception.)
*/
