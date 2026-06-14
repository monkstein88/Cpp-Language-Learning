/*
	Exercise 4.: Given this fragment, show how to determine whether 'p' points to an object 'Base' or an object of 'Derived'.

  class Base{
    virtual void f() {}
  };

  class Derived : public Base{

  };

  int main(){
      Base *p, b_ob;
      Derived d_ob;

      // ...

*/
#include <iostream>
#include <typeinfo>
#include <cstdlib>

class Base{
  virtual void f() {}
};

class Derived : public Base{

};

using namespace std;

int main(){
  Base *p, b_ob;
  Derived d_ob;

  p = &b_ob; cout << " p = &b_ob;\n";
  if(dynamic_cast<Derived *>(p))
    cout << "'p' points to 'Derived' class\n";
  else
    cout << "'p' points to 'Base' class\n";

  p = &d_ob; cout << " p = &d_ob;\n";
  if(dynamic_cast<Derived *>(p))
    cout << "'p' points to 'Derived' class\n";
  else
    cout << "'p' points to 'Base' class\n";

  return EXIT_SUCCESS;
}

/*

  This program displays the following when ran:

  $ ./Ch13_Review_Skills_Check_Exercise4
   p = &b_ob;
  'p' points to 'Base' class
   p = &d_ob;
  'p' points to 'Derived' class

*/
