
/*
	Exercise 3.: Following is a reworked version of the 'coord' class from the previous chapter. This time it is used as a base for
   another class called 'quad', which also maintains the quadreant the specific point is in. On your own, run this program and try
   to understand its output.
*/


/*
   Overload the '+', '-', and '=' relative to coord class. Then use 'coord' as a base for quad.
*/
#include <iostream>
#include <cstdlib> // holding the definitions for EXIT_SUCCESS and EXIT_FAILURE and the exit() function
using namespace std;

// === class 'coord' === //
class coord{
public:
   int x, y; // coordinate values
   // Constructors
   coord(){ x = 0; y = 0; }
   coord(int i, int j){ x = i; y = j; }
   // Overloading of: Operators via member functions , related to class 'coord'
   coord operator+(coord ob2);
   coord operator-(coord ob2);
   coord operator=(coord ob2);
   // Misc. utility functions
   void get_xy(int& i , int& j){ i = x; j = y; }
};

// Overload '+' relative to 'coord' class.
coord coord::operator+(coord ob2){
   coord temp;

   cout << "Using 'coord' operator+()\n";
   temp.x = x + ob2.x;
   temp.y = y + ob2.y;

   return temp;
}

// Overload '-' relative to 'coord' class
coord coord::operator-(coord ob2){
   coord temp;

   cout << "Using 'coord' operator-()\n";
   temp.x = x - ob2.x;
   temp.y = y - ob2.y;

   return temp;
}

// Overload '=' relative to 'coord' class
coord coord::operator=(coord ob2){

   cout << "Using 'coord' operator=()\n";
   x = ob2.x;
   y = ob2.y;

   return *this; // return the object that is assigned to
}

// === class 'quad' === //
class quad : public coord{
   int quadrant;
public:
   // Constructors
   quad(){
      x = 0;
      y = 0;
      quadrant = 0;
   }
   quad(int x, int y) : coord(x, y){ // when access specifier is not explictly stated , it is assumed to be 'private' - 'coord' is inherited as private
      if(x >= 0 && y >= 0)
         quadrant = 1;
      if(x < 0 && y >= 0)
         quadrant = 2;
      if(x < 0 && y < 0)
         quadrant = 3;
      else
         quadrant = 4;
   }
   // Misc utility functions
   void showq(){
      cout << "Point in Quadrant: " << quadrant << '\n';
   }
   // Overloading of: Operator via member function, related to class 'quad'
   quad operator=(coord ob2); // Note: This is supposed to take a 'coord' type parameter.
};

// Overload '=' realative to 'quad' class
quad quad::operator=(coord ob2){  // Note: This is supposed to take a 'coord' type parameter.

   cout << "Using 'quad' operator=()\n";

   x = ob2.x;
   y = ob2.y;

   if(x >= 0 && y >= 0)
      quadrant = 1;
   if(x < 0 && y >= 0)
      quadrant = 2;
   if(x < 0 && y < 0)
      quadrant = 3;
   else
      quadrant = 4;

   return *this;
}


int main(){
   quad o1(10, 10), o2(15, 3), o3;
   int x,y;

   o3 = o1 + o2; // add two objects - this calls operator+(), that is inherited from 'coord'
   o3.get_xy(x, y);
   o3.showq();
   cout << "(o1 + o2) X: " << x << ", Y: " << y << '\n';

   o3 = o1 - o2; // subtract two objects  - ths calls operator-(), that is inherited from 'coord'
   o3.get_xy(x,y);
   o3.showq();
   cout << "(o1 - o2) X: " << x << ", Y: " << y << '\n';

   o3 = o1; // assign an object - this calls operator=(), that is adjacent to the 'quad' class. Note: The right operand is of type 'quad', not of type 'coord' as you would expect
   o3.get_xy(x, y);
   o3.showq();
   cout << "(o3 = o1) x: " << x << ", Y: " << y << '\n';

   return EXIT_SUCCESS;
}
