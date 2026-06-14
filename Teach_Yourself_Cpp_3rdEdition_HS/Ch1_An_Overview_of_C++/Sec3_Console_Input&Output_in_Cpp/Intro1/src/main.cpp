
/*
	Intro 1.: Since C++ is a superset of C, all elements of the C language are also contained in the C++ language. This implies that all C
	programs are also C++ programs by default. (Actually, there are some very minor exceptions to this rule, which are discussed later in
	this book.) Therefore, it is possible to write C++ programs that look just like C programs. While there is nothing wrong with this per
	se, it does mean that you will not be taking full advatage of C++. To get the maximum benefit from C++, you must write C++ style
	programs. This means using a coding style and features that are unique to C++.

	Perhaps the most common C++ specific feature used by C++ programmers is its approach to console I/O. While you may still use functions
	such as 'printf()' and 'scanf()', C++ provides a new, and better, way to perform these types of I/O operations. In C++, I/O is performed
	using 'I/O operators' instead of I/O functions. The output operator is '<<'  and the the input operator is '>>'. As you know, in C,
	these are the left and right shift operators, respectively. In C++, they still retain their original meanings (left and right shift),
	buts, they also take on the expanded role of performing input and output. Consider this C++ statement:
*/
	cout << "This string is output to the screen.\n";
/*
	This statement causes the string to be displayed on the computer's screen. 'cout' is a predefined stream that is automatically linked to
	the console when a C++ program begins execution. It is similar to C's 'stdout'. As in C, C++ console I/O may be redirected, but for the
	rest of this discussion, it is assumed that the console is being used.

	By using the '<<' output operator, it is possible to output any of C++'s basic types. For example, this statement outputs the value
	100.99:
*/
	cout << 100.99;
/*
	In general, to output to the console, use this form of the '<<' operator:
*/
	cout << expression;
/*
	Here 'expression' can be any valid C++ expression-including another output expression.

	To input a value fro the keyboard, use the '>>' input operator. For example, this fragment inputs an integer value into 'num':
*/
	int num;
	cin >> num;
/*
	Notice that 'num' is not preceded by an '&'. As you know, when you use C's 'scanf()' function to input values, variables must have their
	addresses passed to the function so they can receive the values entered by the user. This is not the case when you are using C++'s input
	operator. (The reason for this will become clear as you learn more about C++.)
	In general, to input values from the keyboard, use the form of '>>':
*/
	cin >> variable;
/*
	Note: The expanded roles of '<<' and '>>' are examples of operator overloading.
	In order to use the C++ I/O operators, you must include the header '<iostream>' in your program. As explained earlier, this is one of
	C++'s standard headers and is supplied by your C++ compiler.
*/
