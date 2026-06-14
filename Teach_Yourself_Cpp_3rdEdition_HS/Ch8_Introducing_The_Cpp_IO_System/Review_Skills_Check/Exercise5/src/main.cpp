
/*
	Exercise 5.: Fill in the missing constructor functions in this program:
*/

#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

class base{
   int i, j;
public:
   // need/fill constructor here
   base(int a, int b){ i = a; j = b; }
   void showij(){ cout << i << ' ' << j << '\n'; }
};

class derived : public base{
   int k;
public:
   // need/fill constructor here
   derived( int c, int a, int b) : base(a, b) { k = c; }
   void show(){ cout << k << ' '; showij(); }
};

int main(){
   derived ob(1, 2, 3);

   ob.show();

   return EXIT_SUCCESS;
}


/*

*/
