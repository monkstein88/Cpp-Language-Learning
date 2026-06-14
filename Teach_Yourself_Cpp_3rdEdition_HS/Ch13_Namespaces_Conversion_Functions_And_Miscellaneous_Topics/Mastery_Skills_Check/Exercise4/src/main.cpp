/*
	Exercise 4.: Given a function 'counter()', show the statemnt that causes the compiler to compile this function for C language linkage.
*/
/*
	My answer:
		-  'extern "C" counter();' or

			'extern "C"
			{
				counter();
			}'


	Official answer:
		-  extern "C" int counter();

*/
