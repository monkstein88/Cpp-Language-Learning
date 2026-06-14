
/*
	Exercise 3.: Give some advantages of reference parameters.

	My answers:
		- You don't need to provide the address of (using the & operator) the variable
	  when passing it as an argument to a function. This is automatically handled.
		- It simplifies the use in cases, when actually you want to interact direclty with the variable
		being passed, not just a copy of it variable. The syntax is simplified and you
		only need to refer to the name of the reference, without other prefix operators.
		- When passing a variable to a reference function , no copy is created.
		- Passing by reference is often faster than passing by value. No copy of argument is made.

	Official answers:
		The address of a reference parameter is automatically passed to the function. You need
		not obtain the address manually. Passing by reference is often faster than passing by
		value. No copy of argument is generated. Therefor, there is no chance of a side effect
		occurring because the copy’s destructor is called. 
*/
