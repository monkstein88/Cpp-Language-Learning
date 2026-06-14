
/*
	It is important to understand that the return type alone is not a sufficient
	difference to allow to function overloading. If two functions differ only in
	the type of data they return, the compiler will not always be able to select
	the proper one to call. For example, this fragment is incorrect because it is
	inherently ambiguous.
*/

// This is incorrect and will not compile.
int f1(int a);
double f1(int a);

.
.
.
f1(10); // which function does the compiler call ???

/*
	As the comment indiciates, the compiler has no way of knowing which version
	of f1() to call.
*/
