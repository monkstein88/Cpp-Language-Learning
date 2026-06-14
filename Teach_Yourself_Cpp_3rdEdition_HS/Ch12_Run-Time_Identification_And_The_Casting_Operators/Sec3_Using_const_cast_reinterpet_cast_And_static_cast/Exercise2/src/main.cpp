
/*
	Exercise 2.: The following program contains an error. Show how to fix it using a 'const_cast'.

  #include <iostream>
  using namespace std;

  void f(const double &i){

    i = 100 ; // Error -fix using 'const_cast'

  }

  int main(){
    double x = 98.6;

    cout << x << endl;
    f(x);
    cout << x << endl;

    return EXIT_SUCCESS;
  }


*/

#include <iostream>
using namespace std;

void f(const double &i){

  const_cast<double &> (i) = 100 ; // Fixed

}

int main(){
  double x = 98.6;

  cout << x << endl;
  f(x);
  cout << x << endl;

  return EXIT_SUCCESS;
}



/*
  This program displays the following when ran:

  $ ./Ch12_Sec3_Exercise2
  98.6
  100

*/
