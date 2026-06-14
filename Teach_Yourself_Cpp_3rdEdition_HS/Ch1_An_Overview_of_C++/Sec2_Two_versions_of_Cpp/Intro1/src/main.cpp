
/*
	Intro 1.: At the time of this writing (around 1997, so some of the information might be old or not make sense if you read it from
	present times), C++ is in the midst of a transformation. As explained in the preface to this book, C++ has been undergoing the process
	of standardization for the past several years. The goal has been to create a stable, standardized, feature-rich language that will suit
	the needs of programmers well into the next century. As a result, there are really two versions of C++. The first is the traditional
	version that is based upon Bjarne Stroustrup's original designs. This the version of C++ that has been used by programmers for the past
	decade. The second is the new Standard C++, which was created by Stroustrup and the ANSI/ISO standardization committee. While these two
	versions of C++ are very similar at their core, Standard C++ contains several enhancements not found in traditional C++. Thus, Standard
	C++ is essentially a superset of traditional C++.

	This booke teaches Standard C++. This is the version of C++ defined by the ANSI/ISO standardization commitee, and it is the version
	implmenented by all modern C++ compilers. The code in this book reflects the contemporary coding style and practies as encouraged by
	Standard C++. This means that what you learn in this book will be applicable today as well as tomorrow. Put directly, Standard C++ is
	the future. And, since Standard C++ encomplasses all features found in earlier versions of C++, what you learn in this book will enable
	youi to work in all C++ programming environments.

	However, if you are using an older compiler, it might not accept all of the programs in this book. Here's why: During the process of
	standardization, the ANSI/ISO committee added any new features to the language. As these features were defined, they were implemented by
	the compiler developers. Of course, there is always a lag time between the addition of a new feature to the language and the
	avaialability of the feature in commercial compilers. Since features were added to C++ over a period of years, an older compiler might
	not support one or more of them. This is important because two recent additions to the C++ language affect every program that you will
	write - even the simplest. If you are using an older compiler that does not accept these new features, don't worry. There is an easy
	workaround, which is desribed in the following paragraphs.

	The differences between old-style and modern code involve two new features: new-style headers and the 'namespace' statement. To
	demonstrate these differences we will begin by looking at two versions of a minimal, do-nothing C++ program. The first version, shown
	here, reflects the way C++ programs were written until recently. (that is, it uses old-style coding.)
*/

	/*
		A traditional-style C++ program.
	*/
	#include <iostream.h>

	int main()
	{
		/* program code */
		return 0;
	}

/*
	Since C++ is build on C, this skeleton should be largely familiar, but pay special attention to the '#include' tatement. This statement
	includes the file 'iostream.h', which provides support for C++'s I/O' system. (it is to C++ what 'stdio.h' is to C.)

	Here is the second version of the skeleton, which uses the modern style:
*/
	/*
		A modern-style C++ program that uses the new-style headers and namespace.
	*/
	#include <iostream>
	using namespace std;

	int main()
	{
		/* program code */
		return 0;
	}

/*
	Notice the two lines in this program immediately after the first comment; this is where the changes occur. First, in the '#include'
	statement, there is no '.h' after the name 'iostream'. And second, the next line, specifying a namespaces will be examined in detail
	later in this book, a brief overview is in order now.


	THE NEW C++ HEADERS
	As you know from your C programming experience, when you use a library function in a program, you must include its header file. This is
	done using the '#include' statement. For example, in C, to include the header file for the I/O functions, you include 'stdio.h' with a
	statement like this:
*/
	#include <stdio.h>
/*
	Here 'stdio.h' is the name of the file used by the I/O functions, and the preceding statement causes tha file to be included in your
	program. The key point is that the '#include' statement 'includes a file'.

	When C++ was first invented and for several years after that, it used the same style of headers as did C. In fact, Standard C++ still
	supports C-style headers for header files that you create and for backward compatibility. However, Standard C++ has introduced a new
	kind of header that is used by the Standard C++ library. The new-style headers 'do not' specify filenames. Instead, they simply specify
	standard identifiers that might be mappped to files by the compiler, but they need not be, The new-style C++ headers are abstrations
	that simply guarantee that the appropriate prototypes and definitions required by the C++ library have been declared. Since the new-style
	header is not a filename, it does not have a '.h' extension. Such a header consists solely of the header name contained between angle
	brackets. For example, here are some of the new-style headers supprted by Standard C++:
	<iostream>
	<fstream>
	<vector>
	<string>

	The new-style headers are included using the '#include' statement. The only difference is that the new-style headers do not necessarily
	represeent filenames.

	Because C++ includes the entire C function library, it still supports the standard C-style header files associated with that library.
	That is, header files sucha as 'stdio.h' and 'ctype.h' are still available. However, Standard C++ also defines new-style headers that
	you can use in place of these header files. The C++ versions of the standard C headers simply add a 'c' prefix to the filename and drop
	the '.h'. For example, the new style C++ header for 'math.h' is '<cmath>', and the one for 'string.h' is '<cstring>'. Although it is
	currently prermissible to include a C-style header file when using C library functions, this approach is deprecated by Standard C++.
	(That is, it is not recommended.) For this reason, this book will use new-style C++ eaders in '#include' statements. If your compiler
	does not support new-style headers the C function library, simply substitute the old-style, C-like headers.

	Since the new-style header is a recent addition  to C++, you will still find many, many older programs that don't use it. These programs
	instead use C-style headers, in which a filename is specified. As the old-style skeletal program shows, the traditional way to include
	the I/O header is as shown here:
*/
	#include <iostream.h>
/*
	This causes the file iostream.h to be included in your program. In general, old-style header will use the same name as its corresponding
	new-style header with a '.h' appended.

	As of this writing (around 1997, so some of the information might be old or not make sense if you read it from
	present times), all C++ compilers support the old-style headers. However, the old-style headers have been declared obsolete, and their
	use in new programs is not recommended. This is why they are not used in this book.

	Remember: While still common in existing C++ code, old-style headers are obsolete.

 	NAMESPACES
	When you include a new-style headerin your program the contents that header are containd the 'std' namespace. A 'namespace' is simply a
	declarative region. The purpose of a namespace is to localize the names of identifiers to avoid name collisions. Traditionally, the
	names of library functions and other such items were simply placed into the global namespace (as they are in C). However, the contents
	of new-style headers are placed in the 'std' namespace. WE will look closely at namespaces later in this book. For now, you don't need
	to worry about them because you can use the statement
*/
	using namespace std;
/*
	to bring the 'std' namespace into visibility (i.e., to put 'std' into the global namespace). After this statement has been bompiled,
	there is no difference between working with an old-style header and a new-style one.

	WORKING WITH AN OLD COMPILER
	As mentioned, both namespaces and the new-style are recent additions to the C++ language. While virtually all new C++ compilers support
	these features, older compilers might not. If you have one of these older compilers, it will report one or more errors when it tries to
	compile the first two lines of the sample programs in this book. If this is the case, there is an easy workaround: simply use an
	old-style header and delete the 'namepsace' statement. That is just replace
*/
	#include <iostream>
	using namespace std;
/*
	with
*/
	#include <iostream.h>
/*
	This change transforms a modern program into a traditional-style one. Since the old style header reads all of its contents into the
	global namespace, there is need for a 'namespace' statement.

	One other point: For now and for the next few years, you will see many C++ programs that use the old-style headers and that do not
	include a 'namespace' statement. Your C++ compiler will be able to compile them just fine. For new programs, however, you should use the
	modern style because it is the only style of program that complies with Standard C++. While old-style programs will continue to be
	supported for many years, they are technically noncompliant.
*/
