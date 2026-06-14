
/*
	Exercise 3.: Explain the effect of setting the 'boolalpha' flag.
*/


/*
	My answer:
		- The 'boolalpha' flag could be set for input ('cin') and output ('cout') type of streams. The effect for input type streams
		  is that when the user/application needs to provide/give the data (in 'boolean' fashio), he/it must use the keywords
		  'true' or 'false' explicitly, and them only . Otherwise the program will not accept the input properly. So, in one word,
		  the input information needs to be provided only using the keywords 'true' (for '1') and 'false' (for '0').
		  When the 'boolalpha' flag is applied to an output type stream (i.e. 'cout'), boolean values are going to be
		  displayed again with the keywords 'true' and 'false'.
		  Normally, when the 'boolalpha' flag is not set you will see when outputing and need when inputting, for boolean values,
		  the numbers 1 for true and 0 for false.

	Official answer:
	 	- Setting the 'boolalpha' flag on an output stream causes Boolean values to be displayed
		  using the words 'true' and 'false'. Setting 'boolalpha' on an input stream allows you to enter
		  Boolean values using the words 'true' and 'false'.

*/
