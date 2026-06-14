
/*
	Intro 1.: Operator overloading resembles function overlaoding. In fact, operator overloading is really just a type of function
	overloading. However, some additional rules apply. For example, an operator is always overloaded relative to a user-defined
	type, such as a class. Other differences will be discussed as needed.
	When an operator is overloaded, that operator loses none of its original meaning. Instead, it gains additional meaning relative
	to the class for which it is defined.
	To overload an operator, you create an 'operator function'. Most often an operator function is a member or a friend of the class
	for which it is defined. However, there is slight difference between a member function and a friend operator function. The first
	part of this chapter discusses the creation of member operator functions. Then friend operator functions are discussed.

	The general form of a member operator function is shown here:

	return_type class_name::operator#(arg_list){
		// operation to be performed
	}

	The return type of an operator function is often the class for which it is defined. (However, an operator function is free to
	return any type.) The operator being overloaded is substituted for the '#'. For example, if the '+' is being overloaded, the
	function name would be 'operator +'. The contents of 'arg-list' vary depending upon how the operator function is implemented
	and the type of operator being overloaded.

	There are two important restrictions to remember when you are overloading an overator. First, the precedence of the operator
	cannot be changed. Second, the number of operands that an operator takes cannot be altered. For example, you cannot overload
	'/' operator so that it takes only one operand.

	Most C++ operators can be overloaded. The only operators that you cannot overload are shown here:
	. :: .* ?
	Also, you cannot overload the preprocessor operators. (The .* operator is highly specialized and is beyond the scope
	of this book.)

	Remember that C++ defines operators very broadly, including such things as the '[]' subscript operators, the '()' function call
	operators, 'new' and 'delete', and the '.' (dot) and '->' (arrow) operators. However, this chapter concentrates on overloading
	the most commonly used operators.

	Except for the '=', operator functions are inherited by any derived class. However, a derived class is free to overload any
	operator it chooses (including those overloaded by the base class) realtive to itself. You have been using two overloaded
	operators: '<<' and '>>' . These operators have been overloaded to perfrom console I/O. As mentioned, overloading these operators
	to perform I/O does not prevent them from performing their traditional jobs of left shift and right shift.

	While it is permissible for you to have an operator function perform 'any' activity-whether related to the traditional use of
	the operator or not - it is best to have an overloaded operator's actions stay within the spirit of the operator's traditional
	use. When you create overloaded operators that stray from this principal, you run the risk of substantially destructuring your
	program. For example, overloading the '/' so that the phrase "I like C++" is written to a disk file 300 times is fundamentally
	confusing misues of operator overloading!

	The preceding paragraph notwithstanding, there will be times when you need to use an operator in a way not related to its
	traditional usage. The two best examples of this are the '<<' and '>>' operators, which are overloaded for console I/O.
	However, even in these cases, the left and right arrows provide a visual "clue" to their meaning. Therefore, if you need to
	overload an operator in a nonstandard way, make the greatest effort possible to use an appropriate operator.

	N.B! One final point: operator functions cannot have default arguments.

	Any of the following 38 (until C++20) 40 (since C++20) operators can be overloaded:
	 + - * / % ^ & | ~ ! = < > += -= *= /= %= ^= &= |= << >> >>= <<= == != <= >= <=> (since C++20) && || ++ -- , ->* -> ( ) [ ] co_await (since C++20)

*/
