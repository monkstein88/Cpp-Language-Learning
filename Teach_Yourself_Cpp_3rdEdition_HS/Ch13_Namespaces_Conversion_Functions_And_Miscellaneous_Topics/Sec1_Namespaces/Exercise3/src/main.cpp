
/*
	Exercise 3.: Explain the difference between the two forms of 'using'.
*/

/*
   My answer:
      - using namespace name-of-namespace; - This is the general form, and what it does is, it includes (makes visible) all the members
      (names of identifiers) of that namespace to be accessible in the program from that point on. This means that no qualifier is needed
      to preceed when addressing these objects.
      - using name-of-namespace::name-of-object; -  This just makes that specific object , of that namespace visible in the program from
      that point on, so that for that particular object, no  qualifier needs to prepend the object when trying to address it.

   Official answer:
      - This form of using,
         using name :: member ;
      brings only the specified member into the current namespace. 
      - The form
         using namespace name ;
      brings the entire namespace into view.

*/
