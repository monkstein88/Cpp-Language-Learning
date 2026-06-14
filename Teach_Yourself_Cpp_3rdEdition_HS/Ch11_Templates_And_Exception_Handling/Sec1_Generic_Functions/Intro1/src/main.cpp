
/*
	Intro 1.: A generic function defines a general set of operations that will be applied to various types of data. A generic function has
	the type of data that it will operate upon passed to it as a parameter. Using this mechanism, the same general procedure can be applied
	to a wide range of data. As you know, many algorithms are logically the same no matter what type of data is being operated upon. For
	example, the Quicksort agorithm is the same whether it is applied to an array of 'integers' or an array of 'floats'. It is just that the
	type of the data being sorted is different. By creating a generic function, you can define, independent of any data, the nature of the
	algorithm. Once this is done, the compiler automatically generates the correct code for the type of data that is actually used when you
	execute the function. In essence, when you create a generic funtion you are creating a function that can automatically overload itself.

	A generic function is created using the keyword 'template'. The normal meaning of the word 'template' accurately reflects the keyword's
	use in C++. It is used to create a template (or framework) that describes what a function will do, leaving it to the compiler to fill in
	the details as needed. The general form of a template function definition is shown here:
*/
	template<class Ttype>ret_type func_name(parameter list){
		// body of function
	}
/*
	Here 'Ttype' is a placeholder name for a data type used by the function. This name can be used within the function definition. However,
	it it is only a placeholder; the compiler will automatically replace this placeholder with an actual data type when it creates a specific
	version of the function.

	Although the use of the keyword 'class' to specify a generic type in a template declaration is traditional, you can also use the keyword
	'typename'.
*/
