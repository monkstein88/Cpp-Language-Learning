
/*
	Exercise 2.: What is a generic class and what is its general form?
*/

/*

	My answer:
		- A generic class is like a normal class, but for which, the specific type of the variable(s) upon which the class itself will
		revolve around and operate on, can be passed as a parameter, when the class gets instantiated. So, a generic class contains and
		defines the generalized algorithm that is supposed to be take place, but which is indifirrent to the type of data that is applied
		to. The general form of a generic class is:
		template <class type_t1, class type_t2, ...> class class_name{
			// ... class description/definition here.
		};

	Official answer:
		-  In C++, a generic class defines all operations that relate to that class, but the actual data is specified as a parameter when an
		object of that class is created. Its general form is shown here:
		template <class Ttype > class class_name
		{
			// ...
		};

*/
