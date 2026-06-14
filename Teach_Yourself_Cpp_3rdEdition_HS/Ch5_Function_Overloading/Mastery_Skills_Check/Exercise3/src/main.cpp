
/*
	Exercise 3.: Give two reasons why you might want (or need) to overload a class's constructor?

  My answer:
    You may need to because:
			- need to provide a way of how an object is declared in the different situations that might be ne
			- you need for example a copy-constructor when working or passing objects with dynamic allocated members to functions
			and are afraid that their destructor might destroy/contaminate the source data obj.
			- You want to utilize overloading for constructors - so you have the optional way to provide default values to class
			members when you just declare them

  Official answer:
			- One reason to overload a constructor is to provide flexibility, allowing you to choose the
				most appropriate constructor in the specific instance.
			- Another is to allow both initialized and uninitialized objects to be declared.
			- You might want to overload a constructor so that dynamic arrays can be allocated.
*/
