/*
	Exercise 2.: What is wrong tith this fragment?
*/
	try{
		// ...
		throw 10;
	}
	catch(int* p){
		// ...
	}


/*
	My answer:
		- The 'catch' statement does not have/it does not reflect the type of exception value being thrown, the argument's type of
		  of the 'catch()' statement is not appropriate. It should be 'catch(int i)'.

	Official answer:
		-  There is no corresponding catch statement for the throw
*/
