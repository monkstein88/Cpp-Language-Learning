
/*
	Exercise 6.: Is the following fragment correct? If not, why?
*/
class base{
public:
	virtual int(int a) = 0;
	// ...
};

class derived : public base{
public:
	int f(int a, int b){ return a*b; }
};

/*
	My answer:

		- No it is not correct. In the 'base' class the virtual function is not given a function name. Also in the 'derived' class
		the 'f' function does not override the virtual function in base, if that is the intention. The name and the number of
		parameters does not match.

	Official answer:

		-  The fragment is incorrect because the redefinition of a virtual function must have the same return type and type and
		number of parameters as the original function. In this case, the redefinition of f() differs in the number of its
		parameters.

*/
