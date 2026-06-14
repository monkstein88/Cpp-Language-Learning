
/*
	Example 1.: One of the main uses for function overloading is to achieve compile-time polymorphis, which embodies the philosophy of one
	interface, many methods. As you know, in C programming it is common to have a number of related functions that differ only by the type
	of data on which they operate. The classic example of this situtation is found in the C standard library. As mentioned earlier in this
	chapter, the library contains the functions 'abs()', 'labs()', and 'fabs()', which return the absolute value of an integer, a long
	integer and a floating-point value, respectively.

	However, because three different names are needed due to the three different data types, the situation is more complicated than it needs
	to be. In all three cases, the absolute value is being returned; only the type of the data differs. In C++, you can correct this
	situation by overloading one name for the three types of dat, as this example illustrates
*/

#include <iostream>
using namespace std;

// Overload abs() three ways
int absolute(int n);
long absolute(long n);
double absolute(double n);

int main(){
	cout << "Absolute value of -10: " << absolute(-10) << "\n\n";
	cout << "Absolute value of -10L: " << absolute(-10L) << "\n\n";
	cout << "Absolute value of -10.01: " << absolute( -10.01) << "\n\n";

	return 0;
}

// abs() for ints
int absolute(int n){
	cout<< "In integer absolute()\n";
	return n<0 ? -n : n;
}

// abs() for longs
long absolute(long n){
	cout << "In long absolute()\n";
	return n<0 ? -n : n;
}

// abs() for doubles
double absolute(double n){
	cout << "In double absolute()\n";
	return n<0 ? -n : n;
}

/*
	As you can see, this program defines three functions called 'abs()'-one for each data type. Inside 'main()', 'absolute()' is callled
	using  three different types of arguments. The compiler automatically calls the correct version of 'absolite()' basedd upon the type of
	data used as an argument. The program produces the following output:

	Absolute value of -10: In integer absolute()
	10

	Absolute value of -10L: In long absolute()
	10

	Absolute value of -10.01: In double absolute()
	10.01


	Although this example is quite simple, it still illustrates the value of function overloading. Because a single name can be used to
	describe a general class of action, the artificial complexity cause by three slightly different names - in this case, 'abs()' ,'fabs()'
	and 'labs()' is eliminated.  You now must remember only one name - the one that describes the 'general' action. It is left to the
	compiler to choose the appropriate 'specific' version of the function (that is , the method) to call. This has the net effect of
	reducing complexity. Thus, through the use of polymorphism, three names have been reduced to one.

	While the use of polymorphism in this example is fairly trivial, you should be able to see how in a very large program, the "one
	inteface, multiple methods" approach can be quite effective.
*/
