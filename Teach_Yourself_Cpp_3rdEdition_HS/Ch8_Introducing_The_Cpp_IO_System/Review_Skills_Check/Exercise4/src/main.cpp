
/*
	Exercise 4.: Given the following fragment, in what order are the construcotr functions called?
*/

class myclass : public A, public B, public C{
   // ...
};



/*
   My answer:
      -  The constrictor functions are called in the left-to-right order of the inheritance list specified here, which would mean:
         1. A
         2. B
         3. C
      "

   Official answer:
      - Constructors are called in the order ABC, destructors in the order CBA.

*/
