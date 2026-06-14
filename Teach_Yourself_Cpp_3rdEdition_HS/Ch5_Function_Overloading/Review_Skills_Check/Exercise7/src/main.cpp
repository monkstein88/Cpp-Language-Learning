
/*
  Exercise 7.:  Create a function called 'mag()' using the following prototype that raises 'num' to the order of
  magnitude specified by 'order':

  void mag(long &num, long order);

  For example, if 'num' is 4 and 'order' is 2, when 'mag()' returns, 'num' will be 400. Demonstrate in a program
  that the function works.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for 'EXIT_SUCCESS' and 'EXIT_FAILURE' macros and the 'exit()' function
using namespace std;

void mag(double& num, long order);

int main(){
  double val1 = 2 , val2 = -3, val3 = 0;
  long ord1 = 1, ord2 = -2, ord3 = -3;

  cout << "val1 (original): " << val1 << "\n";
  mag(val1, ord1);
  cout << "val1 (raised to an order of magnitude of " << ord1 << "): " << val1 << "\n";

  cout << "val2 (original): " << val2 << "\n";
  mag(val2, ord2);
  cout << "val2 (raised to an order of magnitude of " << ord2 << "): " << val2 << "\n";

  cout << "val3 (original): " << val3 << "\n";
  mag(val3, ord3);
  cout << "val3 (raised to an order of magnitude of " << ord3 << "): " << val3 << "\n";

  return EXIT_SUCCESS;
}

void mag(double& num, long order){
  //long temp = 1;
  if(order>0){
    for(int i=0; i<order;i++) num *= (+10);
    return;
  }
  if(order==0){
    num = num;
    return;
  }
  if(order < 0){
    order = -order;
    for(int i=0; i<order;i++) num /=(+10);
    return;
  }
}
