
/*
	Exercise 1.: On your own, study the sections in your compiler's user manual that refer to linkage specifications and assembly language
	programming.
*/

/*
	My answer:
		- Linkage specification tells the compiler to compile delcarations in a way that allows them to be linked together with declarations
		written in another language, such as C.

		The standard requires all compilers to support extern "C" in order to allow C++ to be compatible with C, and extern "C++", which may
		be used to override an enclosing linkage specification and restore the default. Other supported linkage specifications are
		implementation-defined.


		'extern "C"' makes a function-name in C++ have 'C' linkage (compiler does not mangle the name) so that client C code can link to (i.e
		use) your function using a 'C' compatible header file that contains just the declaration of your function. Your function definition
		is contained in a binary format (that was compiled by your C++ compiler) that the client 'C' linker will then link to using the 'C'
		name.

		...
*/
