
/*
  Exercise 6.: What is copy constructor and under what circuimstances is it called?
*/

/*
  My answer:
    - A copy constructor, is a class member that can be used to specify how exactly an object is being copied, and it is being
		invoked (called) in the instances	when:
			- Declaring & Initilizing (in the same statement) an object, with the value (identifier) of another object.
			- When passing the (original) object, to a function as a value (passing-by-value).
			- (N.B! THIS IS NOT TRUE WITH MODERN COMPILERS!) When a function ends and returns object of the type holding a copy constructor. 
				The C++ mechanism here is that when a 'return' of an object takes place, a temporary object holding a binary copy of the
				content to be returned, is being created and that temp object is being given back. During the creating of this temp object
				the copy constructor gets invoked.

			The copy constructor will define, how . The copy constructor is only being invoked in program statements that perform
			above actions. It is not invoked during  assignment statements.

  Official answer:
		-	A copy constructor is a special constructor that is called when one object initializes another. This circumstance can occur
		 in any of the following three ways:
		 	- When one object is explicitly used to initialize another.
			- When an object is passed to a function.
			- When a temporary object is created as a function return value.
*/
