
/*
	Intro 1.: Just as you can pass objects to functions, functions can return objects. To do so, first declare
	the function as returning a class type. Second, return an object of that type using the normal 'return'
	statement.
	There is one important point to understand about returning objects from functions, however: When an object
	is returned by a function, a temporary object is automatically created which holds the return value. It is
	this objet that is actually returned by the function. After the value has been returned, this object is
	destroyed. The destruction of this temporary object might cause unexpected side effects in some situations,
	as is illustrated in Example 1 (following next)
*/
