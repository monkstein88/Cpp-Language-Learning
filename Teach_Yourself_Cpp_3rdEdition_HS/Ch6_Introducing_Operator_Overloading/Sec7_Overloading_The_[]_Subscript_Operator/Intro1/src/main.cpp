
/*
	Intro 1.: The last operator that we will overload is the '[]' array subscript operator. In C++, the '[]' is considered a binary
	operator for the purposes of overloading.

	Remember: The '[]' can be overloaded only by a member function, so does the '=' operator.

	Therefore, the general form of a member 'operator[]()' function is as shown here:

	type class_name::operator[](int index){
		// ...
	}

	Technically, the parameter does not have to be of type 'int', but 'operaotr[]()' functions are typically used to provide array
	subscripting and as such an integer value is generally used.
	To understand how the '[]' operator works, assume that an object called 'O' is indexed as shown here:

	O[9];

	This index will translate into the following call to the 'operator[]()' functions:

	O.operator[](9)

	That is, the value of the expression within the subscripting operator is passed to the 'operator[]()' function in its explicit
	parameter. The 'this' pointer will point to 'O', the object that generated the call.
*/
