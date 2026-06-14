
/*
	Example 6.: Even though a template function overloads itself as needed, you can explicitly overload one, too. If you overload a generic
	function, that overloaded function overrides (or *hides*) the generic function relative to that specific version. For example, consider
	this version of Example 1:
*/

// Overriding a template function.
#include <iostream>
#include <cstdlib>
using namespace std;

// This is a function template
template <class X> void swapargs(X& a, X& b){
	X temp;

	temp = a;
	a = b;
	b = temp;
}

// This overrides the generic version of 'swapargs()'.
void swapargs(int a, int b){

	cout << "this is inside swapargs(int, int)\n";
}

int main(){
	int i=10, j=20;
	float x=10, y=23.3;

	cout << "Origianl i, j: " << i << ' ' << j << endl;
	cout << "Original x, y: " << x << ' ' << y << endl;

	swapargs(i, j); // calls overloaded 'swapargs()'
	swapargs(x, y); // swap floats

	cout << "Swapped i, j: " << i << ' ' << j << endl;
	cout << "Swapped x, y: " << x << ' ' << y << endl;

	return EXIT_SUCCESS;
}

/*
	As the comments indicate, when 'swapargs(i, j)' is called, it invokes the explicitly overloaded version of 'swapargs()' defined in the
	program. Thus, the compiler does not generate this version of the generic 'swapargs()' function because the generic function is overriden
	by the explicit overloading.

	Manual overloading of a template, as shown in this example, allows you to tailor a version of a generic function to accomodate a special
	situation. However, in general, if you need to have different versions of a function for different data types, you should use overloaded
	functions rather than templates.

	$ ./Ch11_Sec1_Example6
	Origianl i, j: 10 20
	Original x, y: 10 23.3
	this is inside swapargs(int, int)
	Swapped i, j: 10 20
	Swapped x, y: 23.3 10


*/
