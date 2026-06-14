
/*
  Exercise 5.: Give one advantage of reference parameters. Give one disadvantage.

  My answers:
    Advantage: they are simpler to use - easier syntax, it is just like working with the original (refered to) variable itself.
    No need of extra operators needed like address of ('&') or dereference '*'. Also no (local) copies are created when used
    as function parameters. References grant direct access to the variable or constant they are "connected" to.

    Disadvantage: A reference is tied to only one variable , it refers to and cannot be reassigned another variable later on.
    Exceptions are:
      - references used as function parameters
      - returned references from called function
      - references used in classes.

  Official answer:
    Advantages: A reference parameter does not cause a copy of the object used in the call
    to be made. A reference is often faster to pass than a value. The reference parameter
    streamlines the call-by-reference syntax and procedure, reducing the chance for errors.

    Disadvantages: Changes to a reference parameter open the possibility of side effects in
    the calling routine.
*/
