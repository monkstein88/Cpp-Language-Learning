/*
	Exercise 3.: Show one way to fix the preceding fragment.
*/



/*
	My answer:
		- 	try{
				// ...
				throw 10;
			}
			catch(int i){
				// ...
			}

	Official answer:
		-  One way to fix the problem is to create a catch(int) handler. Another way to fix it is to catch all exceptions with a catch(...)
			handler.
*/
