
/*
	Intro 1.: C++ contains a feature that is related to the pointer: the reference. A reference is a an implicit
  pointer that for all intents and purposes acts like another name for a variable. There are three ways that a
  reference can be used:
    - First, a reference can be passed to a function.
    - Second, a reference can be returned by a function.
    - Third, an independent reference can be created.

  Each of these applications of the reference is examined, beginning with reference parameters.

  Without a doubt, the most important use of a reference is as a parameter to a function. To
	help you understand what a reference parameter is and how it works, let's first start with a program
	that uses a pointer (not a reference.)
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void f(int *n); // use a pointer parameter

int main(){
  int i = 0;

  f(&i);

  cout << "Here is i's new value: " << i << "\n";

  return EXIT_SUCCESS;
}

void f(int *n){
  *n = 100; // put 100 into the argument pointed to by n
}

/*
  Here 'f()' loads the value 100 into the integer pointed to by 'n'. In this program, 'f()' is called with the
  address of 'i' in 'main()'. Thus, after 'f()' returns, 'i' cotains the value 100.
  This program demonstrates how a pointer is used as a parameter to manually create a call-by-reference parameter-
  passing mechanism. In a C program, this the only way to achieve a call-by-reference.
*/
