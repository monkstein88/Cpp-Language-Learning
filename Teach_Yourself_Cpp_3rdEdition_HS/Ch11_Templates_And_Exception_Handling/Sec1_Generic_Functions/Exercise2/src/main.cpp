
/*
	Exercise 2.: Write a generic function, called 'min()', that returns the lesser of its two arguments. For example, 'min(3, 4)' will return
  3 and 'min('c', 'a')' will return 'a'. Demonstrate your function in a program.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

template<class t_val>
t_val minimum(t_val a,  t_val b){ // Need to use 'minimum()', as the 'min()' is present already in the C++ library (-lm option)
	if(a <= b)
		return a;
	else
		return b;
}

int main(){
	int x = 3, y = 4;
	char ch1 = 'c' , ch2 = 'a';

	cout << "Min() of " << x << " and " << y << " is: " << minimum(x,y) << endl;
	cout << "Min() of " << ch1 << " and " << ch2 << " is: " << minimum(ch1,ch2) << endl;

  return EXIT_SUCCESS;
}



/*
  This program displays the following when ran:

  $ ./Ch11_Sec1_Exercise2.exe
  Min() of 3 and 4 is: 3
  Min() of c and a is: a



*/
