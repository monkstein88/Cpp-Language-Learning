
/*
	Intro 1.: It is possible to overload the relational and logical operators. When you overload the relational and logical operators so
	that they behave in their traditional manner, you will not want the operator functions to return an object of the class for which
	they are defined. Instead, they will return an integer that indicates either true or false. This not only allows these operator
	functions to return a true/false value, it also allows the operators to be integrated into larger relational and logical
	expressions that involve other types of data.

	Note: If you are using a modern C++ compiler, you can also have an overloaded relational or logical operator function return a value
	of type 'bool', although there is no advantage to doing so. As explained in Chapter 1, the bool type defines only two values: 'true'
	and 'false'. These values are automatically converted into nonzero and 0 values. Integer nonzero and 0 values are automatically
	converted into 'true' and 'false' , respectively.
*/
