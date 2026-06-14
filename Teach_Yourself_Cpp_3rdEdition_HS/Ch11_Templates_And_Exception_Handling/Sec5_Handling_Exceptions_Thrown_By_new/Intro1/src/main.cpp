
/*
	Intro 1.: In Chapter 4 you learned that the modern specification for the 'new' operator states that it will throw an exception if an
	allocation request fails. Since in Chapter 4 exceptions had not yet been discussed, a description of how to handle that exception was
	deferred until later. Now the time has come to examine precisely whato ccures when 'new' fails.

	Before we begin, it is necessary to state that the material in this section describes the behaviour of 'new' as specified by Standard C++.
	As you should recall from Chapter 4, the precise action that 'new' takes on failure has been changed several times since C++ was
	invented. Specifically, when C++ was first invented, 'new' returned null on failure. Later this was changed such that 'new' caused an
	excecption on failure. Also, the neame of this exception has changed over time. Finally, it was decided that a 'new' failure will
	generate an exception by default, but that a null pointer could be returned instead, as an option. Thus, 'new' has been implemented
	differently, at different times, by compiler manufacturers. Although all compilers will eventually implement 'new' in compliance with
	Standard C++, not all currently do. If the code examples shown here do not work with your compiler, check your compiler's documentation
	for details on how it implements 'new'.

	In Standard C++, when an allocation request cannot be honored, 'new' throws a 'bad_alloc' exception. If you don't catch this exception,
	your program will be terminated. Although this behaviour is fine for short sample programs, in real applications you must 'catch' this
	exception and process it in some rational manner. To have access to this exception, you must inlcude the header '<new>' in your program.

	Note: Originally this exception was called 'xalloc', and at the time of this writing (1997) many compilers still use the older name.
	However, 'bad_alloc' is the name specified by Standard C++, and it is the name that will be used in the future.

	In Standard C++ it is also possible to have 'new' return null instead of throwing an exception when an allocation failure occures. This
	for of new is most useful when you are compiling older code with a modern C++ compiler. It is also valuable when your are replacing
	calls to 'malloc()' with 'new'. This form of 'new' is shown here.
*/
	p_var = new(nothrow) type;
/*
	Here 'p_var' is a pointer variable of 'type'. The 'nothrow' form of 'new' works like the original version of 'new' from years ago. Since
	it returns null on failure, it can be "dropped into" older code and you won't have to add exception handling. However, for new code,
	exceptions provide a better alternative.
*/
