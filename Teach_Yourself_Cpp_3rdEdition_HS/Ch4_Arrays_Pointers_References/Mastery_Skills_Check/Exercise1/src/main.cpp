
/*
	Exercise 1.: Given the following class, create a two-by-five two-dimensional array and give each object in the
  array an initial value of your own choosing. Then display the contents of the array.

  class a_tpe{
    double a, b;
  public:
    a_type(double x, double y){
      a = x;
      b = y;
    }
   void show(){ cout << a << ' ' << b << "\n"; }
  };

*/

#include <iostream>
#include <cstdlib> // holding the definitions for 'EXIT_SUCCESS' and 'EXIT_FAILURE' macros and the 'exit()' function
using namespace std;

class a_type{
  double a, b;
public:
  a_type(double x, double y){
    a = x;
    b = y;
  }
 void show(){ cout << a << ' ' << b << "\n"; }
};

int main(){

  a_type arr[2][5] = { a_type(0,.1), a_type(-0.1,.3), a_type(-0.3,.5), a_type(-0.5,1), a_type(0,0.00000000000000000),
                       a_type(10.23,10.45), a_type(-100.1,0.0003), a_type(3.1415926,9999999), a_type(-0.9999999,1), a_type(0,0.000000001),
                     };

  for(int i=0;i<2;i++){
    for(int j=0; j<5 ; j++){
      cout << "arr[ " << i << " ]" << "[ " << j << " ] = ";
      arr[i][j].show();
    }
  }

  return EXIT_FAILURE;
}
