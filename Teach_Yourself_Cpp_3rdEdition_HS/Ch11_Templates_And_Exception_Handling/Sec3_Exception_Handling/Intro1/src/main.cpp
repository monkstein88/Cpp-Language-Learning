
/*
	Intro 1.: C++ provides a built-in error handling mechanism that is called 'exception handling'. Using exception handling, you can more
	easily manage and respond to run-time errors. C++ exception handling is built upon three keywords: 'try', 'catch', and 'throw'. In the
	most general terms, program statements that you want to monitor for exceptions are contained in a 'try' block. If an exception (i.e., an
	error) occurs within the 'try' block, it is thrown (using 'throw'). The exception is caught, using 'catch', and processed. The following
	elaborates upon this general description.

	As stated, any statement that throws an exception must have been executed from within a 'try' block. (A function called from within a
	'try' block can also throw exception.) Any exception must be caught by a 'catch' statement that immediately follows the 'try' statements
	throws the exception. The general form of 'try' and 'catch' are shown here:
*/
 try{
	 // try block
 }
 catch(type1 arg){
	 // catch block
 }
 catch(type2 arg){
	 // catch block
 }
 catch(type3 arg){
	 // catch block
 }
 .
 .
 .
 catch(typeN arg){
	 // catch block
 }
/*
	The 'try' block must contain the protion of your program that you want to monitor for errors. This can be as specific as monitoring a
	few statements within one function or as all-encompassing as enclosing the 'main()' function code within a 'try' block (which
	effectively causes the entire program to be monitored).

	When an exception is thrown, it is caught by its corresponding 'catch' statement, which proccesses the exception. There can be more than
	one 'catch' statement associated with a 'try'. The 'catch' statement that is used is determined by the type of the exception. That is,
	if the data type specified by a 'catch' matches that of the exception, that 'catch' statement is executed (and all others are bypassed.)
	When an exception is caught, 'arg' will receive its value. If you don't need access to the exception itself, specify only 'type' in the
	'catch' clause - 'arg' is optional. Any type of data can be caught, including classes that you create. In fact, class types are
	frequently used as exceptions.

	The general form of the 'throw' statement is shown here:
*/
	throw exception;
/*
	'throw' must be executed either from within the 'try' block proper or from any function that the code within the block calls (directly
	or indirectly). 'exception' is the value thrown.

	If you throw an exception for which there is not applicable 'catch' statement, an abnormal program termination might occur. If your
	compiler compiles with Standard C++, throwing an unhandled exception causes the standard library function 'terminate()' to be invoked.
	By default, 'terminate()' calls 'abort()' to stop your program, but you can specify your own terminaiton handler, if you like. You will
	need to refer to your compiler's library reference for details.
*/
