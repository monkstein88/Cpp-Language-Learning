
/*
	Intro 1.: Sometimes it is useful to convert an object of one type into an object of another. Although it is possible to use an
   overloaded operator function to accomplish such a conversion, there is often an easier (and better) way: using a conversion function. A
   'conversion function' converts an object into a value compatible with another type, which is often one of the built-in C++ types. In
   essence, a conversion function automatically converts an object into a value that is compatible with the type of the expression in which
   the object is used.

   The general form is shown here:
*/
   operator type(){ return value; }
/*
   Here 'type' is the target type you will converting to and 'value' is the value of the object after the conversion had been performed.
	Conversion functions return a value of type 'type'. No parameters can be specified, and a conversion function must be a member of the
	class for which it performs the conversion.

	As the example will illustrate, a conversion function generally provides a cleaner approach to converting an object's value into another
	type than any other method available in C++ because it allows an object to be included directly in an expression involving the target
	type.
*/
