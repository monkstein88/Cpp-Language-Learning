
/*
	Intro 1.: In C++ it is possible to define functions that are not actually called but, rather, are expanded in 
	line, at the point of each call. This is much the same way that a C-like parameterized macro works.
	
	The advantage of 'in-line functions' is that they have no overhead associated with the function call and return 
	mechanism - this means faster  execution time. (Remember, the machine instructions that generate the function 
	call and return take time each time a function is called. IF there are parameters, even more time overhead is 
	generated.)

	The disadvantage is that often they are too large and called too often - thus your program grows. For this reason,
	generaly only shorter functions are declared as ain-line functions.
	
	To declare an in-line functions, simply precede the functions's definition with the 'inline' specifier. For example,
	this short program shows how to declare an in-line funtionc:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE
using namespace std;

inline int even(int x){
	return !(x%2);
}


int main(){
	
	if(even(10))
		cout << "10 is even\n";
	if(even(11))
		cout << "11 is even\n";
	
	return EXIT_SUCCESS;
}

/*
	N.B! 'inline' functions must be defined before it is first called.
	
	The advantages of using 'inline' instead of paratereized marcos is twofold.
		- First, it provides a more structured wayt to expand short functions in line. For example, when you are creating
		a parameterized macro, it is easy to forget that extra parentheses are often needed to ensure proper in-line exoansion
		in every case.
		- Second, an in-line function might be able to be optimized more thoroughly by the compiler than a macro expansion.

	It is important to understand that the inline specifier is a request, not a command, to the compiler. If the compiler
	is unable  to fulfill the request, the function is compiled as a normal function and the 'inline' request is ignored.
		
	Depending on the compiler, several restrictions on 'inline' functions may apply. For example, some compilers will not 
	in-line function if it contains:
		- a 'static' variable
		- loop statetement
		- a 'switch' or 'goto'
		- if the function is recursive.
		
	Remember: if any in-line restriction is violated, the compiler is free to generate a normal function.

*/