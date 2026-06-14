
/*
	Exercise 5.: What is a reference? What is one advantage of using a reference parameter?

  My answer:
    A reference, is a type of an alias for a variable, or a name under which, direct access to the referenced (actual)
    variable is being linked to is granted. Similar to a pointer, but without using address of. It is simpler to use
    and it is more easy to understand an handle. There are several types of uses for it:
      - passing a reference to a function
      - returning a reference from a function
      - 'independent reference, is just a

    The advantage of using a reference as a function parameter, is that you don't need to pass address explicitly to the
    function as an argument when called, using the '&' address of operator.

  Official answer:
    A reference is essentially an implicit pointer constant that is effectively a different name
    for another variable or argument. One advantage of using a reference parameter is that
    no copy of the argument is made.
*/
