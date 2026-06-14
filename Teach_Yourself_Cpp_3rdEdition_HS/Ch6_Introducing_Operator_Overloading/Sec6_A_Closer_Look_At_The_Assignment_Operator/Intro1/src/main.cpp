
/*
	Intro 1.: As you have seen, it is possible to overload the assignment operator relative to a class. By default, when the
	assignment operator is applied to an object, a bitwise copy of the object on the right is put into the object on the left. If
	this is what you want, there is no reason to provide your own 'operator=()' function. However, there are cases in which a strict
	bitwise copy is not desirable. You saw some examples of this in Chapter 3, in cases in which an object allocates memory. In these
	types of situations, you will want to provide a sprecial assignment operation.
*/
