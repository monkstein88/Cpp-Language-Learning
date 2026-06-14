
/*
	Intro 1.: C++ provides two important mechanisms that make it easier to link C++ to other languages. One is the 'linkage specifier',
	which tells the compiler that one or more functions in your C++ program will be linked with another language that might have a different
	approach to naming, parameter passing, stack restoration, and the like. The second is the 'asm' keyword, which allows you to embedd
	assembly language instructions in your C++ source code. Both are examined here.

	By default, all functions in a C++ program are compiled and linked as C++ functions. However you can tell the C++ compiler to link a
	function so that it is compatible with another type of language. All C++ compilers allow functions to be linked either as C or C++
	functions. Some also allow you to link functions with languages such as Pascal, Ada, or FORTRAN. To cause a function to be linked for a
	different language, use this general form of the linkage specification:
*/
	extern "language" function_prototype;
/*
	Here 'language' is the name of the language with which you want the specified function to link. If you want to specify linkage for more
	than one function, use this for of the linkage specification:
*/
	extern "language"
	{
		function_prototypes
	}
/*
	All linkage specification must be global; they cannot be used inside a function.

	The most common use of linkage specifications occur when linking C++ programs to C code. By specifying "C" linkage you prevent the
	compiler from 'mangling' (also known as 'decorating') the names of function with embedded type information. Because of C++'s ability to
	overload functions and create member functions, the link-name of a function usually has type information added to it. Since C does not
	support overloading or member functions, it cannot recognize a mangled name. Using "C" linkage avoids this problem.

	Although it is generally possible to link assembly language routines with a C++ program, there is often an easier way to use assembly
	language. C++ supports the special keyword 'asm', which allows you to embed assembly language instructions within a C++ function. These
	instructions are then compiled as is. The advantage of using an in-line assembler is that your entire program is completely defined as a
	C++ program and there is no need to link separate assembly language files. The general form of the 'asm' keyword is shown here:
*/
	asm("op_code");
/*
	where 'op_code' is the assembly language instruction that will be embedded in your program.

	It is important to note that several compilers accept these three slightly different forms of the 'asm' statement:
*/
	asm op_code;

	asm op_code newline;

	asm
	{
		instruction sequence
	}
/*
	Here 'op_code' is not enclosed in double quotes. Because embedded assembly language instruction tends to be implmentation dependent, you
	will want to read your compiler's user manual on this issue.

	Note: Microsoft Visual C++ uses '__asm' for embedding assembly code. It is otherwise similar to 'asm'.
	Note: GNU GCC uses 'asm' keyword, it is a GNU extension. When writing code that can be compiled with '-ansi' and the various '-std' options,
			use '__asm__' instead of 'asm'.
*/
