
/*
	Intro 1.: As you learned in Chapter 3, when an object is passed to a function by use of the default call-by-
  value parameter parameter-passing mechanism, a copy of that object is made. Although the parameter's constructor
  function is not called, its destructor function is called when the function returns.
  As you should recall, this can cause serious problems in some instances - when the destructor frees dynamic
  memory, for example.

  One solution to this problem, is to pass an object by reference. (The other solution involves the use of copy
  constructors, which are discussed in Chapter 5.) When you pass the object by reference, no copy is made, and
  therefore its destructor function is not called when the funciton return. Remember, however, that changes made
  to the object inside the function affect the object used as the argument.

  Note: It is critical to undestand that a reference is not a pointer. Therefore, when an object is passed by
  reference, the member access operator remains the dot (.) , not the arrow (->).
*/
