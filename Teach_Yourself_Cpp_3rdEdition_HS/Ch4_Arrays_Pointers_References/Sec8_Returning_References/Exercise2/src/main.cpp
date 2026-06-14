
/*
	Exercise 2.: Is the following fragment valid? If not, why not?
*/


int &f();
.
.
.
int *x;

x = f();

/*
	My answer:
		No it is not valid, as the 'f()' returns a reference to an integer, not the actual address
		of any integer variable. Something that might work is to do the following:

		f() = *x;

	Official answer:
		No. A reference returned by a function cannot be assigned to a pointer.
*/
