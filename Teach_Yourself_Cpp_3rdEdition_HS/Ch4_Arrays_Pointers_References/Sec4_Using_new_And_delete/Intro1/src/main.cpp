
/*
	Intro 1.: Up to now, when memory neded to be allocated, you have been using 'malloc()', and you have
  been freeing allocated memory by using 'free()'. These are, of course, the standard C dynamic allocation
  functions. While these functions are available in C++, C++ provides a safer and more convenient way
  to allocate and free memory. In C++, you can allocate memory using 'new' and release it using 'delete'.
  These operators take these general forzems:
`
``p_var = new type;
  delete p_var;

  Here 'type' is the type specifier of the object for which you want to allocate memory and 'p_var' is a
  pointer to that type.
   - 'new' is an operator that returns a pointer to dynamically allocated memory that
     is large enough to hold an object of type 'type'.
   - 'delete' can be called only with an valid pointer. if called with an invalid pointer, the allocation
     system will be destroyed, possibly crashing your program.

  If there is insufficient avaialable memory to fill an allocation request, one of two actions will occur.
  Either 'new' will return a null pointer or it will generate and exception. (Exceptions and exception
  handling are described later in this book; loosely, an exception is a run-time error that can be managed
  in a structured fashion.) In Standard C++, the default behaviour of 'new' is to generate an exception when
  it cannot satisfy an allocation request. If this exception is not handled by your program, your program
  will be terminated. the trouble is that the precise action that 'new' takes on failure has been changed
  several times ove the past few years. Thus it is possible that your compiler will not implement 'new'
  as defined by the Standard C++.

  Subce there are two possible ways that new can indicate allocation failure, and since different compilers
  might do so differently, the code in this book will be written in such a way that both contingencies are
  accomodated. All code in this book will test the pointer returned by 'new' for null. If your compiler
  generates an exception when 'new' fails, the program will simply be terminated. Later, when excpetion
  when 'new' fails, the program will simply be terminated. Later, when exception handling is described, 'new'
  will be re-examined and you will learn how  to better handle an allocation failure. You will also learn
  about an nalternative for of 'new' that always returns a null pointer when an error occurs.

  One last point: none of the examples here in this book should cause 'new' to fail - due to only handful
  of bytes being used (needing to be allocated).

  Although 'new' and 'delete' perform functins similar to 'malloc()' and 'free()', they have several
  advantages.
    - Firtst, 'new' automatically allocates enought memory to hold an object of the specified type.
    You do not need to use 'sizeof', for example , to compute the number of bytes required. This reduces the
    possibility for error.
    - Second, 'new' automatically returns a pointer of the specified type. You do not
    need to use an explicit type cast the way you did when you allocated memory by using 'malloc()'.
    - Third, both 'new' and 'delete' can be overloaded, enabling you to easily implement your own custom
    allocation system.
    - Fourth, it is possible to initialize a dynamically allocated object.
    - Finally, you no longer need to include '<cstdlib>' with your programs

    Note: In C++, it is required explicitly to type cast when you use malloc(), to the type of pointer its
    result is going to be assigned to. This due to C++ enforcing more rigorous type checking.
*/
