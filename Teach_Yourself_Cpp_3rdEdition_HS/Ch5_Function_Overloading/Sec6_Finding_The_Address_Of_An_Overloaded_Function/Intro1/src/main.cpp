
/*
	Intro 1.: To conclude this, chapter, you will learn how to find the address of an overloaded function. Just as in C, you can
	assign the address of a function (that is, its entry point) to a pointer and access that function via that pointer. A function's
	address is obtained by putting its name on the right side of an assignment statement without any parentheses or arguments. For
	example, if 'zap()' is a function, assuming proper declarations, this is a valid way to assign 'p' the address of 'zap()';

	p = zap;

	In C, any type of pointer can be used to point to a function because there is only one function that it can point to. However,
	in C++ the situation is a bit more complex because a function can be overloaded. Thus, there must be some mechanism that
	determines which function's address is obtained.

	The solution is both elegant and effective. When obtaining the address of an overloaded function, it is 'the way the pointer
	declared' that determines which overloaded function's address will be obtained.
	This solution is both elegant and effective. When obtaining the address of an overloaded function, it is 'the way the pointer
	is declared' that determines which overloaded function's address will be obtained. In essence, the pointer's declaration is
	matched against those of the overloaded functions. The function whose declaration matches is the one whose address is used.
*/
