
/*
	Example 2.: The 'template' portion of a generic function definition does not have to be on the same line as the function's name. For
	example, the folowing is also a common way to format the 'swapargs()' function:
*/
template <class X>
void swapargs(X& a, X& b){
	X temp;

	temp = a;
	a = b;
	b = temp;
}

/*
	If you use this form, it is important to understand that no other statements can occur between 'template' statement and the start of the
	generic function definition. For example, the following fragment will not compile:
*/
// This will not compile.
template <class X>
int i; // this is an error
void swapargs(X& a, X& b){
	X temp;

	temp = a;
	a = b;
	b = temp;
}

/*
	As the comments imply, the 'template' specification must directly precede the rest of the function definition.
*/
