/*
	Exercise 4: Complete the following partial program so that it reports which type of object has been selected by the user.

  #include <iostream>
  #include <typeinfo>
  using namespace std;


  class A{
    virtual void f(){}
  };

  class B : public A{

  };


  int main(){
    A *p, a_ob;
    B b_ob;
    C c_ob;
    int i;

    cout << "Enter 0 for A objects, ";
    cout << "1 for B objects or ";
    cout << "2 for C objects.\n";

    cin >> i;

    if(i==1)
      p = &b_ob;
    else if(i==2)
      p = &c_ob;
    else
       p = &a_ob;

    // report type of object selcted by user

    return 0;
  }


*/

#include <iostream>
#include <typeinfo>
#include <cstdlib>

using namespace std;


class A{
  virtual void f(){}
};

class B : public A{

};

class C : public B{ // correction : this has to be added

};


int main(){
  A *p, a_ob;
  B b_ob;
  C c_ob;
  int i;

  cout << "Enter 0 for A objects, ";
  cout << "1 for B objects or ";
  cout << "2 for C objects.\n";

  cin >> i;

  if(i==1)
    p = &b_ob;
  else if(i==2)
    p = &c_ob;
  else
    p = &a_ob;

  // report type of object selcted by user
  cout << "Object type selected: " << '\''<< typeid(*p).name() <<'\'' << endl;


  return EXIT_SUCCESS;
}




/*
  This program displays the following when ran:

  $ ./Ch12_Mastery_Skills_Check_Exercise4 | c++filt -t
  Enter 0 for A objects, 1 for B objects or 2 for C objects.
  0
  Object type selected: 'A'


  $ ./Ch12_Mastery_Skills_Check_Exercise4 | c++filt -t
  Enter 0 for A objects, 1 for B objects or 2 for C objects.
  1
  Object type selected: 'B'


  $ ./Ch12_Mastery_Skills_Check_Exercise4 | c++filt -t
  Enter 0 for A objects, 1 for B objects or 2 for C objects.
  2
  Object type selected: 'C'


  Official answer:
   - It uses the following section at the end instead:

   if ( typeid (* p ) == typeid ( A ) )
    cout << " A object " ;
   if ( typeid (* p ) == typeid ( B ) )
    cout << " B object " ;
   if ( typeid (* p ) == typeid ( C ) )
    cout << " C object " ;

*/
