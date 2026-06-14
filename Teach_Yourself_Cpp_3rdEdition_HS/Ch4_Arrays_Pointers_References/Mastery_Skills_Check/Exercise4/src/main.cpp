
/*
	Exercise 4.: Show the general forms for 'new' and 'delete'. What are some advantages of using them instead out
  'malloc()' and 'free()'?

  My answer:
    The general forms are
      int* p = new int; // for a single (non-array) variable allocation (without iniatilizing the value)
      int* p = new int(3); // for a single (non-array) variable allocation with iniatilizing the variable with a value (of 3)
      int* p = new int [5]; // allocate an array of 5 of ints. YOU CANNOT INITIALIZE AN ARRAY TYPE OF ALLOCATED VARIABLE.

      delete p; // free the allocated memory for a single variable (non-array)
      delete [] p; // free the allocated memory for a multiple (array) type variable

      Advantages of 'new' and 'delete' over 'malloc()' and 'free()', respectively:
        - There is no need to type cast when 'malloc()'-ing returns its value, to the suitable type that is to
        - There is no need to calculate manually (with the help of the 'sizeof' operator) how many bytes do you need.
        - There is no need to use an extra library as <cstdlib> , as the 'new' and 'delete' are built into the language.
         There is more complicated exception handling mechanism, if an error occurs.

  Official answer:
    When using new, you don’t need to use a type cast. The size of the object is automatically
    determined; you don’t need to use sizeof 0 Also, you don’t need to include <cstdlib> in
    you program.
*/
