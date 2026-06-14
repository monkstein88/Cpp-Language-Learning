
/*
	Intro 1.: C++ contains a special pointer that is called 'this'. 'this' is a pointer that is automatically passed
  to any member function when it is called, and it is a pointer to the object that generates the call. For example,
  given the statement.

  ob.f1(); // assume that ob is an object

  the function 'f1()' is automatically passed a pointer to 'ob' which is the object that invokes the call. This
  pointer is refered as 'this'.
  It is important to understand that only member functions are pased a 'this' pointer. For example, a friend does
  not have a 'this' pointer.
*/
