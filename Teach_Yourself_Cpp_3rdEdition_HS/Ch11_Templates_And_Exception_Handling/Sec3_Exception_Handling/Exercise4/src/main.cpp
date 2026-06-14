/*
	Exercise 4.: What will happen if an exception is thrown for  which there is no corresponding 'catch' statement?

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
		- Generally the program will terminate right there and at that time, and it will not resume

	Official answer:
		- If an exception is thrown for which there is no corresponding catch, 'terminate()' is called and abnormal program termination
		might occur.
*/
