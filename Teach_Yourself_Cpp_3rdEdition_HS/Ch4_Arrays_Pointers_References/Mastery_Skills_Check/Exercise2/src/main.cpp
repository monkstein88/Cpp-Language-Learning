
/*
	Exercise 2.: Modify your solution to the preceding problem so it accesses the array by using a pointer.
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
  a_type* p_arr = (a_type*) arr;

  for(int i=0;i<2;i++){
    for(int j=0; j<5 ; j++){
      cout << "arr[ " << i << " ]" << "[ " << j << " ] = ";
      p_arr->show();
      p_arr++;
    }
  }

  return EXIT_FAILURE;
}
