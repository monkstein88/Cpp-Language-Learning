
/*
	Intro 1.: It is possible-indeed, common-to overload a class's constructor function. (It is not possible to
  overload a destructor, however.) There are three main reasons why you will want to overload a constructor
  function:
    - to gain flexibility
    - to support arrays
    - to create copy constructors
  The first two of these are discussed in this section. Copy constructors are discussed in the next section.

  One thing to keep in mind as you study the examples is that there must be a constructor function for each
  way that an object of a class will be created. If a program tempts to create an object for which no matching
  constructor is found, a compile-time error occurs. This is why overloaded constructor functions are so
  common to C++ programs. 
*/
