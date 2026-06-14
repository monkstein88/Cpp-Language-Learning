
/*
	Exercise 1.: What is a generic function what is its general form?
*/

/*

	My answer:
		- A generic function is like a normal function, but for which, the specific type of argument upon which the function itself will
		operate on, can be passed as a parameter, when the function gets instantiated. So, a generic function contains and defines the general
		algorithm/procedure that is supposed to be executed, that is indifirrent to the type of data that is applied to.
		The general form of a generic function is:
		template <typename type_t1, typename type_t2, ...> ret_type func_name(type_t1 arg1, type_t2 arg2,...){
			// ... generic algorithm here.
		}

	Official answer:
		- In C++, a generic function defines a general set of operations that will be applied to various types of data. It is implemented
		with the keyword 'template'. Its general form is shown here:
		template <class Ttype > ret_type func_name(para_list)
		{
			// ...
		}

*/
