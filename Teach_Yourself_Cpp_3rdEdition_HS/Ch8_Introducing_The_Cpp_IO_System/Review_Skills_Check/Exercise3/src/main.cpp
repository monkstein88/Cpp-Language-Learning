
/*
	Exercise 3.: Given the following class hierarchy, in what order are the constructor functions called? In what order are
   the destructor functions called?
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class A{
public:
   A(){ cout << "Constrcuting A\n"; }
   ~A(){ cout << "Destructing A\n"; }
};

class B : public A{
public:
   B(){ cout << "Constructing B\n"; }
   ~B(){ cout <<"Destructing B\n"; }
};

class C : public B{
public:
   C(){ cout << "Constructing C\n"; }
   ~C(){ cout << "Destructing C\n"; }
};


int main(){
   C ob;

   return EXIT_SUCCESS;
}


/*
   My answer:
      -  The above program, the constructors are going to be called in order:
         1. A
         2. B
         3. C

      And the printed out messages would be:
      "Constrcuting A
       Constrcuting B
       Constrcuting C
       Destructing C
       Destructing B
       Destructing A
      "

   Official answer:
      - The program displays the following output, which indicates when the constructors and
      destructors are called.
      Constructing A
      Constructing B
      Constructing C
      Destructing C
      Destructing B
      Destructing A

*/
