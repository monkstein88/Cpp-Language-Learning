
/*
	Intro 2.: However, in C++, you can completely automate this process by using a reference parameter. To
  see how, let's rework the previous program. Here is a version that uses a reference parameter:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

void f(int &n); // declare a reference parameter

int main(){
  int i = 0;

  f(i);

  cout << "Here is i's new value: " << i << "\n";

  return EXIT_SUCCESS;
}

void f(int& n){
  // notice that no '*' is needed in the following statemen
  n = 100; // put 100 into the argument pointed to by f()
}

/*
  Examine this program carefully. First, to declare a reference variable or parameter, you precede the
  variable's name with the '&'. This is how 'n' is declared as a parameter to 'f()'. Now that 'n' is
  a reference, it is no longer necessary-or even legal-to apply the '*' operator. Instead, each time
  'n' is used within 'f()', it is automatically treated as a pointer to the argument used to call 'f()'.
  This means that the statement

  n = 100;

  actually puts the value 100 into the variable used to call 'f()', which in this case, is 'i'. Further,
  when 'f()' is called, there is no need to precede the argument with the '&'. Instead, because 'f()' is
  declared as taking a reference paramenter, the address to the argument is automatically passed to 'f()'.

  To review, when you use a reference parameter, the compiler automatically passes the address of the variable
  used as a the argument. There is no need to manually generate the address of the argument by preceeding it
  with an '&' (in fact, it is not allowed). Further, within the function, the compiler automatically uses
  the variable pointed to by  the reference parameter. There is no need to employ the '*' (and again, it is
  not allowed). Thus, a reference parameter fully atuomates the call-by-reference parameter-passing mechanism.

  It is important to understand that you cannot change what a reference is pointing to. For example, if the
  statement

  n++;

  were put inside 'f()' in the preceding program, 'n' would still be pointing to 'i' in 'main()'. Instead
  of incrementing 'n' , this statement increments the value of the variable being referenced (in this case, 'i').

  Reference paramteres offer several advantages over their (more or less) equivalent pointer alternatives.
    - First, from a practical point of view, you no longer need to remember to pass the address of an
    argument. When a reference parameter is used, the address is atuomatically passed.
    - Second, in the opinion of many programmers, reference parameters offer a cleaner more elegant interface
    thant the rather clumsy explicit pointer mechanism.
    - Third, as you will see in the next section, when an object is passed to a function as a reference, no
    copy is made. This is one way to eliminate the troubles associated with the copy of an argument damaging
    needed elsewhere in the program when its destructor function is called.
*/
