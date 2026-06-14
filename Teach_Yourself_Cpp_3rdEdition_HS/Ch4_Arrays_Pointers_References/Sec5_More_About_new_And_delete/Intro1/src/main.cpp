
/*
	Intro 1.: This section discusses two additional features of 'new' and 'delete'. First, dynamcally allocated
  objects can be given initial values. Second, dynamically allocated arrays can be created. You can give a
  dynamcally allocated object an initial value by using this form of the 'new' statement:

  p_var = new type (initial_value);

  To dynamically allocate a one-dimensional array, use this form of 'new':

  p_var = new type [size];

  After this statmenet has executed, 'p_var' will point to the start of an array of 'size' elements of the
  type specified. For various technical reasons, it is not possible to initialize an array that is dynamically
  allocated.

  To delete a dynamically allocated array, use this for of 'delete':

  delete [] p_var;

  This syntax causes the compiler to call the destructor function for each element in the array. It does not
  cause 'p_var' to be freed multiple times. 'p_var' is still freed only once.

  Note: For older compilers, you might need to specify the size of the array that you are deleting between
  the square brackets of the 'delete' statement. This was required by the original definition of C++. However,
  the size of specification is not needed by modern compilers.

*/
