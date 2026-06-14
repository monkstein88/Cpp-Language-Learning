
/*
	Example 3.: As mentioned, instead of using the keyword 'class', you can use the keyword 'typename' to specify a generic type in a
	template definition. For example, here is another way to declare the 'swapargs()' function.
*/
// Use 'typename'
template <typename X> void swapargs(X& a, X& b){
	X temp;

	temp = a;
	a = b;
	b = temp;
}
/*
	The 'typename' keyword can also be used to specify unknown type within a template, but this use is beyond the scope of this book.
*/
