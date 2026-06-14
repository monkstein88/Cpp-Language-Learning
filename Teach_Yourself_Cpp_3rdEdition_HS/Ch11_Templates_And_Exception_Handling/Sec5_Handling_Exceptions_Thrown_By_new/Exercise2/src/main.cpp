/*
	Exercise 2.: Given the following fragment, show two ways to convert it into modern C++-style code.

	p = malloc(sizeof(int));

	if(!p){
		cout << "Allocation error.\n";
		exit(1);
	}

*/


/*
	My answer:
*/
// first way
	#include <new>

	try{
		p = new int;
	}
	catch(bad_alloc){
		cout << "Allocation error.\n";
		exit(EXIT_FAILURE);
	}

// second way
	p = new(nothrow) int;
	if(!p){
		cout << "Allocation error.\n";
		exit(EXIT_FAILURE);
	}

/*
	Official answer:
*/
// first way
	p = new(nothrow) int;
	if(!p)
	{
		cout << "Allocation error.\n";
		// ...
	}
	
// second way
	try
	{
		p = new int;
	}
	catch(bad_alloc ba)
	{
		cout << "Allocation error.\n";
		// ...
	}
