
/*
	Exercise 3.: When an object is passed as an argument to a function, a copy of that object is made. Is
	the copy's constructor function called? Is its destructor called?

	- The constructor is not called/performed when passing the object to the function.
	- The destructor is called when the function (to which the object had been passed previously) finishes.

	Official: When an object is passed to a function, a copy is made. However, the copy's destructor
	is called when the objet is destroyed by the termination of the function.
*/
