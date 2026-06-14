
/*
	Exercise 6.: Create a function called 'recip()' that takes one 'double' reference parameter. Have the function
  change the value of that parameter into its reciprocal. Write a program to demonstrate that it works.
*/

#include <iostream>
#include <cstdlib> // holding the definitions for 'EXIT_SUCCESS' and 'EXIT_FAILURE' macros and the 'exit()' function
using namespace std;

void recip(double& f_val);

int main(){
  double var;
  var = 50;

  cout << "var (original): " << var << " ";
  recip(var);
  cout << "var (reciproc): " << var << "\n";

  return EXIT_FAILURE;
}

void recip(double& f_val){
  f_val = 1.0/f_val;
}
