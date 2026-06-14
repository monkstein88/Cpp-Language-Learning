
/*
	Exercise 5.: Briefly explain how 'try', 'catch', and 'throw' work together to provide C++ exception handling.
*/

/*

	My answer:
		- 'try' - specifies and encompassses (is supposed to surround) the code lines/area where we are monitoring for errrors (errors are
		most likely to occurr):
		try{
			// ... (code under supervision)
		}
		- 'catch' - denotes a block of code that is supposed to execute, immediately when an exception is happening, which is suppsoed to
		contingency. Thus 'catch' has to be placed immediately after the 'try' block of code, directly following:
		catch(arg_list){
 	 		// ... (contingency code)
	 	}
		- 'throw' - is a statement that allows the user to manually throw an exception within a 'try' block.
		throw (arg);


	Official answer:

		- 'try', 'catch', and 'throw' work together like this: Put all statements that you wish to monitor for exceptions within a 'try'
		block, if an exception occurs, throw that exception using 'throw' and handle it with a corresponding 'catch' statement.

*/
