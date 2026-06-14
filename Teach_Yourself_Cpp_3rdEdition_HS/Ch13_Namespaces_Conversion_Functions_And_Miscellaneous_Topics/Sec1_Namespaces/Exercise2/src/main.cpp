
/*
	Exercise 2.: Explain the operation of an unnamed namespace.
*/

/*
   My answer:
      - An unamed namespace, encapsulates a section of code that is going to be visible only to the file in which it has been declared in,
      withouth the need to explicitly using a qualifier. It makes the names of the object visible, only to this single file. It's similar,
      if not, identical in behaviour as specifying an object as 'static', in its declaration in the global (top-most) area of a source file.

      using namespace
      {

      }

   Official answer:
      - A unnamed namespace restricts the scope of the identifiers declared within it to its file.
*/
