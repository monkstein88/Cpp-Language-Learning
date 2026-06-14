/*
	Exercise 2.: What is wrong with this fragment?

	int main(){
		throw 12.23;
	...
*/

/*
	My answer:
		- 'main()' is not encircled/wrapped inside 'try' block.

	Official answer:
		-  The throw is called before execution passes through a try block.
*/
