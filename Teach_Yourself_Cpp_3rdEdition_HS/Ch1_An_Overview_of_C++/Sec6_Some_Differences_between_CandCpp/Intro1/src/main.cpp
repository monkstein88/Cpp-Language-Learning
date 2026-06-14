
/*
	Intro 1.: Althoug C++ is a superset of C, there are some small differences between the two, and a few are worth knowing from the start.
	Before proceeding, let's take time to examine them.

	First, in C, when a function takes no parameters, its prototype has the word void inside its function parameter list. For example, in
	C, if a function called 'f1()' takes no parameters (and) returns a 'char'm its prototype will look like this:
*/
	char f1(void);
/*
	However, in C++, the 'void' is optional. Therefore, in C++, the prototype for 'f1()' is usually written like this:
*/
	char f1();
/*
	C++ differs from C in the way that an empty parameter list is specified. If the preceding prototype had occurred in a C program, it
	would simply mean that 'nothing is said abouth' the parameters to the function. In C++, it means that the function 'has no parameters'.
	This is the reason that the preceding examples did not explicitly use 'void' to declare an empty parameters list. (The use of 'void' to
	declare an mepty parameter list is not illegal; it is just redundant. Since most C++ programmers pursue efficiency with a nearly
	religious zeal, you will almost nver see 'void' used in this way.) Remember, in C++, these two declarations are equivalent:
*/
	char f1();
	char f1(void);
/*
	Another subtle difference between C and C++ is that in a C++ program, all functions must be prototyped. Remember, in C, prototypes are
	recommended but technically optional. In C++, they are required. As the examples from the previous section show, a member function's
	prototype contained in a class also serves as its general prototype, and no other separate prototype is required.

	A third difference between C and C++ is that in C++, if a function is declared as returning a value, it must return a value. That is,
	if a function has a return type other than 'void', any return statement within that function must contain a value. In C, a non-'void'
	function is not required to actually return a value. If it doesn't, a garbage value is "returned".

	In C, if you don't explicitly specify the return type of a function, an integer return type is assumed. C++ has dropped the
	"default-to-int" rule. Thus, you must explicitly declare the return type of all functions.

	One other difference between C and C++ that you will commonly encounter in C++ programs has to do with where local variables can be
	declared. In C, local variables can be declared only at the start of a block, prior to any "action" statements. In C++, local variables
	can be declared anywhere. One advantage of this approach is that local variables can be declared close to where they are first used,
	thus helping to prevent unwanted side effects.

	Finally, C++ defined the 'bool' data type, which is used to store Boolean (i.e., true/false) values. C++ also defines the keywords 'true'
	and 'false', which are the only values that a value of type 'bool' can have. In C++, the outcome of the rlational and logical operators
	is a value of type 'bool', and all conditional statements must evaluate to 'bool' value. Although this might at first seem to be a big
	change from C, it isn't. In fact , it is virtually transparent. Here's why: As you know, in C, 'true' is any nonzero value and 'false'
	is 0. This still hodls in C++ because any nonzero value is automatically converted into 'false' when used in a Boolean expression. The
	reverse also ocurs: 'true' is converted to 1 and 'false' is converted to 0 when 'bool' value is used in an integer expression. The
	addition of 'bool' allows more thorough type checking and gives you a way to differentiate between Boolean and integer types. Of course,
	its use is optional; 'bool' is mostly a convenience. 
*/
