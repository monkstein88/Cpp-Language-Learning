
/*
	Example 1.: The following program creates a generic function that swaps the values of the two variables it is called with. Because the
	general process of exchanging two values is independent of the type of the variables, this process is a good choice to be made into a
	generic function.
*/

// Function template example.
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// This is a function template.
template <class X> void swapargs(X& a, X& b){
	X temp;

	temp = a;
	a = b;
	b = temp;
}


int main(){
	int i=10, j=20;
	float x=10, y=23.3;

	cout << "Original i,j: " << i << ' ' << j << endl;
	cout << "Original x,y: " << x << ' ' << y << endl;

	swapargs(i, j); // swap integers
	swapargs(x, y); // swap floats

	cout << "Swapped i, j: " << i << ' ' << j << endl;
	cout << "Swapped x, y: " << x << ' ' << y << endl;

	return EXIT_SUCCESS;
}

/*
	The keyword 'template' is used to define a generic function. The line:

	template <class X> void swapargs(X& a, X& b)

	tells the compiler two things: that a template is being created and that a generic definition is beginning. Here 'X' is a generic type
	that is used as a placeholder. After the 'template' portion, the function 'swapargs()' is declared, using 'X' as the data type of the
	values that will be swapped. In 'main()', the 'swapargs()' function is called using two different types of data: integers and 'floats'.
	Because 'swapargs()' is a generic function, the compiler automatically creates two versions of 'swapargs()' - one that will exchange
	integer values and one that will exchange floating-point values. You should compile and try this program now.

	Here are some other terms that are sometimes used when templates are discussed and that you might encounter in other C++ literature.
	First, a generic function (that is, a function definition preceeded by a 'template' statement) is also called a 'template function'. When
	the compiler creates a specific version of this function, it is said to have created a 'generated function'. The act of generating a
	function is referred to as 'instantiating' it. Put differently, a generated function is a specific instance of a template function.


	This program displays the following when ran:

	$ ./Ch11_Sec1_Example1
	Original i,j: 10 20
	Original x,y: 10 23.3
	Swapped i, j: 20 10
	Swapped x, y: 23.3 10


*/
